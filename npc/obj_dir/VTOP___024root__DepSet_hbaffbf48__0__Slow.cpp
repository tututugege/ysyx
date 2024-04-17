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
            VL_FATAL_MT("build/TOP.v", 5039, "", "Settle region did not converge.");
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

VL_ATTR_COLD void VTOP___024root___stl_sequent__TOP__0(VTOP___024root* vlSelf);

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
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_commit_pc = VL_RAND_RESET_I(32);
    vlSelf->io_commit_inst = VL_RAND_RESET_I(32);
    vlSelf->io_commit_addr = VL_RAND_RESET_I(32);
    vlSelf->io_commit_mem = VL_RAND_RESET_I(1);
    vlSelf->io_commit_wen = VL_RAND_RESET_I(1);
    vlSelf->io_commit_commit = VL_RAND_RESET_I(1);
    vlSelf->io_commit_halt = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_Pre2IF_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_IF2ID_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_IF2ID_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_r_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_r_bits_rdata = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF_io_brTaken = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF_io_pcBr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF_io_pcNext = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID_io_ID2EX_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID_io_ID2EX_bits_csrRead = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_WBoutValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_brTaken = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_hazard1 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX_io_hazard2 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX_io_stall = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_flush = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_MEM2WB_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_MEM2WB_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_w_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_WBout_bits_syscall = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_WBout_bits_mret = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_r_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_b_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__arbiter_io_InstAxiLite_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__arbiter_io_AxiLite_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__arbiter_io_AxiLite_r_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__arbiter_io_AxiLite_r_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__arbiter_io_AxiLite_r_bits_rid = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__xbar_io_slave_0_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar_io_slave_0_w_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar_io_slave_0_b_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar_io_slave_0_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar_io_slave_0_r_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar_io_slave_1_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar_io_slave_1_w_valid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar_io_slave_1_b_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar_io_slave_1_r_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar_io_slave_2_r_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__Pre2IFValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF2IDValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID2EXValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX2MEMValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM2WBValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__arInstValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__arwDataValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__arAssert = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__arFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___arFireReg_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___Pre2IFValid_T_4 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___Pre2IFValid_T_8 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IFoutValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___ID_io_IF2ID_bits_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_pc = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT___IF2IDValid_T_7 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IDoutValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___EX_io_ID2EX_bits_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_inst = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memRead = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rd = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_regWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc1 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_jump = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_csrWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_csrRead = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_syscall = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_mret = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_halt = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEMRegWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WBRegWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__hazard1_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__hazard2_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EXoutValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___MEM_io_EX2MEM_bits_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_pc = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_inst = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_regWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrAddr = VL_RAND_RESET_I(12);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrWdata = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrRead = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_syscall = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_mret = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_halt = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___EX2MEMValid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEMoutValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___WB_io_MEM2WB_bits_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_pc = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_inst = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_regWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr = VL_RAND_RESET_I(12);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWdata = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrRead = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_mret = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_halt = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT___MEM2WBValid_T_3 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__brFail_io_reset = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__brFail_io_cond = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__brFail_io_out = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__pcReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF__DOT__brBuffer = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF__DOT__brBufferValid = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__brEnable = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT___brBufferValid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__rFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__rdataReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF__DOT___rFireReg_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT___rFireReg_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__IF__DOT__brFail__DOT__record = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_2 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_4 = VL_RAND_RESET_I(9);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_8 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_19 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_28 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_30 = VL_RAND_RESET_I(9);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_32 = VL_RAND_RESET_I(7);
    vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_34 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_52 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_60 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_64 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5 = VL_RAND_RESET_I(10);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12 = VL_RAND_RESET_I(6);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_32 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_34 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_36 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT__Type = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h20af328f__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h35f65dd2__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h1fa5bf6d__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h89094836__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hc297c6cf__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6398cd2a__0 = 0;
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hf773fe7b__0 = 0;
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_0 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_1 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_2 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_3 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_4 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_5 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_6 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_7 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_8 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_9 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_10 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_11 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_12 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_13 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_14 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_15 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_16 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_17 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_18 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_19 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_20 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_21 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_22 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_23 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_24 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_25 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_26 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_45 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_58 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_77 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_90 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__Alu_io_B = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__Alu_io_Result = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__bypassReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__hazard1Reg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__hazard2Reg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT___bypassReg_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__data1 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__data2 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__brEnable = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__brTaken = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0 = 0;
    vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0 = 0;
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_2 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_4 = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_6 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_8 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_10 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_12 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_16 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 = VL_RAND_RESET_Q(34);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_hf12cf007__0 = 0;
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_h61253848__0 = 0;
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT__shiftWdata0 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__MEM__DOT__arDataFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT__awFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT__wFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT__arAssert = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT__awAssert = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT__wAssert = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT___arDataFire_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT___awFire_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT___wFire_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT___io_ar_valid_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT___io_aw_valid_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT___io_aw_valid_T_6 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__MEM__DOT___io_w_bits_wstrb_orMatrixOutputs_T_3 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__MEM__DOT___io_w_bits_wstrb_orMatrixOutputs_T_5 = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_orMatrixOutputs = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__WB__DOT__rdataShift0 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__rdataShift1 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__rdataSignal = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB__DOT__rDataFire = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB__DOT__bFire = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB__DOT__rFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB__DOT__bFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB__DOT___io_WBout_valid_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB__DOT___io_WBout_valid_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mstatusReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mepcReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mcauseReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvalReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T_1 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mstatusWdata = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecWdata = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mepcWdata_T_3 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mcauseWdata_T_3 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__xbar__DOT__arFifo_io_enq_bits_slaveNum = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__xbar__DOT__awFifo_io_enq_bits_slaveNum = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__xbar__DOT__awFifo_io_deq_bits_slaveNum = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__xbar__DOT__awFireReg = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT___arSel_T = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__xbar__DOT__arSel_lo_1 = VL_RAND_RESET_I(13);
    vlSelf->TOP__DOT__xbar__DOT___arSel_T_2 = VL_RAND_RESET_I(27);
    vlSelf->TOP__DOT__xbar__DOT___arSel_T_4 = VL_RAND_RESET_I(30);
    vlSelf->TOP__DOT__xbar__DOT___awSel_T = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__xbar__DOT__awSel_lo_1 = VL_RAND_RESET_I(13);
    vlSelf->TOP__DOT__xbar__DOT___awSel_T_2 = VL_RAND_RESET_I(27);
    vlSelf->TOP__DOT__xbar__DOT___awSel_T_4 = VL_RAND_RESET_I(30);
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h7c0b3a70__0 = 0;
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_heab2129b__0 = 0;
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h17c60d26__0 = 0;
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h84fb32f7__0 = 0;
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h65f26336__0 = 0;
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_hff5c6ba8__0 = 0;
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h19dcd5d3__0 = 0;
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFullNext = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__queue_0_slaveNum = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__queue_1_slaveNum = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFullNext = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__queue_0_slaveNum = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__queue_1_slaveNum = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ramWrapper__DOT__Sram_ren = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__Sram_wen = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo_io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo_io_enq_bits_data = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ramWrapper__DOT__arCount = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT___arCount_T_2 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__rCount = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT___rCount_T_3 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__awCount = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT___awCount_T_2 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__wCount = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT___wCount_T_2 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__bCount = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT___bCount_T_4 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT___nxtVal_T_1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT___nxtVal_T_1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT___nxtVal_T_1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT___nxtVal_T_1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT___nxtVal_T_1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ramWrapper__DOT__Sram__DOT__rdataReg = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isEmpty = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFullNext = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_0_id = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_0_addr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_1_id = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_1_addr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isEmpty = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFullNext = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_0_id = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_0_addr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_1_id = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_1_addr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isEmpty = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFullNext = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_0_data = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_0_strb = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_1_data = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_1_strb = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__uart__DOT__awFifo_io_deq_ready = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__rCount = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT___rCount_T_3 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__awCount = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT___awCount_T_2 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__wCount = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT___wCount_T_2 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__bCount = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT___bCount_T_4 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT___nxtVal_T_1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT___nxtVal_T_1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT___nxtVal_T_1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT___nxtVal_T_1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFull = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isEmpty = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFullNext = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_0_id = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_0_addr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_1_id = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_1_addr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isEmpty = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFullNext = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_0_id = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_0_addr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_1_id = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_1_addr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isEmpty = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFullNext = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_0_data = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_0_strb = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_1_data = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_1_strb = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__clint__DOT__arFifo_io_deq_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__clint__DOT___mtime_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__clint__DOT__rCount = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__clint__DOT___rCount_T_3 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__shiftReg = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT___nxtVal_T_1 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFull = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isEmpty = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtrInc = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T_1 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFullNext = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_0_id = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_0_addr = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_1_id = VL_RAND_RESET_I(3);
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_1_addr = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_hea51fcb4__0 = 0;
    vlSelf->__VdfgTmp_hc5f2be33__0 = 0;
    vlSelf->__VdfgTmp_hc0e75ea4__0 = 0;
    vlSelf->__VdfgTmp_hdc4529e6__0 = 0;
    vlSelf->__Vfunc_pmem_read__0__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
