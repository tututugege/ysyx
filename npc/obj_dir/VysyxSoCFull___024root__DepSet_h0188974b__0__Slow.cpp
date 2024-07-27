// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull___024root.h"

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static__TOP(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static\n"); );
    // Body
    VysyxSoCFull___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_static__TOP(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial__TOP(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial\n"); );
    // Body
    VysyxSoCFull___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__rst_n__0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT____Vcellinp__flash__ss__0 
        = vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_spi_sck__0 
        = vlSelf->ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss__0 
        = vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_psram_sck__0 
        = vlSelf->ysyxSoCFull__DOT___asic_psram_sck;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT___asic_psram_ce_n__0 
        = vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n;
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_initial__TOP(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_initial__TOP\n"); );
    // Body
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss) {
        vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__sel = 0x80U;
    }
}

VL_ATTR_COLD void VysyxSoCFull___024root___eval_final(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VysyxSoCFull___024root___eval_phase__stl(VysyxSoCFull___024root* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_settle(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_settle\n"); );
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
            VysyxSoCFull___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 7343, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VysyxSoCFull___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hc0dde5b8_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h13b579b2_0;
extern const VlUnpacked<VlWide<3>/*79:0*/, 16> VysyxSoCFull__ConstPool__TABLE_h071a2c84_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h9e057a56_0;
extern const VlUnpacked<CData/*2:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hd3c2e03c_0;

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0;
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_1;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_1 = 0;
    SData/*8:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_2;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_2 = 0;
    CData/*3:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_14;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_14 = 0;
    SData/*8:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_15;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_15 = 0;
    CData/*6:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_16;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_16 = 0;
    CData/*3:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_26;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_26 = 0;
    CData/*1:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_29;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_29 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hd6574679__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hd6574679__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h41e34b24__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h41e34b24__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hfca51534__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hfca51534__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hbe4d59e0__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hbe4d59e0__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc2593b3e__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc2593b3e__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hf0a64753__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hf0a64753__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hed0827b8__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hed0827b8__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hcc260bc4__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hcc260bc4__0 = 0;
    IData/*31:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___Alu_io_B_T_8;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___Alu_io_B_T_8 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h52ba7831__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h52ba7831__0 = 0;
    CData/*5:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h64c56670__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h64c56670__0 = 0;
    CData/*4:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h64e61730__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h64e61730__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT___outVec_0_T_8;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT___outVec_0_T_8 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT___outVec_2_T;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT___outVec_2_T = 0;
    SData/*8:0*/ ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2;
    ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0;
    ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0 = 0;
    SData/*8:0*/ ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2;
    ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0;
    ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0 = 0;
    SData/*8:0*/ ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2;
    ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0;
    ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0 = 0;
    SData/*8:0*/ ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2;
    ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0;
    ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0 = 0;
    CData/*0:0*/ __VdfgTmp_h3669d4cb__0;
    __VdfgTmp_h3669d4cb__0 = 0;
    CData/*0:0*/ __VdfgTmp_hdad3e04f__0;
    __VdfgTmp_hdad3e04f__0 = 0;
    CData/*0:0*/ __VdfgTmp_hebe00b40__0;
    __VdfgTmp_hebe00b40__0 = 0;
    CData/*0:0*/ __VdfgTmp_hee0c871e__0;
    __VdfgTmp_hee0c871e__0 = 0;
    CData/*7:0*/ __VdfgTmp_h47b3ba35__0;
    __VdfgTmp_h47b3ba35__0 = 0;
    CData/*0:0*/ __VdfgTmp_hdb514151__0;
    __VdfgTmp_hdb514151__0 = 0;
    CData/*0:0*/ __VdfgTmp_hdbfd317c__0;
    __VdfgTmp_hdbfd317c__0 = 0;
    CData/*0:0*/ __VdfgTmp_hda093f5b__0;
    __VdfgTmp_hda093f5b__0 = 0;
    CData/*0:0*/ __VdfgTmp_h9ccac383__0;
    __VdfgTmp_h9ccac383__0 = 0;
    CData/*7:0*/ __VdfgTmp_h7e6df614__0;
    __VdfgTmp_h7e6df614__0 = 0;
    CData/*0:0*/ __VdfgTmp_h88391828__0;
    __VdfgTmp_h88391828__0 = 0;
    CData/*0:0*/ __VdfgTmp_h880de9f5__0;
    __VdfgTmp_h880de9f5__0 = 0;
    CData/*0:0*/ __VdfgTmp_h8811f8ae__0;
    __VdfgTmp_h8811f8ae__0 = 0;
    CData/*0:0*/ __VdfgTmp_h6b6fc3e3__0;
    __VdfgTmp_h6b6fc3e3__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    vlSelf->externalPins_gpio_out = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_memWrite 
        = (1U & (IData)(((0x23U == (0x407fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                         & (0x3000U != (0x3000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT___pcInc_T 
        = ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__pcReg);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT___enqPtrInc_T 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__enqPtr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT___enqPtrInc_T 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__enqPtr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT___enqPtrInc_T 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__enqPtr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT___enqPtrInc_T 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT__enqPtr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT___complete_T 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__xpiState));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT___io_out_psel_T_1 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___cmd_T = 
        (0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___addr_T = 
        (1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___data_7_T 
        = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    vlSelf->externalPins_vga_hsync = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__hsync;
    vlSelf->externalPins_vga_vsync = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vsync;
    vlSelf->externalPins_vga_valid = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__valid;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap 
        = ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 0x18U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__hValid 
        = ((0x90U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__xCount)) 
           & (0x311U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__xCount)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vValid 
        = ((0x23U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__yCount)) 
           & (0x204U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__yCount)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__rst_n 
        = (1U & (~ ((IData)(vlSelf->reset) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__rst_swt))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst 
            = (3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0x2fU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                                >> 0x24U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                             >> 0x2cU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram 
                       >> 4U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size 
            = (7U & (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0xaU] 
                                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0xbU] 
                                                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xcU] 
                                                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xdU] 
                                                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->__VdfgTmp_ha17ae98a__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    __Vtableidx4 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hc0dde5b8_0
        [__Vtableidx4];
    __Vtableidx7 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_h13b579b2_0
        [__Vtableidx7];
    __Vtableidx9 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[0U] 
        = VysyxSoCFull__ConstPool__TABLE_h071a2c84_0
        [__Vtableidx9][0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[1U] 
        = VysyxSoCFull__ConstPool__TABLE_h071a2c84_0
        [__Vtableidx9][1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state[2U] 
        = VysyxSoCFull__ConstPool__TABLE_h071a2c84_0
        [__Vtableidx9][2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT___psram_ext_RW0_rdata 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT___RW0_rmode_d0)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT___RW0_ren_d0))
            ? vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_ext__DOT___RW0_raddr_d0]
            : 0U);
    vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmask 
        = ((((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_3)) 
            << 3U) | ((((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_2)) 
                       << 2U) | ((((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_1)) 
                                  << 1U) | ((0x38U 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_regWrite 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_regWrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_3 
        = ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst) 
           | ((2U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                         >> 3U)) << 1U)) | (1U & (~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 4U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h70f6fa58__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___instCache_io_in_r_bits_rdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT__deqPtr)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT__queue_1
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT__queue_0);
    vlSelf->externalPins_gpio_seg_0 = (1U | (0xfeU 
                                             & ((~ 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_6) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_5) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_4) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_3) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_2) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display__DOT__outReg_0)))))))) 
                                                << 1U)));
    vlSelf->externalPins_gpio_seg_1 = (1U | (0xfeU 
                                             & ((~ 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_6) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_5) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_4) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_3) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_2) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_1__DOT__outReg_0)))))))) 
                                                << 1U)));
    vlSelf->externalPins_gpio_seg_2 = (1U | (0xfeU 
                                             & ((~ 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_6) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_5) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_4) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_3) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_2) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_2__DOT__outReg_0)))))))) 
                                                << 1U)));
    vlSelf->externalPins_gpio_seg_3 = (1U | (0xfeU 
                                             & ((~ 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_6) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_5) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_4) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_3) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_2) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_3__DOT__outReg_0)))))))) 
                                                << 1U)));
    vlSelf->externalPins_gpio_seg_4 = (1U | (0xfeU 
                                             & ((~ 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_6) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_5) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_4) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_3) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_2) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_4__DOT__outReg_0)))))))) 
                                                << 1U)));
    vlSelf->externalPins_gpio_seg_5 = (1U | (0xfeU 
                                             & ((~ 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_6) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_5) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_4) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_3) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_2) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_5__DOT__outReg_0)))))))) 
                                                << 1U)));
    vlSelf->externalPins_gpio_seg_6 = (1U | (0xfeU 
                                             & ((~ 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_6) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_5) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_4) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_3) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_2) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_6__DOT__outReg_0)))))))) 
                                                << 1U)));
    vlSelf->externalPins_gpio_seg_7 = (1U | (0xfeU 
                                             & ((~ 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_6) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_5) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_4) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_3) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_2) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_1) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__display_7__DOT__outReg_0)))))))) 
                                                << 1U)));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hbe4d59e0__0 
        = (IData)((0x2000U == (0x6000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)));
    __Vtableidx3 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h9e057a56_0
        [__Vtableidx3];
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = (0xffU 
                                              & (~ 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                                  & ((- (IData)(
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                    >> 0xdU)))) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                       >> 0xdU)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hd6574679__0 
        = (IData)((0U == (0xbe000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T 
        = ((2U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 2U)) << 1U)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 5U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_4 
        = ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                  >> 1U)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 5U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_9 
        = ((4U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 4U)) << 2U)) | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 4U)) 
                                         | (1U & (~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 6U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_13 
        = ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst) 
           | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                     >> 3U)) | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 5U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT____Vcellinp__Csr__io_wmask 
        = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWdata
            : 0xffffffffU);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__recvByte 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
           & (IData)((0U != (0x55U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__sel)))));
    vlSelf->__VdfgTmp_hdd09a7b8__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ram_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ram_ext__DOT___R0_addr_d0];
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_1 
        = ((0x80U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                     << 7U)) | ((0x40U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          << 5U)) | 
                                ((0x20U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 2U)) 
                                           << 5U)) 
                                 | ((0x10U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 3U)) 
                                              << 4U)) 
                                    | ((8U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 4U)) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 5U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 6U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                    >> 0xdU))))))))));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_2 
        = ((0x100U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                      << 8U)) | ((0x80U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                           << 6U)) 
                                 | ((0x40U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 2U)) 
                                              << 6U)) 
                                    | ((0x20U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 3U)) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 4U)) 
                                            << 4U)) 
                                          | ((8U & 
                                              ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 5U)) 
                                               << 3U)) 
                                             | ((4U 
                                                 & ((~ 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 6U)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((~ 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0xeU)))))))))));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_15 
        = ((0x100U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                      << 8U)) | ((0x80U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                           << 6U)) 
                                 | ((0x40U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                              << 4U)) 
                                    | ((0x20U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 4U)) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                            >> 1U)) 
                                          | ((8U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 3U)) 
                                             | ((4U 
                                                 & ((~ 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0xcU)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((~ 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xdU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0xeU)))))))))));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_16 
        = ((0x40U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                     << 6U)) | ((0x20U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                          << 4U)) | 
                                ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                           << 2U)) 
                                 | ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst) 
                                    | ((4U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 4U)) 
                                              << 2U)) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 4U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 6U))))))));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h52ba7831__0 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__remainder[1U] 
            >> 0x1fU) ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__remainder[2U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__io_r_ready_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__rFireReg)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arInstValid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT__isEmpty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT__isFull)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT__deqPtr) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT__enqPtr)));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_14 
        = ((8U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 2U)) << 3U)) | ((4U & ((~ 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 4U)) 
                                                << 2U)) 
                                         | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 5U)) 
                                            | (1U & 
                                               (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0xeU))))));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_26 
        = ((8U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 2U)) << 3U)) | ((4U & ((~ 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 4U)) 
                                                << 2U)) 
                                         | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0xeU)))));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc2593b3e__0 
        = (IData)((0x2040U == (0x2040U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_3 
        = (IData)((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_3 
        = (IData)((0xcU != (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))));
    vlSelf->__VdfgTmp_hbdec8fa1__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hfdbd0105__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h2170c127__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h2b9ae16f__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h7730dfc7__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h201fd3b9__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_had71432b__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h2c89421b__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_hc27a8002__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hfd9e4dd0__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_hc883fe42__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h68d14f3a__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h59445149__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h2b4e487a__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h2921a7cb__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hf6f6ec31__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_hf536dcbc__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h83c7b5ef__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h2e3dd07e__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h485e8561__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_ha16805a6__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h9d2483b6__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h6815901f__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h60be65a1__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_hd361cf40__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_ha8478868__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h9bc1fe6a__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h26348201__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_hdea91f5a__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h55c39861__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_ext__DOT___RW0_raddr_d0];
    vlSelf->__VdfgTmp_h55fde8aa__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_h16e3b90e__0 = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_ext__DOT___RW0_raddr_d0];
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hcc260bc4__0 
        = (IData)((0U == (0xc0000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_bits_memWrite_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memWrite));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hc62f52e0__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_1_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT___arFifo_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__deqPtr)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_1_addr
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__queue_0_addr);
    vlSelf->__VdfgTmp_hf134a362__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__io_out_r_ready_0 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)) 
           | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_r_ready_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memRead) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__rFireReg)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arwDataValid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_b_ready_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memWrite) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__bFireReg)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arwDataValid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___awFifo_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__deqPtr)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__queue_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__queue_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isEmpty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__isFull)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__deqPtr) 
              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__arFifo__DOT__enqPtr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata0 
        = ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut)
            ? VL_SHIFTL_III(32,32,32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_rdata2, 8U)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_rdata2);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_h8540bfd7__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state)) 
           | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__active = (IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hd268a2b4__0 
        = (IData)((4U == (0xeU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT___GEN = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankAddr_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___arFifo_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__deqPtr)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__queue_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__arFifo__DOT__queue_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415c1c__0 
        = (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) 
           | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___wSel_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFireReg)) 
           & (0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                         >> 0x10U)));
    vlSelf->__VdfgTmp_hc8a774ff__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__tagv_0_ext__DOT___RW0_rmode_d0)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__tagv_0_ext__DOT___RW0_ren_d0));
    vlSelf->__VdfgTmp_hbcccf179__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__tagv_0_ext__DOT__Memory
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__tagv_0_ext__DOT___RW0_raddr_d0];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                     >> 0x1fU)) | (0U == ((4U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                   >> 0x1fU)) 
                                                 << 2U)) 
                                          | (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                   >> 0x1cU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1 
        = (0U == ((4U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                             >> 0x1fU)) << 2U)) | (3U 
                                                   & (2U 
                                                      ^ 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                       >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_MEM2WB_valid_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_memWrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_bits_memRead_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memRead));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____VdfgTmp_h5fa0db49__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_MEM2WB_valid_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_memRead));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_mret 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_mret));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_syscall 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_syscall));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T 
        = ((8U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp)) 
                  << 3U)) | ((4U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                        >> 1U)) << 2U)) 
                             | ((2U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                           >> 2U)) 
                                       << 1U)) | (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                                      >> 3U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_9 
        = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp)) 
           | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                    >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7 
        = ((4U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp)) 
                  << 2U)) | ((2U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                        >> 1U)) << 1U)) 
                             | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 3U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEMRegWrite 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_regWrite) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_rd))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBRegWrite 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_regWrite) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_rd))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Rf__DOT__Wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_regWrite) 
           & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h70f6fa58__0) 
                        - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__instruction 
        = ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__pcReg)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___instCache_io_in_r_bits_rdata 
                       >> 0x20U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___instCache_io_in_r_bits_rdata));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                 >> 7U));
    vlSelf->externalPins_uart_tx = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                             >> 4U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT___mtvalWdata_T 
        = (((3U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3)))
             ? 0U : ((2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3)))
                      ? 0xffffffffU : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWdata)) 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT____Vcellinp__Csr__io_wmask);
    vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_rdata_MPORT_en 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__recvByte)) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__ram_ext__DOT___R0_en_d0) {
        vlSelf->externalPins_vga_r = (0xffU & (vlSelf->__VdfgTmp_hdd09a7b8__0 
                                               >> 0x10U));
        vlSelf->externalPins_vga_g = (0xffU & (vlSelf->__VdfgTmp_hdd09a7b8__0 
                                               >> 8U));
        vlSelf->externalPins_vga_b = (0xffU & vlSelf->__VdfgTmp_hdd09a7b8__0);
    } else {
        vlSelf->externalPins_vga_r = 0U;
        vlSelf->externalPins_vga_g = 0U;
        vlSelf->externalPins_vga_b = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_memRead 
        = ((0xffU == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_1)) 
           | (0x1ffU == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_jump 
        = ((0x1ffU == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_15)) 
           | (0x7fU == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_16)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT___io_IF2ID_valid_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__retFifo__DOT__isEmpty)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__io_r_ready_0));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hf0a64753__0 
        = ((0xfU == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_14)) 
           | (0xfU == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_26)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_aluOp 
        = ((8U & (((IData)((0x1010U == (0x3014U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                   | ((IData)((0x2000030U == (0x2004034U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                      | (IData)((0x2004030U == (0x2004034U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))))) 
                  << 3U)) | ((4U & (((IData)((0x4010U 
                                              == (0x5014U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                     | ((IData)((0x7000U 
                                                 == 
                                                 (0x7024U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                        | ((IData)(
                                                   (0x7010U 
                                                    == 
                                                    (0x2007014U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                           | (IData)(
                                                     (0x2004030U 
                                                      == 
                                                      (0x2004034U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)))))) 
                                    << 2U)) | ((2U 
                                                & (((IData)(
                                                            ((0x10U 
                                                              == 
                                                              (0x14U 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                             & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hbe4d59e0__0))) 
                                                    | ((0xfU 
                                                        == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_26)) 
                                                       | ((IData)(
                                                                  (0x7000U 
                                                                   == 
                                                                   (0x7024U 
                                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                                          | ((IData)(
                                                                     (0x7010U 
                                                                      == 
                                                                      (0x2007014U 
                                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                                             | ((IData)(
                                                                        (0x2000030U 
                                                                         == 
                                                                         (0x2004034U 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                                                | (IData)(
                                                                          (0x40001010U 
                                                                           == 
                                                                           (0x40001014U 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)))))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0xfU 
                                                      == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_14)) 
                                                     | (((~ 
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 2U)) 
                                                         & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc2593b3e__0)) 
                                                        | ((IData)(
                                                                   ((0x1000U 
                                                                     == 
                                                                     (0x1004U 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                                    & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hbe4d59e0__0))) 
                                                           | ((IData)(
                                                                      (0x5010U 
                                                                       == 
                                                                       (0x42007014U 
                                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                                              | ((IData)(
                                                                         (0x6000U 
                                                                          == 
                                                                          (0x7024U 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                                                 | ((IData)(
                                                                            (0x6000U 
                                                                             == 
                                                                             (0x2007004U 
                                                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                                                    | ((IData)(
                                                                               (0x2000030U 
                                                                                == 
                                                                                (0x2004034U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                                                       | (IData)(
                                                                                (0x40000030U 
                                                                                == 
                                                                                (0x40001034U 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))))))))))))));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_29 
        = (((IData)((0x1073U == (0x107fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
            << 1U) | (IData)(((0x33U == (0x3fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                              & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc2593b3e__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_mret 
        = (IData)(((0x30200073U == (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                   & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hcc260bc4__0)));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hfca51534__0 
        = (IData)(((0U == (0x3c000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                   & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hcc260bc4__0)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__din_buf__out_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_valid) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_1_valid) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hc62f52e0__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
            ? vlSelf->__VdfgTmp_hf134a362__0 : 0ULL);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___awFifo_io_deq_bits)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_b_ready_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata1 
        = ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut)
            ? VL_SHIFTL_III(32,32,32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata0, 0x10U)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata0);
    if ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut)) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb 
            = ((0x80U & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                           << 7U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                     << 6U)) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                  << 6U) 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                    << 7U)) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                   << 6U)))) 
               | ((0x40U & (((IData)((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))) 
                             << 6U) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                        << 6U) | (0xffffffc0U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                     << 5U))))) 
                  | ((0x20U & (((IData)((1U == (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))) 
                                << 5U) | ((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                >> 1U)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                           << 5U) | 
                                          (0xffffffe0U 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                              << 4U))))) 
                     | ((IData)((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))) 
                        << 4U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wdata 
            = ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata1)) 
               << 0x20U);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb 
            = ((8U & (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                        << 3U) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                  << 2U)) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                               << 2U) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                 << 3U)) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                << 2U)))) 
               | ((4U & (((IData)((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))) 
                          << 2U) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                     << 2U) | (0xfffffffcU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                  << 1U))))) 
                  | ((2U & (((IData)((1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))) 
                             << 1U) | ((((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                             >> 1U)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                        << 1U) | (0xfffffffeU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3))))) 
                     | (IData)((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut))))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wdata 
            = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__shiftWdata1));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622edac__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) 
           & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__io_out_penable_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_h8540bfd7__0) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram[0U])));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wstrb));
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_w_bits_wdata;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__write = (
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hd268a2b4__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankSel = 
        (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active)
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                   >> 0xdU) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT___GEN) 
                               >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__state))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__yAbs)
            : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__remainder[1U] 
               ^ (- (IData)((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__remainder[2U])))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT___lzd_io_zero 
        = (IData)((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT___outVec_0_T_8 
        = (IData)((0U == (0xf0f000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT___outVec_2_T 
        = (IData)((0U == (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_hf985a723__0 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_rvalid 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                 >> 5U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__waySel_0 
        = ((((IData)(vlSelf->__VdfgTmp_hc8a774ff__0)
              ? (0x3ffffffU & (vlSelf->__VdfgTmp_hbcccf179__0 
                               >> 1U)) : 0U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__bufTag) 
           & ((IData)(vlSelf->__VdfgTmp_hc8a774ff__0) 
              & vlSelf->__VdfgTmp_hbcccf179__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac9__0 
        = (1U & (((0x8000U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)) 
                              << 0xfU)) | ((0x4000U 
                                            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)) 
                                               << 0xeU)) 
                                           | ((0x2000U 
                                               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))))))))))))))) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instAxiLite_ar_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arFireReg)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0 
        = (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last) 
                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
             & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count))) 
            << 0xfU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count)) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last) 
                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                          & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count))) 
                         << 0xeU) | (((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count)) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last) 
                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                       & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count))) 
                                      << 0xdU) | ((
                                                   (((0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count)) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last) 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                    & (7U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count))) 
                                                   << 0xcU) 
                                                  | (((((0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count)) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                       & (7U 
                                                          != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count))) 
                                                      << 0xbU) 
                                                     | (((((0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count)) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last) 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                          & (7U 
                                                             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count))) 
                                                         << 0xaU) 
                                                        | (((((0U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count)) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last) 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                             & (7U 
                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count))) 
                                                            << 9U) 
                                                           | (((((0U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count)) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last) 
                                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                & (7U 
                                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count))) 
                                                               << 8U) 
                                                              | (((((0U 
                                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count)) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last) 
                                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                   & (7U 
                                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))) 
                                                                  << 7U) 
                                                                 | (((((0U 
                                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count)) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last) 
                                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                      & (7U 
                                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))) 
                                                                     << 6U) 
                                                                    | (((((0U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count)) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last) 
                                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                         & (7U 
                                                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))) 
                                                                        << 5U) 
                                                                       | (((((0U 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count)) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                            & (7U 
                                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))) 
                                                                           << 4U) 
                                                                          | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                               & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))) 
                                                                              << 3U) 
                                                                             | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))) 
                                                                                << 2U) 
                                                                                | (((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))) 
                                                                                << 1U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))) 
                                                                                & (7U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_mret) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_syscall));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc327c5e2__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rs1) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_rd)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEMRegWrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09a5d97f__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rs2) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_rd)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEMRegWrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard1_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rs1) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_rd)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBRegWrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard2_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rs2) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_rd)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBRegWrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mtvecWdata 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT___mtvalWdata_T 
           | (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_func3))
                ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_csrWdata)
                : 0U) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mtvecReg));
    vlSelf->ysyxSoCFull__DOT__psram__DOT____Vcellinp__psram_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__psram_rdata_MPORT_en) 
           & ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_3) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_2) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_0) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wmask_1))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__io_IF2ID_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT___io_IF2ID_valid_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF__DOT__rFireReg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_pcSrc 
        = (((IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_3))) 
            << 1U) | (1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                             >> 3U) | (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hf0a64753__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type 
        = ((4U & (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_4)) 
                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                       >> 3U) | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_13)))) 
                  << 2U)) | ((((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_9)) 
                               | (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hf0a64753__0)) 
                              << 1U) | (1U & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T)) 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 6U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_csrWrite 
        = ((~ (IData)((0x2000U == (0xfa000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)))) 
           & (0U != (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_29)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__io_ID2EX_bits_csrRead_0 
        = ((~ (IData)((0x1000U == (0x3f80U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)))) 
           & (0U != (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_29)));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h41e34b24__0 
        = ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
               >> 0x19U)) & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hfca51534__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
               ? 0U : 0xffffffffU) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                         ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                           ? 0U : 0xffffffffU)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                          ? 0U : 0xffffffffU))) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                ? 0U : 0xffffffffU)) | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__din_buf__out_en)
                                           ? 0xffffffffU
                                           : 0U) & 
                                         (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__din_buf__out_en)
                                            ? ((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT___GEN) 
                                                   >> 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hc62f52e0__0)
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_bkAddr)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_bkAddr))))
                                                ? (
                                                   (((((((IData)(vlSelf->__VdfgTmp_h55fde8aa__0)
                                                          ? 
                                                         (0xffU 
                                                          & ((IData)(vlSelf->__VdfgTmp_h16e3b90e__0) 
                                                             >> 8U))
                                                          : 0U) 
                                                        << 0x18U) 
                                                       | ((((IData)(vlSelf->__VdfgTmp_hdea91f5a__0)
                                                             ? 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->__VdfgTmp_h55c39861__0) 
                                                                >> 8U))
                                                             : 0U) 
                                                           << 0x10U) 
                                                          | ((((IData)(vlSelf->__VdfgTmp_h9bc1fe6a__0)
                                                                ? 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__VdfgTmp_h26348201__0) 
                                                                   >> 8U))
                                                                : 0U) 
                                                              << 8U) 
                                                             | ((IData)(vlSelf->__VdfgTmp_hd361cf40__0)
                                                                 ? 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__VdfgTmp_ha8478868__0) 
                                                                    >> 8U))
                                                                 : 0U)))) 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_1_bkAddr), 3U))) 
                                                     << 0x18U) 
                                                    | (0xff0000U 
                                                       & ((((((IData)(vlSelf->__VdfgTmp_h55fde8aa__0)
                                                               ? 
                                                              (0xffU 
                                                               & (IData)(vlSelf->__VdfgTmp_h16e3b90e__0))
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_hdea91f5a__0)
                                                                  ? 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->__VdfgTmp_h55c39861__0))
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h9bc1fe6a__0)
                                                                     ? 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->__VdfgTmp_h26348201__0))
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_hd361cf40__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->__VdfgTmp_ha8478868__0))
                                                                      : 0U)))) 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_1_bkAddr), 3U))) 
                                                          << 0x10U))) 
                                                   | ((0xff00U 
                                                       & ((((((IData)(vlSelf->__VdfgTmp_h6815901f__0)
                                                               ? 
                                                              (0xffU 
                                                               & ((IData)(vlSelf->__VdfgTmp_h60be65a1__0) 
                                                                  >> 8U))
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_ha16805a6__0)
                                                                  ? 
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h9d2483b6__0) 
                                                                     >> 8U))
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h2e3dd07e__0)
                                                                     ? 
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h485e8561__0) 
                                                                        >> 8U))
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_hf536dcbc__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->__VdfgTmp_h83c7b5ef__0) 
                                                                         >> 8U))
                                                                      : 0U)))) 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_bkAddr), 3U))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (((((IData)(vlSelf->__VdfgTmp_h6815901f__0)
                                                                ? 
                                                               (0xffU 
                                                                & (IData)(vlSelf->__VdfgTmp_h60be65a1__0))
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((IData)(vlSelf->__VdfgTmp_ha16805a6__0)
                                                                   ? 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->__VdfgTmp_h9d2483b6__0))
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((IData)(vlSelf->__VdfgTmp_h2e3dd07e__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->__VdfgTmp_h485e8561__0))
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((IData)(vlSelf->__VdfgTmp_hf536dcbc__0)
                                                                       ? 
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->__VdfgTmp_h83c7b5ef__0))
                                                                       : 0U)))) 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_1_bkAddr), 3U))))))
                                                : (
                                                   (((((((IData)(vlSelf->__VdfgTmp_h2921a7cb__0)
                                                          ? 
                                                         (0xffU 
                                                          & ((IData)(vlSelf->__VdfgTmp_hf6f6ec31__0) 
                                                             >> 8U))
                                                          : 0U) 
                                                        << 0x18U) 
                                                       | ((((IData)(vlSelf->__VdfgTmp_h59445149__0)
                                                             ? 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->__VdfgTmp_h2b4e487a__0) 
                                                                >> 8U))
                                                             : 0U) 
                                                           << 0x10U) 
                                                          | ((((IData)(vlSelf->__VdfgTmp_hc883fe42__0)
                                                                ? 
                                                               (0xffU 
                                                                & ((IData)(vlSelf->__VdfgTmp_h68d14f3a__0) 
                                                                   >> 8U))
                                                                : 0U) 
                                                              << 8U) 
                                                             | ((IData)(vlSelf->__VdfgTmp_hc27a8002__0)
                                                                 ? 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__VdfgTmp_hfd9e4dd0__0) 
                                                                    >> 8U))
                                                                 : 0U)))) 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_1_bkAddr), 3U))) 
                                                     << 0x18U) 
                                                    | (0xff0000U 
                                                       & ((((((IData)(vlSelf->__VdfgTmp_h2921a7cb__0)
                                                               ? 
                                                              (0xffU 
                                                               & (IData)(vlSelf->__VdfgTmp_hf6f6ec31__0))
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_h59445149__0)
                                                                  ? 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->__VdfgTmp_h2b4e487a__0))
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_hc883fe42__0)
                                                                     ? 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->__VdfgTmp_h68d14f3a__0))
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_hc27a8002__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->__VdfgTmp_hfd9e4dd0__0))
                                                                      : 0U)))) 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_1_bkAddr), 3U))) 
                                                          << 0x10U))) 
                                                   | ((0xff00U 
                                                       & ((((((IData)(vlSelf->__VdfgTmp_had71432b__0)
                                                               ? 
                                                              (0xffU 
                                                               & ((IData)(vlSelf->__VdfgTmp_h2c89421b__0) 
                                                                  >> 8U))
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((IData)(vlSelf->__VdfgTmp_h7730dfc7__0)
                                                                  ? 
                                                                 (0xffU 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h201fd3b9__0) 
                                                                     >> 8U))
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((IData)(vlSelf->__VdfgTmp_h2170c127__0)
                                                                     ? 
                                                                    (0xffU 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h2b9ae16f__0) 
                                                                        >> 8U))
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_hbdec8fa1__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->__VdfgTmp_hfdbd0105__0) 
                                                                         >> 8U))
                                                                      : 0U)))) 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_bkAddr), 3U))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (((((IData)(vlSelf->__VdfgTmp_had71432b__0)
                                                                ? 
                                                               (0xffU 
                                                                & (IData)(vlSelf->__VdfgTmp_h2c89421b__0))
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((IData)(vlSelf->__VdfgTmp_h7730dfc7__0)
                                                                   ? 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->__VdfgTmp_h201fd3b9__0))
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((IData)(vlSelf->__VdfgTmp_h2170c127__0)
                                                                      ? 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->__VdfgTmp_h2b9ae16f__0))
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((IData)(vlSelf->__VdfgTmp_hbdec8fa1__0)
                                                                       ? 
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->__VdfgTmp_hfdbd0105__0))
                                                                       : 0U)))) 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_1_bkAddr), 3U)))))))
                                            : 0U) & 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__din_buf__out_en)
                                            ? 0xffffffffU
                                            : 0U))) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__din_buf__out_en)
                                            ? 0xffffffffU
                                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_he52184fd__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__write) 
            << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_hd268a2b4__0) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__active)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankSel)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__write));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankSel) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_0 
        = ((0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                   >> 0x1cU)) & ((0U != (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                                                 >> 0x18U))) 
                                 | ((IData)(((0U == 
                                              (0xf00000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)) 
                                             & (0U 
                                                != 
                                                (0xfU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                                                    >> 0x10U))))) 
                                    | (((0U != (0xfU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                                                   >> 8U))) 
                                        & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT___outVec_0_T_8)) 
                                       | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT___outVec_0_T_8) 
                                          & (0U == 
                                             (0xf0U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_2 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT___outVec_2_T) 
           & (IData)((0U == (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_1 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT___outVec_2_T) 
           & (IData)(((0U != (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)) 
                      | (0U == (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___msdram_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_hf985a723__0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hdb2503a3__0 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__waySel_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___nodeIn_awready_T 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
        = (~ (((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1 
                   >> 3U)) << 3U) | (7U & ((~ ((IData)(7U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))) 
                                           | (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1457f715__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
                 & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT____VdfgTmp_h2d520f38__0 
        = (1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__awAssert) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wAssert))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_ar_valid_0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__arDataFireReg) 
               | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__arAssert)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush)) 
                  | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut 
                       >> 3U) == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                  >> 3U)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_memWrite) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_memRead) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX2MEMValid) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM2WBValid)))))))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_MEM2WB_valid_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_hazard1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard1_1) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc327c5e2__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc327c5e2__0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut
            : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc327c5e2__0)) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard1_1))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__hazard1Reg)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__bypass1Reg
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rdata1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_hazard2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard2_1) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09a5d97f__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_stall 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_hc327c5e2__0) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_MEM2WB_valid_T)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard1_1) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard2_1)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__io_WBout_bits_memRead_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut
            : (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__hazard2_1))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB_io_MEM2WB_bits_r_aluOut
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__hazard2Reg)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__bypass2Reg
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rdata2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_imm 
        = (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type))
             ? (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                             >> 0x1fU))) << 0xcU) | 
                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                 >> 0x14U)) : 0U) | (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type))
                                       ? (((- (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 7U))))
                                       : 0U) | (((3U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 7U)))))
                                                  : 0U) 
                                                | (((5U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | ((0xff000U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst) 
                                                        | ((0x800U 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0x14U)))))
                                                     : 0U) 
                                                   | ((4U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__Type))
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)
                                                       : 0U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_regWrite 
        = (1U & ((0xffU == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_1)) 
                 | ((0x1ffU == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_2)) 
                    | ((IData)((0x13U == (0x107bU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                       | ((IData)(((0x13U == (0x705bU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                                   & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hd6574679__0))) 
                          | ((IData)(((0x13U == (0x5bU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                                      & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h41e34b24__0))) 
                             | ((IData)((0x17U == (0x5fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                | ((IData)(((0x33U 
                                             == (0x7bU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                                            & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hfca51534__0))) 
                                   | ((0x1ffU == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_15)) 
                                      | ((0x7fU == (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___DecoderOut_andMatrixOutputs_T_16)) 
                                         | ((IData)(
                                                    (0x2013U 
                                                     == 
                                                     (0x207bU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst))) 
                                            | ((IData)(
                                                       ((0x5013U 
                                                         == 
                                                         (0x705bU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                        & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hd6574679__0))) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__io_ID2EX_bits_csrRead_0)))))))))))));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hed0827b8__0 
        = (IData)(((0U == (0x1e00000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                   & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_h41e34b24__0)));
    if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__rankSel) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_he52184fd__0;
    } else {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram0Hi__io_cmd 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT____VdfgTmp_he52184fd__0;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT____Vcellinp__sram1Hi__io_cmd = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN 
        = ((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0)) 
            << 1U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN 
        = ((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0)) 
            << 1U) | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                          >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0)));
    if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0) {
        ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_3;
        ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_3;
        __VdfgTmp_h9ccac383__0 = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
        __VdfgTmp_h47b3ba35__0 = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                           >> 1U));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
        ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2 
            = (((IData)(__VdfgTmp_h47b3ba35__0) << 1U) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__wbBurstSel));
        ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2 
            = (((IData)(__VdfgTmp_h47b3ba35__0) << 1U) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__wbBurstSel));
    } else {
        ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0 = 0U;
        ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0 = 0U;
        __VdfgTmp_h9ccac383__0 = 0U;
        __VdfgTmp_h47b3ba35__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr = 0U;
        ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2 
            = ((0x1feU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_rdColAddr)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdBurstSel));
        ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2 
            = ((0x1feU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_rdColAddr)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdBurstSel));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN 
        = ((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0)) 
            << 1U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN 
        = ((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                 >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0)) 
            << 1U) | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                          >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0)));
    if (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0) {
        ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_3;
        ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_3;
        __VdfgTmp_h6b6fc3e3__0 = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q));
        __VdfgTmp_h7e6df614__0 = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                           >> 1U));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
        ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2 
            = (((IData)(__VdfgTmp_h7e6df614__0) << 1U) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__wbBurstSel));
        ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2 
            = (((IData)(__VdfgTmp_h7e6df614__0) << 1U) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__wbBurstSel));
    } else {
        ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0 = 0U;
        ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0 = 0U;
        __VdfgTmp_h6b6fc3e3__0 = 0U;
        __VdfgTmp_h7e6df614__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr = 0U;
        ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2 
            = ((0x1feU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_rdColAddr)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdBurstSel));
        ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2 
            = ((0x1feU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_rdColAddr)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdBurstSel));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__casez_tmp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_2)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_1)
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_0)
                    ? ((2U & ((~ (IData)((0U != (0xcU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))) 
                              << 1U)) | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                                             >> 3U)) 
                                         & (2U != (6U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in))))
                    : ((2U & ((~ (IData)((0U != (0xc0U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))) 
                              << 1U)) | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                                             >> 7U)) 
                                         & (0x20U != 
                                            (0x60U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))))
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_0)
                    ? ((2U & ((~ (IData)((0U != (0xc00U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))) 
                              << 1U)) | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                                             >> 0xbU)) 
                                         & (0x200U 
                                            != (0x600U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in))))
                    : ((2U & ((~ (IData)((0U != (0xc000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))) 
                              << 1U)) | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                                             >> 0xfU)) 
                                         & (0x2000U 
                                            != (0x6000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in))))))
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_1)
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_0)
                    ? ((2U & ((~ (IData)((0U != (0xc0000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))) 
                              << 1U)) | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                                             >> 0x13U)) 
                                         & (0x20000U 
                                            != (0x60000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in))))
                    : ((2U & ((~ (IData)((0U != (0xc00000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))) 
                              << 1U)) | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                                             >> 0x17U)) 
                                         & (0x200000U 
                                            != (0x600000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))))
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_0)
                    ? ((2U & ((~ (IData)((0U != (0xc000000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))) 
                              << 1U)) | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                                             >> 0x1bU)) 
                                         & (0x2000000U 
                                            != (0x6000000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in))))
                    : ((2U & ((~ (IData)((0U != (0xc0000000U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))) 
                              << 1U)) | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in 
                                             >> 0x1fU)) 
                                         & (0x20000000U 
                                            != (0x60000000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____Vcellinp__lzd__io_in)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hfe177532__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hdb2503a3__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2 
        = (0U == ((6U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                         >> 0x1bU)) | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x18U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0 
        = ((0U == ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                          >> 0x1cU)) | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U)))) 
           | ((0U == ((6U & (4U ^ (0x1eU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x1bU)))) 
                      | (1U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                  >> 0x18U))))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_w_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_MEM2WB_valid_T_1) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wFireReg)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT____VdfgTmp_h2d520f38__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_aw_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT___io_MEM2WB_valid_T_1) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__awFireReg)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT____VdfgTmp_h2d520f38__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__assert_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__assertId)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_ar_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT___io_rem_T_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
              >> 0x1fU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___pcBrImm_T 
        = ((((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pc
              : 0U) | ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1
                        : 0U)) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_imm);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX 
        = (((QData)((IData)(((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3))) 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc1))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pc
            : ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc1))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1
                : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h59659a97__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID2EXValid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT___io_res_T_3 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)) 
                 & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                     ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2) 
                    >> 0x1fU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0 
        = (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                     >> 0x1fU)) | (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3) 
                                      >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h68e1d768__0 
        = ((6U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                   >> 0x1dU)) | (5U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                        >> 0x1dU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha0b85421__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 0x1bU))) | (5U == (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                >> 0x1bU))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha690227c__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 5U))) | (5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                  >> 5U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5be92e1d__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 0x19U))) | (5U == (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                >> 0x19U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_hb76a2bdc__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 0x17U))) | (5U == (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                >> 0x17U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha492cabb__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 0xdU))) | (5U == (7U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0xdU))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h68865fde__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 0x15U))) | (5U == (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                >> 0x15U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h557bf8db__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 1U))) | (5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                  >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5102e58c__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 7U))) | (5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                  >> 7U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_hac82e295__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 3U))) | (5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                  >> 3U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha28613e5__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 0x11U))) | (5U == (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                >> 0x11U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5feb7463__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 0xfU))) | (5U == (7U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0xfU))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h514988d4__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 9U))) | (5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                  >> 9U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h1e610ac9__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 0x13U))) | (5U == (7U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                >> 0x13U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h4c6e6f5e__0 
        = ((6U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                         >> 0xbU))) | (5U == (7U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0xbU))));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___Alu_io_B_T_8 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc2))
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2
             : 0U) | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_imm
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_syscall 
        = (IData)(((0x73U == (0x1fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                   & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hed0827b8__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___ID_io_ID2EX_bits_halt 
        = (IData)(((0x100073U == (0x1fffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_IF2ID_bits_r_inst)) 
                   & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hed0827b8__0)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_MPORT_3_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_h9ccac383__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_MPORT_3_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_h9ccac383__0));
    __VdfgTmp_hdb514151__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr)));
    __VdfgTmp_hdbfd317c__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr)));
    __VdfgTmp_hda093f5b__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h8dceafb6__0) 
                              & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__writeBkAddr)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_MPORT_3_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_h6b6fc3e3__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_MPORT_3_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid) 
            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_h6b6fc3e3__0));
    __VdfgTmp_h88391828__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr)));
    __VdfgTmp_h880de9f5__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr)));
    __VdfgTmp_h8811f8ae__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h8dceafb6__0) 
                              & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__writeBkAddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzdShamt 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT___lzd_io_zero) 
            << 5U) | ((- (IData)((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT___lzd_io_zero))))) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_2) 
                          << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_1) 
                                     << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__outVec_0) 
                                                << 2U) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzd__DOT__casez_tmp))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT____VdfgTmp_hfe177532__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instAxiLite_ar_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
            << 2U) | (((0U == ((6U & (4U ^ (0x1eU & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 0x1bU)))) 
                               | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                        >> 0x18U)))) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___wSel_T)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_w_valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid 
        = ((0x200U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                       >> 0x10U)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__io_aw_valid_0)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arburst = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arsize 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_EX2MEM_bits_r_func3));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arburst 
            = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen 
            = (3U & (- (IData)((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instCache__DOT__state)))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arsize = 2U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2fU)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                                >> 0x24U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram 
                             >> 0x2cU)));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT___GEN));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arburst));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arlen));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_master_ar_bits_arsize));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IF__io_pcBr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_syscall)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mtvecReg
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___WB_io_WBout_bits_mret)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WB__DOT__Csr__DOT__mepcReg
                : (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___pcBrImm_T
                     : 0U) | ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_pcSrc))
                               ? (0xfffffffeU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___pcBrImm_T)
                               : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
        = ((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2))
            ? 0ULL : (0x1ffffffffULL & ((1U == (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                         : ((2U == 
                                             (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2))
                                             ? VL_SHIFTL_QQI(33,33,32, 
                                                             (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                             : (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_9)) 
           & ((~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)))) 
              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                 >> 0x1fU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div_io_div 
        = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluOp)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____VdfgTmp_h59659a97__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h68e1d768__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                         >> 0x1dU))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                             >> 0x1dU))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                      >> 0x1dU)) 
                                                    | (1U 
                                                       == 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                        >> 0x1dU)))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha0b85421__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0x1bU)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 0x1bU)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 0x1bU))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 0x1bU))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha690227c__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 5U)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 5U)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 5U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 5U))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5be92e1d__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0x19U)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 0x19U)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 0x19U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 0x19U))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_hb76a2bdc__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0x17U)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 0x17U)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 0x17U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 0x17U))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha492cabb__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0xdU)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 0xdU)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 0xdU))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 0xdU))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h68865fde__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0x15U)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 0x15U)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 0x15U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 0x15U))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h557bf8db__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 1U)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 1U)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 1U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 1U))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5102e58c__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 7U)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 7U)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 7U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 7U))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_hac82e295__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 3U)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 3U)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 3U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 3U))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha28613e5__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0x11U)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 0x11U)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 0x11U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 0x11U))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5feb7463__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0xfU)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 0xfU)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 0xfU))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 0xfU))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h514988d4__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 9U)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 9U)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 9U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 9U))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h1e610ac9__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0x13U)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 0x13U)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 0x13U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 0x13U))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
        = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h4c6e6f5e__0)
                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX)
                              : ((4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                               >> 0xbU)))
                                  ? VL_SHIFTL_QQI(33,33,32, 
                                                  (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX), 1U)
                                  : ((3U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                   >> 0xbU)))
                                      ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                                         << 1U) : (
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                         >> 0xbU))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                           >> 0xbU))))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__extX
                                                    : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt 
        = (((0x18U & ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___Alu_io_B_T_8) 
            | (7U & (ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___Alu_io_B_T_8 
                     | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc2)) 
                        << 2U)))) | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_rs2)
                                      : 0U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_3_MPORT_3_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_3_MPORT_3_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_0) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_1) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_2) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_3_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rowAddr_3) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_0) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_1) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_2) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_3_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rowAddr_3) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_MPORT_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_hdb514151__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_MPORT_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_hdb514151__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_MPORT_1_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_hdbfd317c__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_MPORT_1_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_hdbfd317c__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_MPORT_2_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_hda093f5b__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_MPORT_2_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_hda093f5b__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_3_MPORT_3_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_3_MPORT_3_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_0) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_1) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_2) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_3_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rowAddr_3) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_0) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_1) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_2) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_3_ext__RW0_addr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rowAddr_3) 
            << 9U) | (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT___GEN_2));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_MPORT_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_h88391828__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_MPORT_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_h88391828__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_MPORT_1_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_h880de9f5__0));
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__state))) {
        __Vtemp_4[0U] = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__xAbs);
        __Vtemp_4[1U] = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__xAbs 
                                 >> 0x20U));
        __Vtemp_4[2U] = 0U;
    } else {
        __Vtemp_4[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__remainder[0U];
        __Vtemp_4[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__remainder[1U];
        __Vtemp_4[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__remainder[2U];
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_MPORT_1_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_h880de9f5__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_MPORT_2_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_h8811f8ae__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_MPORT_2_en 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_valid) 
            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__rdFifo_0_bkAddr))) 
           | (IData)(__VdfgTmp_h8811f8ae__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__finalShift 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__count) 
           <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzdShamt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h1457f715__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa163a__0 
        = (1U & (((0x8000U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)) 
                              << 0xfU)) | ((0x4000U 
                                            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)) 
                                               << 0xeU)) 
                                           | ((0x2000U 
                                               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)) 
                                                  << 0xdU)) 
                                              | ((0x1000U 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)) 
                                                     << 0xcU)) 
                                                 | ((0x800U 
                                                     & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)) 
                                                           << 0xaU)) 
                                                       | ((0x200U 
                                                           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)) 
                                                              << 9U)) 
                                                          | ((0x100U 
                                                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)) 
                                                                 << 8U)) 
                                                             | ((0x80U 
                                                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)) 
                                                                    << 7U)) 
                                                                | ((0x40U 
                                                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)) 
                                                                       << 6U)) 
                                                                   | ((0x20U 
                                                                       & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)) 
                                                                          << 5U)) 
                                                                      | ((0x10U 
                                                                          & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)) 
                                                                             << 4U)) 
                                                                         | ((8U 
                                                                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)) 
                                                                                << 2U)) 
                                                                               | ((2U 
                                                                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))))))))))))))) 
                 >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp)) 
                 + VL_SHIFTR_III(2,2,32, (((IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2))) 
                                           << 1U) | 
                                          (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 1U))) + VL_SHIFTR_III(2,2,32, 
                                                         ((((~ (IData)(
                                                                       (3U 
                                                                        == 
                                                                        (3U 
                                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                                                            & (2U 
                                                               == 
                                                               (3U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2))) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                                                        >> 1U)))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__signal 
        = (1U & ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                  ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                             >> 0x20U)) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                           >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__io_EX2MEM_valid_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__EX__io_stall)) 
                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div_io_div)) 
                    | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__state)))));
    vlSelf->__VdfgTmp_h526ce8c0__0 = (1U & (~ ((3U 
                                                != 
                                                (3U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                                                ? (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                           >> 0x20U))
                                                : (
                                                   (~ (IData)(
                                                              (0x60000000U 
                                                               == 
                                                               (0x60000000U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                      >> 0x1fU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_15_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                               >> 0x20U))) 
                                + (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                            >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_12_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 0x19U))) + VL_SHIFTR_III(2,2,32, 
                                                            ((2U 
                                                              & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                  << 1U) 
                                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                                    >> 0x16U))) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                                           >> 0x19U)))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_13_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 0x1aU))) + VL_SHIFTR_III(2,2,32, 
                                                            ((2U 
                                                              & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                  << 1U) 
                                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                                    >> 0x17U))) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                                           >> 0x1aU)))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_9_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 0xaU))) + VL_SHIFTR_III(2,2,32, 
                                                           ((2U 
                                                             & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                 << 1U) 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                                   >> 7U))) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                                          >> 0xaU)))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_8_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 9U))) + VL_SHIFTR_III(2,2,32, 
                                                         ((2U 
                                                           & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                               << 1U) 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                                 >> 6U))) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                                        >> 9U)))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_11_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 0x12U))) + VL_SHIFTR_III(2,2,32, 
                                                            ((2U 
                                                              & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                  << 1U) 
                                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                                    >> 0xfU))) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                                           >> 0x12U)))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_10_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 0x11U))) + VL_SHIFTR_III(2,2,32, 
                                                            ((2U 
                                                              & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                                  << 1U) 
                                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                                    >> 0xeU))) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                                           >> 0x11U)))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_14_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x18000000U 
                                        == (0x18000000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 0x1dU))))) + ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                            >> 0x1fU))) 
                                                + (1U 
                                                   & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                         >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_131__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_13_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                        >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_12_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                        >> 0x15U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_9_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 0xaU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                             >> 8U))) 
                                              + (1U 
                                                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                       >> 6U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_8_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 9U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                           >> 7U))) 
                                            + (1U & 
                                               ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                   >> 5U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_10_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                        >> 0xdU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_11_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                        >> 0xeU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_130__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x6000000U 
                                        == (0x6000000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 0x1bU))))) + ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                            >> 0x1fU))) 
                                                + (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                              >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_129__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_123__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                             >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_121__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                             >> 0x15U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                >> 0xaU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                             >> 8U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                            >> 6U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_107__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                             >> 0xeU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_104__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                                             >> 0xdU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_6_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181)) 
                 + VL_SHIFTR_III(2,2,32, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_hb76a2bdc__0) 
                                           << 1U) | 
                                          (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_7_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 1U))) + VL_SHIFTR_III(2,2,32, 
                                                         ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_hb76a2bdc__0)) 
                                                            & (0x2000000U 
                                                               == 
                                                               (0x3800000U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2))) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                                        >> 1U)))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_6_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 2U))) + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195)) 
                                            + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5be92e1d__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_7_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 3U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 1U))) 
                                            + ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5be92e1d__0)) 
                                               & (4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                      >> 0x19U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_128__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x1800000U 
                                        == (0x1800000U 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 0x19U))))) + ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                            >> 0x1fU))) 
                                                + (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                              >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 9U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 7U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                             >> 5U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 8U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 6U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                             >> 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 5U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 3U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                             >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 6U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 4U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                             >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 7U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 5U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                             >> 3U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 0xbU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                             >> 9U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                            >> 7U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 0xaU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                             >> 8U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                            >> 6U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 4U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 2U))) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_127__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_119__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                             >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_117__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                             >> 0x15U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                             >> 0xdU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_101__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                                             >> 0xeU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_126__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x600000U == 
                                        (0x600000U 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 0x17U))))) + ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                            >> 0x1fU))) 
                                                + (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                              >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_125__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_115__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                             >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_113__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                             >> 0x15U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                             >> 0xeU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                                             >> 0xdU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 2U))) + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27)) 
                                            + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h557bf8db__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 3U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 1U))) 
                                            + ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h557bf8db__0)) 
                                               & (4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                      >> 1U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69)) 
                 + VL_SHIFTR_III(2,2,32, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5102e58c__0) 
                                           << 1U) | 
                                          (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_3_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 1U))) + VL_SHIFTR_III(2,2,32, 
                                                         ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5102e58c__0)) 
                                                            & (0x200U 
                                                               == 
                                                               (0x380U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2))) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                                        >> 1U)))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 4U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 2U))) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_1__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 5U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 3U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_2__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 6U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 4U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 7U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 5U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 3U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_10__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0xdU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                             >> 0xbU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                            >> 9U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_12__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0xeU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                             >> 0xcU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                            >> 0xaU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 8U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 6U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0xcU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                             >> 0xaU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                            >> 8U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_14__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0xfU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                             >> 0xdU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                            >> 0xbU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 9U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 7U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 5U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0xaU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                             >> 8U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                            >> 6U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0xbU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                             >> 9U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                            >> 7U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_16__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x10U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0xeU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0xcU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x15U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x13U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x11U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x16U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x14U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x12U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x1dU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x1bU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x19U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x1fU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x1dU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x1bU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x1eU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x1cU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x1aU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x20U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x1eU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x1cU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_18__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0xdU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x14U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x12U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x10U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x1cU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x1aU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x18U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_20__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0xeU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x13U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x11U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0xfU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x17U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x15U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x13U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x1bU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x19U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x17U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x18U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x16U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x14U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__casez_tmp 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x15U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x18U == (0x18U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 5U))))) + ((1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                                            >> 0x1fU))) 
                                             + (1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                           >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_4_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125)) 
                 + VL_SHIFTR_III(2,2,32, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5feb7463__0) 
                                           << 1U) | 
                                          (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_5_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 1U))) + VL_SHIFTR_III(2,2,32, 
                                                         ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h5feb7463__0)) 
                                                            & (0x20000U 
                                                               == 
                                                               (0x38000U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2))) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                                        >> 1U)))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_4_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 2U))) + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139)) 
                                            + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha28613e5__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_5_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 3U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 1U))) 
                                            + ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha28613e5__0)) 
                                               & (4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                      >> 0x11U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_114__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                             >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_112__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x6000U == 
                                        (0x6000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 0xfU))))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                           >> 0x1fU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                             >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_110__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                             >> 0x15U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 2U))) + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83)) 
                                            + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h514988d4__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_3_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 3U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 1U))) 
                                            + ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h514988d4__0)) 
                                               & (4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                      >> 9U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x60U == (0x60U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 7U))))) + ((1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                                            >> 0x1fU))) 
                                             + (1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_122__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_120__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x60000U == 
                                        (0x60000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 0x13U))))) + ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                            >> 0x1fU))) 
                                                + (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                              >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_124__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x180000U == 
                                        (0x180000U 
                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 0x15U))))) + ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                            >> 0x1fU))) 
                                                + (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                              >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_118__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_116__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x18000U == 
                                        (0x18000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 0x11U))))) + ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                            >> 0x1fU))) 
                                                + (1U 
                                                   & (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                              >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0x10U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0xeU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 0xcU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0xdU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                             >> 0xbU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                            >> 9U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0xeU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                             >> 0xcU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                            >> 0xaU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0xfU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                             >> 0xdU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                            >> 0xbU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 0xdU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0xcU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                             >> 0xaU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                            >> 8U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 0x15U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_109__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                             >> 0x15U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 4U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 2U))) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_103__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                             >> 0x15U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_106__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                             >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_111__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                             >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_100__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 5U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 3U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 6U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 4U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0x13U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0x11U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 0xfU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 0xeU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                             >> 0xeU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 7U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 5U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 3U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0xbU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                             >> 9U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                            >> 7U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                             >> 0xeU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0xaU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                             >> 8U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                            >> 6U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 8U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 6U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 9U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                                           >> 7U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                                             >> 5U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                                             >> 0xdU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_11__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 5U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 3U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_13__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 6U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 4U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 4U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 2U))) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_15__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 7U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 5U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 3U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_17__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 8U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 6U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_19__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 9U))) + ((1U & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 7U))) 
                                            + (1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 5U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0xaU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                             >> 8U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                            >> 6U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0xbU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                             >> 9U))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                            >> 7U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0xcU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                             >> 0xaU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                            >> 8U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0xdU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                             >> 0xbU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                            >> 9U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0xeU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                             >> 0xcU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                            >> 0xaU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x180U == (0x180U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 9U))))) + ((1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                            >> 0x1fU))) 
                                             + (1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                           >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x15U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x13U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0x11U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x17U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x15U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0x13U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x16U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x14U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0x12U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x18U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x16U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0x14U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_105__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_102__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x600U == (0x600U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 0xbU))))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                           >> 0x1fU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                             >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x14U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x12U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0x10U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_1_io_out 
        = (3U & ((IData)(1U) + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                               >> 0x20U))) 
                                + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                 >> 0x1eU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_108__DOT___c32_1_io_out 
        = (3U & ((1U & (~ ((3U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                       >> 0x20U)) : 
                           ((~ (IData)((0x1800U == 
                                        (0x1800U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                               >> 0xdU))))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                           >> 0x1fU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                             >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0x15U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0xfU))) + ((1U & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                             >> 0xdU))) 
                                              + (1U 
                                                 & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                            >> 0xbU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x1bU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x19U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0x17U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x13U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x11U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0xfU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                             >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                >> 0x1aU))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                           >> 0x18U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                             >> 0x16U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x12U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0x10U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0xeU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x10U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0xeU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0xcU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x11U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                                           >> 0xfU))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                                             >> 0xdU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                >> 0x19U))) + ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                                           >> 0x17U))) 
                                               + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                                             >> 0x15U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
              >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR 
        = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                    >> 4U) & (~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_B 
        = ((0xffffffe0U & ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT___Alu_io_B_T_8) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)))) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                    >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
              >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)))) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)))) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T_7)))) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_0_MPORT_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_0_MPORT_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_1_MPORT_1_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_1_MPORT_1_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT__dram_2_MPORT_2_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT__dram_2_MPORT_2_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram0Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_0_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_0_MPORT_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_0_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_0_MPORT_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_1_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_1_MPORT_1_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_1_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_1_MPORT_1_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____Vcellinp__dram_2_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT__dram_2_MPORT_2_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Lo__DOT____VdfgTmp_h4e2f2061__0));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____Vcellinp__dram_2_ext__RW0_wmode 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT__dram_2_MPORT_2_en) 
           & (IData)(ysyxSoCFull__DOT__sdram__DOT__sram1Hi__DOT____VdfgTmp_h4e2f2061__0));
    __Vtableidx1 = (0x10U | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div_io_div) 
                              << 6U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__finalShift) 
                                         << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__casez_tmp 
        = VysyxSoCFull__ConstPool__TABLE_hd3c2e03c_0
        [__Vtableidx1];
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h64c56670__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__finalShift)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__count)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__lzdShamt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_15_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_1_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_1_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_1_io_out 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__signal) 
                 + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                   >> 0x1fU))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x1dU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_1_io_out 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__signal) 
                 + ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                   >> 0x20U))) + (1U 
                                                  & (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                                             >> 0x1eU))))));
    vlSelf->__VdfgTmp_h1a499f6c__0 = (3U & (~ ((2U 
                                                & (((3U 
                                                     != 
                                                     (3U 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ID2EX_bits_r_func3)))
                                                     ? (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_27 
                                                                >> 0x20U))
                                                     : 
                                                    ((~ (IData)(
                                                                (6U 
                                                                 == 
                                                                 (6U 
                                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2)))) 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                                        >> 3U))) 
                                                   << 1U)) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__signal))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXoutValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID2EXValid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__io_EX2MEM_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_14_io_out 
        = (3U & ((IData)(vlSelf->__VdfgTmp_h526ce8c0__0) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                                                  << 1U) 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                                    >> 0x1eU))) 
                                          | (IData)(vlSelf->__VdfgTmp_h526ce8c0__0)), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_33_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_15_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_14_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_15_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_131__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_130__DOT___c32_1_io_out), 1U) 
                                          + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_131__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_130__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_129__DOT___c32_1_io_out), 1U) 
                                          + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_130__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_123__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_121__DOT___c32_1_io_out), 1U) 
                                          + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_123__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_107__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_104__DOT___c32_1_io_out), 1U) 
                                         + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_107__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_129__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_128__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_129__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 3U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 1U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 2U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 4U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_1_io_out), 1U) 
                                       + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 4U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 5U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_2_io_out 
        = (3U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha0b85421__0)) 
                  & (4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                  >> 0x1bU)))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_1_io_out), 1U) 
                                                  + 
                                                  (1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_2_io_out 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha0b85421__0) 
                 + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_1_io_out))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_128__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_127__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_128__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_121__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_119__DOT___c32_1_io_out), 1U) 
                                          + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_121__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_119__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_117__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_119__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_104__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_101__DOT___c32_1_io_out), 1U) 
                                         + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_104__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_101__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_101__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_127__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_126__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_127__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_126__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_125__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_126__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_117__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_115__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_117__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_115__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_113__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_115__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_223 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_16_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_1_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_17_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_1_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_1_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53__DOT___c32_2_io_out 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_hac82e295__0) 
                 + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53__DOT___c32_1_io_out))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_1__DOT___c32_2_io_out 
        = (3U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_hac82e295__0)) 
                  & (4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                  >> 3U)))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_1__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_2__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_1__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_2__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 1U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_2__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_12__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 8U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_10__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_12__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 2U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_10__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 7U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_10__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_14__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 9U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_12__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_14__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 3U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 4U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 5U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 6U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_16__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0xaU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_14__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_16__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x10U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x18U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x19U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x1aU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_18__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_16__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_18__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0xfU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x17U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_20__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_18__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_20__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0xdU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_20__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0xeU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x11U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x16U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x15U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x12U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_83 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_114__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_112__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_114__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_112__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_110__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_112__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_97 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_122__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_120__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_122__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_125__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_124__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_125__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_124__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_122__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_124__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_120__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_118__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_120__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_118__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_116__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_118__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_116__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_114__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_116__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 8U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 9U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0xaU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 7U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_2_io_out 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h1e610ac9__0) 
                 + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_1_io_out))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_109__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_106__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_109__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_106__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_103__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_106__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_111__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_109__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_111__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_113__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_111__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_113__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_103__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_100__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_103__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_100__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_100__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_2_io_out 
        = (3U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h1e610ac9__0)) 
                  & (4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                  >> 0x13U)))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_1_io_out), 1U) 
                                                  + 
                                                  (1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 0xdU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_181 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 1U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 6U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_209 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 5U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 2U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 3U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_167 
                                >> 4U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_195 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_13__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_11__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_13__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_11__DOT___c32_2_io_out 
        = (3U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h4c6e6f5e__0)) 
                  & (4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                  >> 0xbU)))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_1_io_out), 1U) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_11__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_2_io_out 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h4c6e6f5e__0) 
                 + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_1_io_out))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_15__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 1U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_13__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_15__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_17__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 2U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_15__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_17__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_19__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 3U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_17__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_19__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 4U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_19__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 5U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 6U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 7U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 8U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0x10U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0x11U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0x12U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_105__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_102__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_105__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0xfU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_102__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_102__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_108__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_105__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_108__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_110__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_108__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_110__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 9U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_1_io_out), 1U) 
                                            + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0x15U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0xeU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_125 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_153 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0xdU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0xaU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0xbU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_111 
                                >> 0xcU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_1_io_out), 1U) 
                                              + (1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                >> 0x13U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_139 
                                >> 0x14U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_1_io_out)))));
    __VdfgTmp_h3669d4cb__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__AdderB 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_B 
           ^ (- (IData)((1U & (~ (IData)((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T))))))));
    __VdfgTmp_hee0c871e__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    __VdfgTmp_hebe00b40__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    __VdfgTmp_hdad3e04f__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d32b97f__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                       >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d35e96a__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d86cae3__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1eU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1fU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1dU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d85b856__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1fU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit)) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                         >> 0x1eU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dce98d5__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 3U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dcac840__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 3U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 4U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e5949__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1cU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1dU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1bU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d82a9bc__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1dU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1eU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1cU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc62b98__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 4U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 5U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 3U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc2dbed__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 5U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 6U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 4U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d969b44__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1aU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1bU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x19U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9a4ad1__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x1bU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1cU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1aU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dde8972__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 6U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 7U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 5U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd93ec7__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 7U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 8U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 6U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dae6bae__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x18U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x19U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x17U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd23abb__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x19U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x18U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd51efb__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 8U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 9U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                  >> 7U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd14f6e__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 9U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                    >> 0xaU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                    >> 8U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e56b6__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x16U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x17U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x15U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dabf29b__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x17U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x18U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x16U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0ded7f91__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xaU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xbU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                      >> 9U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de9ae84__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xbU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xcU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                      >> 0xaU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8677dc__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x14U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x15U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x13U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d825c81__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x15U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x16U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x14U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de50b1c__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xcU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xdU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                      >> 0xbU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de13be9__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xdU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xeU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                      >> 0xcU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8f5891__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x12U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x13U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x11U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8a919c__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x13U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x14U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x12U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dfd6cb6__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xeU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xfU)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                                      >> 0xdU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df99f83__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0xfU)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0x10U)) | 
                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                      >> 0xeU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df6f83b__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x10U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x11U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0xfU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0db20f86__0 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt)) 
                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                     >> 0x11U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x12U)) | 
                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A 
                                       >> 0x10U)))));
    if (ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h52ba7831__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__shamt = 1U;
        ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h64e61730__0 = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__shamt 
            = ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h64c56670__0;
        ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h64e61730__0 
            = (0x1fU & (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h64c56670__0));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x1bU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->__VdfgTmp_h1a499f6c__0)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->__VdfgTmp_h1a499f6c__0), 1U) 
                    + (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_41 
                                     >> 0x1fU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_34_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_14_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_15_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_14_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_25_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_14_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_131__DOT___c32_1_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_131__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_32_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_131__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_130__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_131__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_31_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_130__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_129__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_130__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_24_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_129__DOT___c32_2_io_out)) 
                 + ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                              >> 0x1aU))) + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_128__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_197__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_128__DOT___c32_2_io_out)) 
                 + ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                              >> 0x19U))) + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_127__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_196__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_127__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_13_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_126__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_30_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_115__DOT___c32_2_io_out), 1U) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_11_io_out)) 
                                          | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_115__DOT___c32_2_io_out) 
                                                   >> 1U))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_35_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_16_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_15_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_16_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_36_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_17_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_16_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_17_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_18_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_1_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_19_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_1__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_1__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_16_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_2__DOT___c32_2_io_out)) 
                 + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha690227c__0) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_1__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_17_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_2_io_out)) 
                 + (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha690227c__0)) 
                     & (4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                     >> 5U)))) + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_2__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_18_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_3__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_132__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_3_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_4__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_133__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_5__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_134__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_3_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_6__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_188__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_114__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_115__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_11_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_181__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_178__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_93__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_94__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_95__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_195__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_126__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_12_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_125__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_194__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_125__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_13_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_124__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_193__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_124__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_12_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_123__DOT___c32_1_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_192__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_122__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_123__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_120__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_191__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_120__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_121__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_118__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_190__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_118__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_119__DOT___c32_2_io_out)) 
                    + (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                >> 0x12U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_189__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_116__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_117__DOT___c32_2_io_out)) 
                    + (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                                >> 0x11U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_27_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_109__DOT___c32_2_io_out), 1U) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_10_io_out)) 
                                          | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_109__DOT___c32_2_io_out) 
                                                   >> 1U))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_28_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_111__DOT___c32_2_io_out), 1U) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_11_io_out)) 
                                          | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_111__DOT___c32_2_io_out) 
                                                   >> 1U))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_29_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_113__DOT___c32_2_io_out), 1U) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_10_io_out)) 
                                          | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_113__DOT___c32_2_io_out) 
                                                   >> 1U))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_187__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_112__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_113__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_10_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_26_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_103__DOT___c32_2_io_out), 1U) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_104__DOT___c32_2_io_out)) 
                                          | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_103__DOT___c32_2_io_out) 
                                                   >> 1U))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_25_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_100__DOT___c32_2_io_out), 1U) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_101__DOT___c32_2_io_out)) 
                                          | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_100__DOT___c32_2_io_out) 
                                                   >> 1U))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_137__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_12__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_13__DOT___c32_2_io_out)) 
                    + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha492cabb__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_136__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_10__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_11__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_135__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_8__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_7__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_138__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_14__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_15__DOT___c32_2_io_out)) 
                    + ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_ha492cabb__0)) 
                       & (4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                       >> 0xdU)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_20_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_17__DOT___c32_2_io_out), 1U) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_4_io_out)) 
                                          | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_17__DOT___c32_2_io_out) 
                                                   >> 1U))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_139__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_16__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_17__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_4_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_21_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_19__DOT___c32_2_io_out), 1U) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_5_io_out)) 
                                          | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_19__DOT___c32_2_io_out) 
                                                   >> 1U))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_140__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_18__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_19__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_5_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_22_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_2_io_out), 1U) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_4_io_out)) 
                                          | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_2_io_out) 
                                                   >> 1U))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_141__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_20__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_21__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_4_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_23_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_2_io_out), 1U) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_5_io_out)) 
                                          | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_2_io_out) 
                                                   >> 1U))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_142__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_23__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_5_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_24_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_2_io_out), 1U) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_2_io_out)) 
                                          | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_2_io_out) 
                                                   >> 1U))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_143__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_25__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_26__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_19_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_144__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_27__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_28__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_29__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_20_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_145__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_30__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_31__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_32__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_22_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_180__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_96__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_97__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_98__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_161__DOT___c32_1_io_out 
        = (3U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h68e1d768__0)) 
                  & (4U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                            >> 0x1dU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_2_io_out), 1U) 
                                           + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_158__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_56__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_57__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_163__DOT___c32_1_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_160__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_60__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_61__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_165__DOT___c32_1_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 1U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_2_io_out), 1U) 
                                       + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_162__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_64__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_65__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_23_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_105__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_106__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_107__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_184__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_105__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_106__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_107__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_159__DOT___c32_1_io_out 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h68e1d768__0) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_156__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_52__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_53__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_183__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_102__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_103__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_104__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_182__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_100__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_101__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_185__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_108__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_109__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_10_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_186__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_110__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_111__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_11_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_21_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_146__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_33__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_34__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_35__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_157__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_154__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_48__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_49__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_50__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_179__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_176__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_90__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_91__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_92__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_155__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_152__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_45__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_46__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_47__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_149__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_147__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_36__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_37__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_38__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_151__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_148__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_39__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_40__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_41__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_153__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_150__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_42__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_43__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_44__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_175__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_172__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_84__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_85__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_86__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_177__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_174__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_87__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_88__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_89__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT____Vcellinp__Alu__io_A)) 
                             + ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__AdderB)) 
                                + (QData)((IData)((1U 
                                                   & (~ (IData)(
                                                                (0xfU 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Operation_andMatrixOutputs_T))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e74d5e4__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d32b97f__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dce98d5__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e4f05f1__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d35e96a__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dcac840__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edcee68__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d86cae3__0)) 
           | ((IData)(__VdfgTmp_hdad3e04f__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e5949__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec05cdd__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d85b856__0)) 
           | ((IData)(__VdfgTmp_hdad3e04f__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d82a9bc__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0b755e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dce98d5__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc62b98__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d32b97f__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e00a4cb__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dcac840__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc2dbed__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d35e96a__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4bed2__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e5949__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d86cae3__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d969b44__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed88e27__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d82a9bc__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d85b856__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9a4ad1__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e1cc701__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc62b98__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dde8972__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dce98d5__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e18f674__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc2dbed__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd93ec7__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dcac840__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eacbfcd__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d969b44__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e5949__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dae6bae__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed07158__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9a4ad1__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d82a9bc__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd23abb__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e14e6fb__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dde8972__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd51efb__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc62b98__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e17114e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd93ec7__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd14f6e__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dc2dbed__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee44e37__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dae6bae__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d969b44__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e56b6__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee81f22__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd23abb__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9a4ad1__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dabf29b__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e133162__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd51efb__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0ded7f91__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dde8972__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eef63f7__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd14f6e__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de9ae84__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd93ec7__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4ba3d__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e56b6__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dae6bae__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8677dc__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee1cd60__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dabf29b__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd23abb__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d825c81__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e2b5018__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0ded7f91__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de50b1c__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd51efb__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e27810d__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de9ae84__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de13be9__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dd14f6e__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edc1b47__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8677dc__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d9e56b6__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8f5891__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed8430a__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d825c81__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dabf29b__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8a919c__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e232087__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de50b1c__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dfd6cb6__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0ded7f91__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3ed072__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de13be9__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df99f83__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de9ae84__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3b403d__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dfd6cb6__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df6f83b__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de50b1c__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0c14a2__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df6f83b__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8f5891__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0dfd6cb6__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec53518__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8f5891__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8677dc__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df6f83b__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e37f208__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df99f83__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0db20f86__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0de13be9__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec8f20f__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0db20f86__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8a919c__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0df99f83__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec16c65__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d8a919c__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0d825c81__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h0db20f86__0))));
    __Vtemp_4[3U] = 0U;
    VL_SHIFTL_WWI(128,128,6, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT___shout_T, __Vtemp_4, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__shamt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__shiftQuot 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__quotient)) 
                                    << (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h64e61730__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT___shiftQuotM_T_2 
        = (0x7fffffffffffffffULL & ((QData)((IData)(
                                                    (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT__quotientM))) 
                                    << (IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Div__DOT____VdfgTmp_h64e61730__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT___converter_io_out_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_167__DOT___c32_1_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 2U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_2_io_out), 1U) 
                                       + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_164__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_68__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_69__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_169__DOT___c32_1_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 3U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_2_io_out), 1U) 
                                       + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_166__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_73__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_55 
                                >> 0x1dU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_72__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___ppTemp_T_69 
                                >> 0x1cU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_1_io_out), 1U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_57_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_34_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_33_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_34_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_56_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_33_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_25_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_33_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_55_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_25_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_32_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_25_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_54_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_32_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_31_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_32_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_53_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_31_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_24_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_31_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_197__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_13_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_196__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_197__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_58_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_36_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_35_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_36_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_37_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_18_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_17_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_18_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_38_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_19_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_18_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_19_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_39_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_16_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_19_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_16_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_40_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_17_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_16_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_17_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_41_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_18_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_17_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_18_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_132__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_2_io_out), 1U) 
                 + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_132__DOT___c32_1_io_out))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_133__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_3_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_132__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_133__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_134__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_133__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_134__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_196__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_12_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_195__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_196__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_195__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_13_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_194__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_195__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_194__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_12_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_193__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_194__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_193__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_122__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_192__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_193__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_192__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_121__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_191__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_192__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_191__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_119__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_190__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_191__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_190__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_116__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_189__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_190__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_189__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_114__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_188__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_189__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_188__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_112__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_187__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_188__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_137__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_10__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_136__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_137__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_135__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_3_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_134__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_135__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_136__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_9__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_135__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_136__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_138__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_12__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_137__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_138__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_139__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_14__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_138__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_139__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_140__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_16__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_139__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_140__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_141__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_18__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_140__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_141__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_142__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_20__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_141__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_142__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_143__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_22__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_142__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_143__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_144__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_24__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_143__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_144__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_145__DOT___c32_2_io_out 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h68865fde__0) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_144__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_145__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_180__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 9U))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_178__DOT___c32_1_io_out), 1U) 
                                       + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_180__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_163__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_62__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_161__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_163__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_160__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_158__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_160__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_165__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_66__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_163__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_165__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_162__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_160__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_162__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_161__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_58__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_159__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_161__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_158__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_156__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_158__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_184__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_102__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_183__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_184__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_183__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_99__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_182__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_183__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_182__DOT___c32_2_io_out 
        = (3U & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h7a6e5d83__0)) 
                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data1 
                           >> 0xaU))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_180__DOT___c32_1_io_out), 1U) 
                                         + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_182__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_185__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_107__DOT___c32_1_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_184__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_185__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_186__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_108__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_185__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_186__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_187__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_110__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_186__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_187__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_146__DOT___c32_2_io_out 
        = (3U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT____VdfgTmp_h68865fde__0)) 
                  & (4U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__data2 
                                  >> 0x15U)))) + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_145__DOT___c32_1_io_out), 1U) 
                                                  + 
                                                  (1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_146__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_159__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_54__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_157__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_159__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_156__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_154__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_156__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_181__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_9_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_179__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_181__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_178__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_9_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_176__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_178__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_157__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_155__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_157__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_154__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_51__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_152__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_154__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_149__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_6_io_out), 1U) 
                 + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_149__DOT___c32_1_io_out))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_147__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_6_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_146__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_147__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_151__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_7_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_149__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_151__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_148__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_7_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_147__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_148__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_153__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_6_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_151__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_153__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_155__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_7_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_153__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_155__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_150__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_6_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_148__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_150__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_152__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_7_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_150__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_152__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_177__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_9_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_175__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_177__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_179__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_8_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_177__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_179__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_174__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_9_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_172__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_174__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_176__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_8_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_174__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_176__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha5b4840f__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e74d5e4__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e1cc701__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha58fd61a__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e4f05f1__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e18f674__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c3d53__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edcee68__0)) 
           | ((IData)(__VdfgTmp_hebe00b40__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eacbfcd__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa038d26__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec05cdd__0)) 
           | ((IData)(__VdfgTmp_hebe00b40__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed07158__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa44aba5__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0b755e__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e14e6fb__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa40f530__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e00a4cb__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e17114e__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144df9__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4bed2__0)) 
           | ((IData)(__VdfgTmp_hebe00b40__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee44e37__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa18bd4c__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed88e27__0)) 
           | ((IData)(__VdfgTmp_hebe00b40__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee81f22__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5c3428__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e1cc701__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e133162__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e74d5e4__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa58c49d__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e18f674__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eef63f7__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e4f05f1__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haaec8e34__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eacbfcd__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edcee68__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4ba3d__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa105fa1__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed07158__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec05cdd__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee1cd60__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5495c2__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e14e6fb__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e2b5018__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0b755e__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5723b7__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e17114e__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e27810d__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e00a4cb__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa249f5e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee44e37__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4bed2__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edc1b47__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa284e4b__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee81f22__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed88e27__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed8430a__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2ce38b__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e133162__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e232087__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e1cc701__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2f321e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eef63f7__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3ed072__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e18f674__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa6b8361__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e2b5018__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3b403d__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e14e6fb__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa631fac__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e232087__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0c14a2__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e133162__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa4cc7cb__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0c14a2__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edc1b47__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e232087__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c686c__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2edc1b47__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee44e37__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e0c14a2__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7b7f06__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3b403d__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec53518__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e2b5018__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa056461__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec53518__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4ba3d__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3b403d__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144906__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed4ba3d__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eacbfcd__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec53518__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa67d274__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e27810d__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e37f208__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e17114e__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7f2e99__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3ed072__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec8f20f__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2eef63f7__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa082376__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec8f20f__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed8430a__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e3ed072__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa187071__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed8430a__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee81f22__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec8f20f__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa778373__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e37f208__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec16c65__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e27810d__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa00bd0c__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec16c65__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee1cd60__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2e37f208__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa201e0b__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ee1cd60__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ed07158__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h2ec16c65__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_out_0_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_hc764a469__0 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac9__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_167__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_70__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_165__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_167__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_164__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_162__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_164__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_169__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_74__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_167__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_169__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_166__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_75__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_164__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_166__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_171__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_168__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_76__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_77__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_78__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_173__DOT___c32_1_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_1_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_170__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_80__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_81__DOT___c32_2_io_out)) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_2_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_108_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_56_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_55_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_56_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_107_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_55_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_54_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_55_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_106_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_54_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_53_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_54_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_31_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_24_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_197__DOT___c32_1_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_197__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_59_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_37_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_36_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_37_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_60_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_38_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_37_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_38_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_61_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_39_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_38_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_39_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_62_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_40_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_39_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_40_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_63_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_41_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_40_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_41_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_42_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_132__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_18_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_132__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_43_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_133__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_132__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_133__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_44_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_134__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_133__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_134__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_52_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_197__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_196__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_197__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_51_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_196__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_195__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_196__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_50_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_195__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_194__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_195__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_49_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_194__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_193__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_194__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_30_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_193__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_123__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_192__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_48_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_192__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_191__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_192__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_47_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_191__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_190__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_191__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_230__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_190__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_117__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_189__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_189__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_30_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_188__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_45_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_135__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_134__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_135__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_46_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_136__DOT___c32_2_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_135__DOT___c32_2_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_136__DOT___c32_2_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_26_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_137__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_11__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_136__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_27_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_138__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_13__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_137__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_28_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_139__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_15__DOT___c32_2_io_out), 1U) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_138__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_29_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_140__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_20_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_139__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_198__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_141__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_21_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_140__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_199__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_142__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_22_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_141__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_200__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_143__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_23_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_142__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_201__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_144__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_24_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_143__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_202__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_145__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_19_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_144__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_212__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_162__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_163__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_63__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_160__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_161__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_59__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_184__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_26_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_183__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_183__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_25_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_182__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_182__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_22_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_181__DOT___c32_1_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_185__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_23_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_184__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_186__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_27_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_185__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_187__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_28_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_186__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_188__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_29_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_187__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_203__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_146__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_20_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_145__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_158__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_159__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_55__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_180__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_181__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_178__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_209__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_156__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_157__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_154__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_204__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_147__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_21_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_146__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_205__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_148__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_149__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_147__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_206__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_150__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_151__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_148__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_207__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_152__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_153__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_150__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_208__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_154__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_155__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_152__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_219__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_176__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_177__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_174__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_178__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_179__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_176__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57c4d317__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha5b4840f__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2ce38b__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57dfff02__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha58fd61a__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2f321e__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579b728d__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa44aba5__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa6b8361__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h546cdd30__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5c3428__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa631fac__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54747446__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa249f5e__0)) 
           | ((IData)(__VdfgTmp_hee0c871e__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa4cc7cb__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579ceed3__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa4cc7cb__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa249f5e__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2ce38b__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54633493__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2ce38b__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa4cc7cb__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha5b4840f__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a4e1__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144df9__0)) 
           | ((IData)(__VdfgTmp_hee0c871e__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c686c__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542c0174__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c686c__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144df9__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa631fac__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b326b4__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa631fac__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c686c__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5c3428__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5464e32a__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5495c2__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7b7f06__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h543ca51c__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haaec8e34__0)) 
           | ((IData)(__VdfgTmp_hee0c871e__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa056461__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54554f49__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa056461__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haaec8e34__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa6b8361__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57bb6a49__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa6b8361__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa056461__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa44aba5__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542cd4bb__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c3d53__0)) 
           | ((IData)(__VdfgTmp_hee0c871e__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144906__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a06e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144906__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa1c3d53__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7b7f06__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578b466e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7b7f06__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa144906__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5495c2__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5790a218__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa40f530__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa67d274__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5468ed85__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa58c49d__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7f2e99__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54782553__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa284e4b__0)) 
           | ((IData)(__VdfgTmp_hee0c871e__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa082376__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5458f85e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa082376__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa284e4b__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2f321e__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h547f6506__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa2f321e__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa082376__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_ha58fd61a__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54289454__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa18bd4c__0)) 
           | ((IData)(__VdfgTmp_hee0c871e__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa187071__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54284959__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa187071__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa18bd4c__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7f2e99__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578ed581__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa7f2e99__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa187071__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa58c49d__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5467149f__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5723b7__0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa778373__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54207489__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa105fa1__0)) 
           | ((IData)(__VdfgTmp_hee0c871e__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa00bd0c__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54516634__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa00bd0c__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa105fa1__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa67d274__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b7bb5c__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa67d274__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa00bd0c__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa40f530__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5453a60e__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa038d26__0)) 
           | ((IData)(__VdfgTmp_hee0c871e__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa201e0b__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5471c733__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa201e0b__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa038d26__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa778373__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5787f45b__0 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa778373__0)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa201e0b__0)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_haa5723b7__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_hc764a469__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___nodeIn_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_213__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_164__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_165__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_67__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_214__DOT___c32_1_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_166__DOT___c32_2_io_out)) 
                 + ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_167__DOT___c32_2_io_out)) 
                    + VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_71__DOT___c32_2_io_out), 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_171__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_169__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_171__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_168__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_79__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_166__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_168__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_175__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_8_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_173__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_175__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_173__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_82__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_171__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_173__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_170__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_83__DOT___c32_2_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_168__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_170__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_172__DOT___c32_2_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_8_io_out)) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_170__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_172__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_105_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_53_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_31_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_53_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_64_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_42_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_41_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_42_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_65_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_43_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_42_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_43_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_66_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_44_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_43_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_44_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_104_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_31_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_52_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_31_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_103_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_52_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_51_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_52_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_102_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_51_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_50_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_51_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_101_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_50_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_49_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_50_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_100_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_49_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_30_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_49_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_99_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_30_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_48_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_30_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_98_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_48_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_47_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_48_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_230__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_30_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_230__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_67_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_45_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_44_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_45_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_68_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_46_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_45_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_46_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_69_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_26_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_46_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_26_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_70_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_27_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_26_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_27_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_71_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_28_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_27_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_28_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_72_io_out 
        = (3U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_29_io_out)) 
                 + VL_SHIFTR_III(2,2,32, ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_28_io_out)) 
                                          | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_29_io_out))), 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_198__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_20_io_out), 1U) 
                 + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_198__DOT___c32_1_io_out))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_199__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_21_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_198__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_199__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_200__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_22_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_199__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_200__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_201__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_23_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_200__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_201__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_202__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_24_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_201__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_202__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_212__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_160__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_212__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_25_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_22_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_223__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_26_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_224__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_23_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_225__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_27_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_226__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_28_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_227__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c22_29_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_228__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_229__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_203__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_19_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_202__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_203__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_158__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_211__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_180__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_222__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_156__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_209__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_210__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_204__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_20_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_203__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_204__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_205__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT___c32_21_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_204__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_205__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_206__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_149__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_205__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_206__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_207__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_151__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_206__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_207__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_208__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_153__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_207__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_208__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_209__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_155__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_208__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_209__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_177__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_219__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_2_io_out 
        = (3U & (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_179__DOT___c32_2_io_out), 1U) 
                 + (VL_SHIFTR_III(2,2,32, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_220__DOT___c32_1_io_out), 1U) 
                    + (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Mul__DOT__c53_221__DOT___c32_1_io_out)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT___Shifter_io_dout 
        = (((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                  >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5453a60e__0)) 
             | ((IData)(__VdfgTmp_h3669d4cb__0) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5787f45b__0)))) 
            << 0x1fU) | (((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542cd4bb__0)) 
                           | ((IData)(__VdfgTmp_h3669d4cb__0) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578b466e__0)))) 
                          << 0x1eU) | (((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                              >> 4U)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54289454__0)) 
                                         | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578ed581__0)))) 
                                        << 0x1dU) | 
                                       (((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                               >> 4U)) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a4e1__0)) 
                                          | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b326b4__0)))) 
                                         << 0x1cU) 
                                        | (((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                  >> 4U)) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54207489__0)) 
                                             | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b7bb5c__0)))) 
                                            << 0x1bU) 
                                           | (((((~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h543ca51c__0)) 
                                                | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57bb6a49__0)))) 
                                               << 0x1aU) 
                                              | (((((~ 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                      >> 4U)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54782553__0)) 
                                                   | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h547f6506__0)))) 
                                                  << 0x19U) 
                                                 | (((((~ 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                         >> 4U)) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54747446__0)) 
                                                      | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54633493__0)))) 
                                                     << 0x18U) 
                                                    | (((((~ 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                            >> 4U)) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5471c733__0)) 
                                                         | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5467149f__0)))) 
                                                        << 0x17U) 
                                                       | (((((~ 
                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                               >> 4U)) 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a06e__0)) 
                                                            | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5464e32a__0)))) 
                                                           << 0x16U) 
                                                          | (((((~ 
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                  >> 4U)) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54284959__0)) 
                                                               | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5468ed85__0)))) 
                                                              << 0x15U) 
                                                             | (((((~ 
                                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                     >> 4U)) 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542c0174__0)) 
                                                                  | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h546cdd30__0)))) 
                                                                 << 0x14U) 
                                                                | (((((~ 
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                        >> 4U)) 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54516634__0)) 
                                                                     | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5790a218__0)))) 
                                                                    << 0x13U) 
                                                                   | (((((~ 
                                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                           >> 4U)) 
                                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54554f49__0)) 
                                                                        | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579b728d__0)))) 
                                                                       << 0x12U) 
                                                                      | (((((~ 
                                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                              >> 4U)) 
                                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5458f85e__0)) 
                                                                           | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57dfff02__0)))) 
                                                                          << 0x11U) 
                                                                         | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579ceed3__0)) 
                                                                              | ((IData)(__VdfgTmp_h3669d4cb__0) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57c4d317__0)))) 
                                                                             << 0x10U) 
                                                                            | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5787f45b__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5453a60e__0))) 
                                                                                << 0xfU) 
                                                                               | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578b466e__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542cd4bb__0))) 
                                                                                << 0xeU) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h578ed581__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54289454__0))) 
                                                                                << 0xdU) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b326b4__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a4e1__0))) 
                                                                                << 0xcU) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57b7bb5c__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54207489__0))) 
                                                                                << 0xbU) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57bb6a49__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h543ca51c__0))) 
                                                                                << 0xaU) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h547f6506__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54782553__0))) 
                                                                                << 9U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54633493__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54747446__0))) 
                                                                                << 8U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5467149f__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5471c733__0))) 
                                                                                << 7U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5464e32a__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5424a06e__0))) 
                                                                                << 6U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5468ed85__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54284959__0))) 
                                                                                << 5U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h546cdd30__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h542c0174__0))) 
                                                                                << 4U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5790a218__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54516634__0))) 
                                                                                << 3U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579b728d__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h54554f49__0))) 
                                                                                << 2U) 
                                                                                | (((((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57dfff02__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h5458f85e__0))) 
                                                                                << 1U) 
                                                                                | (((~ 
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT____Vcellinp__Shifter__io_shamt) 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h57c4d317__0)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__Alu__DOT__Shifter__DOT____VdfgTmp_h579ceed3__0))))))))))))))))))))))))))))))))));
}
