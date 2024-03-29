// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu__Syms.h"
#include "VSimpleCpu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__ico(VSimpleCpu___024root* vlSelf);
#endif  // VL_DEBUG

void VSimpleCpu___024root___eval_triggers__ico(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimpleCpu___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VSimpleCpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ MemRead, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void VSimpleCpu___024root___ico_sequent__TOP__0(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___ico_sequent__TOP__0\n"); );
    // Body
    VSimpleCpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->SimpleCpu__DOT__Alu_io_Result, 
                                                                ((~ (IData)(vlSelf->reset)) 
                                                                 & (0U 
                                                                    != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))), vlSelf->__Vfunc_pmem_read__0__Vfuncout);
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg 
        = vlSelf->__Vfunc_pmem_read__0__Vfuncout;
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw 
        = ((((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h195eb17c__0))) 
             & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg) 
            | (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_he1e97e09__0))) 
                & VL_SHIFTR_III(32,32,32, vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg, 8U)) 
               | (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h9506ca72__0))) 
                   & VL_SHIFTR_III(32,32,32, vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg, 0x10U)) 
                  | ((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h7e8a5b94__0))) 
                     & VL_SHIFTR_III(32,32,32, vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg, 0x18U))))) 
           & (0xffU | (((- (IData)((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                          >> 0xdU)))) 
                        << 0x18U) | ((0xff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                  >> 0xdU)))) 
                                                   << 0x10U)) 
                                     | (0xff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((0U 
                                                                   != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                                                  | (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                     >> 0xdU))))) 
                                                   << 8U))))));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign 
        = (((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0) 
            & ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6)) 
               & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw 
                  >> 7U))) | ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                              & ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6)) 
                                 & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw 
                                    >> 0xfU))));
    vlSelf->SimpleCpu__DOT__RF_io_wdata = ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))
                                            ? (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0))) 
                                                & (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw))) 
                                               | (((- (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)))) 
                                                   & (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw))) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                    >> 0xdU)))) 
                                                     & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw)))
                                            : ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrRead)
                                                ? (
                                                   (0x343U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                                    ? vlSelf->SimpleCpu__DOT__Csr__DOT__mtvalReg
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                                     ? vlSelf->SimpleCpu__DOT__Csr__DOT__mcauseReg
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                                      ? vlSelf->SimpleCpu__DOT__Csr__DOT__mepcReg
                                                      : 
                                                     ((0x305U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                                       ? vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecReg
                                                       : 
                                                      ((0x300U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                                        ? vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusReg
                                                        : 0U)))))
                                                : vlSelf->SimpleCpu__DOT__Alu_io_Result));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSimpleCpu___024root___dump_triggers__act(VSimpleCpu___024root* vlSelf);
#endif  // VL_DEBUG

void VSimpleCpu___024root___eval_triggers__act(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSimpleCpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VSimpleCpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ Wstrb);

VL_INLINE_OPT void VSimpleCpu___024root___nba_sequent__TOP__0(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__SimpleCpu__DOT__Csr__DOT__mepcReg;
    __Vdly__SimpleCpu__DOT__Csr__DOT__mepcReg = 0;
    // Body
    if ((1U & ((~ (IData)(vlSelf->reset)) & ((IData)(
                                                     ((0x23U 
                                                       == 
                                                       (0x3fU 
                                                        & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                      & (7U 
                                                         == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))) 
                                             | (IData)(
                                                       ((0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                        & (3U 
                                                           == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0)))))))) {
        VSimpleCpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->SimpleCpu__DOT__Alu_io_Result, 
                                                                     (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h195eb17c__0))) 
                                                                       & vlSelf->SimpleCpu__DOT__RF_io_rdata2) 
                                                                      | (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_he1e97e09__0))) 
                                                                          & VL_SHIFTL_III(32,32,32, vlSelf->SimpleCpu__DOT__RF_io_rdata2, 8U)) 
                                                                         | (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h9506ca72__0))) 
                                                                             & VL_SHIFTL_III(32,32,32, vlSelf->SimpleCpu__DOT__RF_io_rdata2, 0x10U)) 
                                                                            | ((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h7e8a5b94__0))) 
                                                                               & VL_SHIFTL_III(32,32,32, vlSelf->SimpleCpu__DOT__RF_io_rdata2, 0x18U))))), 
                                                                     ((8U 
                                                                       & ((0x3ffff8U 
                                                                           & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                              >> 0xaU)) 
                                                                          | ((((0U 
                                                                                != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                                                               & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                                                >> 1U)) 
                                                                              << 3U) 
                                                                             | (0xfffffff8U 
                                                                                & ((vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                                                << 3U) 
                                                                                & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                                                << 2U)))))) 
                                                                      | ((4U 
                                                                          & ((0x1ffffcU 
                                                                              & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                                >> 0xbU)) 
                                                                             | ((((0U 
                                                                                != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                                                                & vlSelf->SimpleCpu__DOT__Alu_io_Result) 
                                                                                << 2U) 
                                                                                | (0xfffffffcU 
                                                                                & (((~ 
                                                                                ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                                                                >> 2U)) 
                                                                                << 2U) 
                                                                                & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                                                << 1U)))))) 
                                                                         | ((2U 
                                                                             & ((((0U 
                                                                                != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                                                                >> 3U))) 
                                                                                << 1U) 
                                                                                | ((0xffffeU 
                                                                                & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                                >> 0xcU)) 
                                                                                | ((vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                                                & (~ 
                                                                                ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                                                                >> 3U))) 
                                                                                << 1U)))) 
                                                                            | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0xcU 
                                                                                & (IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput))))))));
    }
    __Vdly__SimpleCpu__DOT__Csr__DOT__mepcReg = vlSelf->SimpleCpu__DOT__Csr__DOT__mepcReg;
    if (vlSelf->reset) {
        __Vdly__SimpleCpu__DOT__Csr__DOT__mepcReg = 0U;
        vlSelf->SimpleCpu__DOT__Csr__DOT__mtvalReg = 0U;
        vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusReg = 0x1800U;
        vlSelf->SimpleCpu__DOT__Csr__DOT__mcauseReg = 0U;
        vlSelf->SimpleCpu__DOT__PcReg = 0x80000000U;
        vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecReg = 0U;
    } else {
        if ((((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype)) 
              & (0x341U == (0xfffU & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))) 
             | (0xffffffffU == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36))) {
            __Vdly__SimpleCpu__DOT__Csr__DOT__mepcReg 
                = ((0xffffffffU == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36)
                    ? vlSelf->SimpleCpu__DOT__PcReg
                    : vlSelf->SimpleCpu__DOT__Csr__DOT___mepcWdata_T_3);
        }
        if (((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype)) 
             & (0x343U == (0xfffU & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm)))) {
            vlSelf->SimpleCpu__DOT__Csr__DOT__mtvalReg 
                = vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecWdata;
        }
        if (((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype)) 
             & (0x300U == (0xfffU & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm)))) {
            vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusReg 
                = vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusWdata;
        }
        if ((((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype)) 
              & (0x342U == (0xfffU & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))) 
             | (0xffffffffU == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36))) {
            vlSelf->SimpleCpu__DOT__Csr__DOT__mcauseReg 
                = ((0xffffffffU == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36)
                    ? 0xbU : vlSelf->SimpleCpu__DOT__Csr__DOT___mcauseWdata_T_3);
        }
        vlSelf->SimpleCpu__DOT__PcReg = ((0xffffffffU 
                                          == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36)
                                          ? vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecReg
                                          : ((0xffffffffU 
                                              == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_74)
                                              ? vlSelf->SimpleCpu__DOT__Csr__DOT__mepcReg
                                              : (((0xffffffffU 
                                                   == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_74) 
                                                  | (0xffffffffU 
                                                     == vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36))
                                                  ? 0U
                                                  : vlSelf->SimpleCpu__DOT__PcNormal)));
        if (((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype)) 
             & (0x305U == (0xfffU & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm)))) {
            vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecReg 
                = vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecWdata;
        }
    }
    if ((IData)(((0xf00U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xe80U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xf80U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xd80U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xe00U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xb80U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_23 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x700U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_14 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x780U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_15 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x800U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_16 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x880U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_17 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x900U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_18 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x980U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_19 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xa00U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_20 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xa80U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_21 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xb00U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_22 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xc00U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_24 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xc80U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0xd00U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x680U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_13 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x600U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_12 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_0 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x500U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x480U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_9 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x400U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_8 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x380U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_7 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x300U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_6 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x580U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_11 
            = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x100U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_2 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x280U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_5 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x80U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_1 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x180U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_3 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    if ((IData)(((0x200U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                 & (IData)(vlSelf->SimpleCpu__DOT__RF__DOT__Wen)))) {
        vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_4 = vlSelf->SimpleCpu__DOT__RF_io_wdata;
    }
    vlSelf->SimpleCpu__DOT__Csr__DOT__mepcReg = __Vdly__SimpleCpu__DOT__Csr__DOT__mepcReg;
    VSimpleCpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->SimpleCpu__DOT__PcReg, 1U, vlSelf->__Vfunc_pmem_read__1__Vfuncout);
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
        = vlSelf->__Vfunc_pmem_read__1__Vfuncout;
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0 
        = ((0x20U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                         >> 0x19U)) << 5U)) | ((0x10U 
                                                & ((~ 
                                                    (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0x1aU)) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & ((~ 
                                                       (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0x1bU)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0x1cU)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                              >> 0x1dU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                               >> 0x1fU))))))));
    vlSelf->SimpleCpu__DOT__RF__DOT___GEN_77 = ((0xdU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0x14U)))
                                                 ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_13
                                                 : 
                                                ((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                      >> 0x14U)))
                                                  ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_12
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                       >> 0x14U)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_11
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0x14U)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                         >> 0x14U)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                          >> 0x14U)))
                                                      ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0x14U)))
                                                       ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                            >> 0x14U)))
                                                        ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                             >> 0x14U)))
                                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                              >> 0x14U)))
                                                          ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                               >> 0x14U)))
                                                           ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                >> 0x14U)))
                                                            ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                 >> 0x14U)))
                                                             ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_1
                                                             : vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_0)))))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_hi_lo_9 
        = ((0x80U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                         >> 8U)) << 7U)) | ((0x40U 
                                             & ((~ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 9U)) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((~ 
                                                    (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0xaU)) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((~ 
                                                       (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0xbU)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((~ 
                                                          (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0xcU)) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((~ 
                                                             (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                              >> 0xdU)) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((~ 
                                                                (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                 >> 0xeU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (~ 
                                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                  >> 0xfU))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_58 
        = ((2U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 0xdU)) << 1U)) | (1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 0xeU)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_54 
        = ((8U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 2U)) << 3U)) | ((4U & ((~ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 4U)) 
                                                << 2U)) 
                                         | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0xbU)) 
                                            | (1U & 
                                               (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0xdU)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T 
        = ((2U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 2U)) << 1U)) | (1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 5U))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_21 
        = ((4U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 4U)) << 2U)) | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 4U)) 
                                         | (1U & (~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 6U)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5f0b060b__0 
        = ((2U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 0x1eU)) << 1U)) | (1U & (~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0x1fU))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_4 
        = ((0x80U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                     << 7U)) | ((0x40U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                          << 5U)) | 
                                ((0x20U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                               >> 2U)) 
                                           << 5U)) 
                                 | ((0x10U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 3U)) 
                                              << 4U)) 
                                    | ((8U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 4U)) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 5U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 6U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                    >> 0xdU))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_50 
        = ((0x80U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                     << 7U)) | ((0x40U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                          << 5U)) | 
                                ((0x20U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                               >> 2U)) 
                                           << 5U)) 
                                 | ((0x10U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 3U)) 
                                              << 4U)) 
                                    | ((8U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                              >> 1U)) 
                                       | ((4U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 3U)) 
                                          | ((2U & 
                                              (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                               >> 5U)) 
                                             | (1U 
                                                & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0xdU)))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_39 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 0xbU)) | (1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                        >> 0xeU))));
    vlSelf->SimpleCpu__DOT__RF__DOT___GEN_45 = ((0xdU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0xfU)))
                                                 ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_13
                                                 : 
                                                ((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                      >> 0xfU)))
                                                  ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_12
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                       >> 0xfU)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_11
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0xfU)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                         >> 0xfU)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                          >> 0xfU)))
                                                      ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0xfU)))
                                                       ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                            >> 0xfU)))
                                                        ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                             >> 0xfU)))
                                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                              >> 0xfU)))
                                                          ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                               >> 0xfU)))
                                                           ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                >> 0xfU)))
                                                            ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                 >> 0xfU)))
                                                             ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_1
                                                             : vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_0)))))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0 
        = ((4U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 6U)) << 2U)) | ((2U & ((~ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0xcU)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0xeU)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 0xcU)) | (1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                        >> 0xeU))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_30 
        = ((8U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 2U)) << 3U)) | ((4U & ((~ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 4U)) 
                                                << 2U)) 
                                         | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 5U)) 
                                            | (1U & 
                                               (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0xeU))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_62 
        = ((8U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 2U)) << 3U)) | ((4U & ((~ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 4U)) 
                                                << 2U)) 
                                         | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0xeU)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0 
        = ((2U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0xeU))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h509685ac__0 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 0xbU)) | (1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                        >> 0xdU))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27 
        = ((4U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg) 
           | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                     >> 3U)) | (1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 5U))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8 
        = ((4U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg) 
           | ((2U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                         >> 3U)) << 1U)) | (1U & (~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 4U)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 0xcU)) | (1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0xeU)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 1U)) | (1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 5U))));
    vlSelf->SimpleCpu__DOT__RF__DOT___GEN_90 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0x14U)))
                                                 ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                      >> 0x14U)))
                                                  ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                       >> 0x14U)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0x14U)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                         >> 0x14U)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                          >> 0x14U)))
                                                      ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0x14U)))
                                                       ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                            >> 0x14U)))
                                                        ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                             >> 0x14U)))
                                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                              >> 0x14U)))
                                                          ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                               >> 0x14U)))
                                                           ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                >> 0x14U)))
                                                            ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                 >> 0x14U)))
                                                             ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_14
                                                             : vlSelf->SimpleCpu__DOT__RF__DOT___GEN_77)))))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_36 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 2U)) | (3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_58)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_42 
        = (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T))) 
            << 1U) | (1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                            >> 6U)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_74 
        = ((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
            << 0x1fU) | ((0x40000000U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         << 0x1dU)) 
                         | ((0x20000000U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 2U)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 3U)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 7U)) 
                                             << 0x18U)) 
                                         | (((IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_hi_lo_9) 
                                             << 0x10U) 
                                            | ((0x8000U 
                                                & ((~ 
                                                    (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0x10U)) 
                                                   << 0xfU)) 
                                               | ((0x4000U 
                                                   & ((~ 
                                                       (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0x11U)) 
                                                      << 0xeU)) 
                                                  | ((0x2000U 
                                                      & ((~ 
                                                          (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0x12U)) 
                                                         << 0xdU)) 
                                                     | ((0x1000U 
                                                         & ((~ 
                                                             (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                              >> 0x13U)) 
                                                            << 0xcU)) 
                                                        | ((0x800U 
                                                            & ((~ 
                                                                (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                 >> 0x14U)) 
                                                               << 0xbU)) 
                                                           | ((0x400U 
                                                               & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                  >> 0xbU)) 
                                                              | ((0x200U 
                                                                  & ((~ 
                                                                      (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                       >> 0x16U)) 
                                                                     << 9U)) 
                                                                 | ((0x100U 
                                                                     & ((~ 
                                                                         (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                          >> 0x17U)) 
                                                                        << 8U)) 
                                                                    | ((0x80U 
                                                                        & ((~ 
                                                                            (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                             >> 0x18U)) 
                                                                           << 7U)) 
                                                                       | ((0x40U 
                                                                           & ((~ 
                                                                               (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                                >> 0x19U)) 
                                                                              << 6U)) 
                                                                          | ((0x20U 
                                                                              & ((~ 
                                                                                (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                             | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                                >> 0x1bU)) 
                                                                                | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5f0b060b__0))))))))))))))))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0 
        = ((0x40U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                         >> 0x19U)) << 6U)) | ((0x20U 
                                                & ((~ 
                                                    (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0x1aU)) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((~ 
                                                       (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0x1bU)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((~ 
                                                          (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0x1cU)) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((~ 
                                                             (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                              >> 0x1dU)) 
                                                            << 2U)) 
                                                        | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5f0b060b__0))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 0xbU)) | (3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_39)));
    vlSelf->SimpleCpu__DOT__RF__DOT___GEN_58 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0xfU)))
                                                 ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                      >> 0xfU)))
                                                  ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                       >> 0xfU)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0xfU)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                         >> 0xfU)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                          >> 0xfU)))
                                                      ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0xfU)))
                                                       ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                            >> 0xfU)))
                                                        ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                             >> 0xfU)))
                                                         ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                              >> 0xfU)))
                                                          ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                               >> 0xfU)))
                                                           ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                >> 0xfU)))
                                                            ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                 >> 0xfU)))
                                                             ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_14
                                                             : vlSelf->SimpleCpu__DOT__RF__DOT___GEN_45)))))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_6 
        = ((0x100U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      << 8U)) | ((0x80U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                           << 6U)) 
                                 | ((0x40U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 2U)) 
                                              << 6U)) 
                                    | ((0x20U & ((~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 3U)) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 4U)) 
                                            << 4U)) 
                                          | ((8U & 
                                              ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 5U)) 
                                               << 3U)) 
                                             | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h4df8558f__0 
        = (((IData)((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_30))) 
            << 1U) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_62)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h204e6eb3__0 
        = ((4U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 0xcU)) << 2U)) | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_43 
        = ((0x100U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      << 8U)) | ((0x80U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                           << 6U)) 
                                 | ((0x40U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 2U)) 
                                              << 6U)) 
                                    | ((0x20U & ((~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 3U)) 
                                                 << 5U)) 
                                       | ((0x10U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg) 
                                          | ((8U & 
                                              (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                               >> 2U)) 
                                             | ((4U 
                                                 & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                    >> 4U)) 
                                                | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h509685ac__0))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_41 
        = ((8U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 2U)) << 3U)) | ((4U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 2U)) 
                                         | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h509685ac__0)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_68 
        = ((8U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 2U)) << 3U)) | ((4U & ((~ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0xcU)) 
                                                << 2U)) 
                                         | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_70 
        = ((0x10U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                         >> 2U)) << 4U)) | ((8U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 1U)) 
                                            | ((4U 
                                                & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0xaU)) 
                                               | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_46 
        = (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10))) 
            << 2U) | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                             >> 2U)) | (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_26 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8))) 
            << 2U) | (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10))) 
                       << 1U) | (1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                       >> 3U))));
    vlSelf->SimpleCpu__DOT__RF_io_rdata2 = ((0U == 
                                             (0x1fU 
                                              & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 0x14U)))
                                             ? 0U : 
                                            ((0x1fU 
                                              == (0x1fU 
                                                  & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0x14U)))
                                              ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31
                                              : ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                      >> 0x14U)))
                                                  ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                       >> 0x14U)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0x14U)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                         >> 0x14U)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27
                                                     : vlSelf->SimpleCpu__DOT__RF__DOT___GEN_90))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hcac90371__0 
        = ((0x400U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                          >> 0x15U)) << 0xaU)) | ((0x200U 
                                                   & ((~ 
                                                       (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0x16U)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((~ 
                                                          (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0x17U)) 
                                                         << 8U)) 
                                                     | ((0x80U 
                                                         & ((~ 
                                                             (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                              >> 0x18U)) 
                                                            << 7U)) 
                                                        | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0)))));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)))) 
                 & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                       >> 0xdU))));
    vlSelf->SimpleCpu__DOT__RF_io_rdata1 = ((0U == 
                                             (0x1fU 
                                              & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 0xfU)))
                                             ? 0U : 
                                            ((0x1fU 
                                              == (0x1fU 
                                                  & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0xfU)))
                                              ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_31
                                              : ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                      >> 0xfU)))
                                                  ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                       >> 0xfU)))
                                                   ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0xfU)))
                                                    ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                         >> 0xfU)))
                                                     ? vlSelf->SimpleCpu__DOT__RF__DOT__gprSeq_27
                                                     : vlSelf->SimpleCpu__DOT__RF__DOT___GEN_58))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8 
        = (((IData)((0xffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_4))) 
            << 1U) | (0x1ffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_6)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_44 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_21))) 
            << 2U) | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h4df8558f__0));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_12 
        = ((4U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 1U)) | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h4df8558f__0));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10 
        = (((IData)((0xffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_4))) 
            << 9U) | (((IData)((0x1ffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_6))) 
                       << 8U) | (((IData)((0x13U == 
                                           (0x107bU 
                                            & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))) 
                                  << 7U) | (((IData)(
                                                     ((0x13U 
                                                       == 
                                                       (0x705bU 
                                                        & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                      & (0x3fU 
                                                         == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0)))) 
                                             << 6U) 
                                            | (((IData)(
                                                        ((0x13U 
                                                          == 
                                                          (0x5bU 
                                                           & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                         & (0x7fU 
                                                            == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0)))) 
                                                << 5U) 
                                               | (((IData)(
                                                           (0x17U 
                                                            == 
                                                            (0x5fU 
                                                             & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              ((0x67U 
                                                                == 
                                                                (0x77U 
                                                                 & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h204e6eb3__0)))) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0x2013U 
                                                                     == 
                                                                     (0x207bU 
                                                                      & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))) 
                                                            << 1U) 
                                                           | (IData)(
                                                                     ((0x5013U 
                                                                       == 
                                                                       (0x705bU 
                                                                        & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                                      & (0x3fU 
                                                                         == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0)))))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_2 
        = ((0x10U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                         >> 4U)) << 4U)) | ((8U & (
                                                   (~ 
                                                    (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 5U)) 
                                                   << 3U)) 
                                            | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h204e6eb3__0)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_34 
        = (((IData)((0x1ffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_43))) 
            << 1U) | (0xffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_50)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31 
        = (((IData)((0x1ffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_43))) 
            << 1U) | (IData)((0x2073U == (0x307fU & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_38 
        = ((4U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 1U)) | (((IData)((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_54))) 
                              << 1U) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_68))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15 
        = (((IData)((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_30))) 
            << 5U) | (((IData)((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_54))) 
                       << 4U) | (((IData)(((0x1000U 
                                            == (0x1004U 
                                                & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                           & (3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0)))) 
                                  << 3U) | (((IData)(
                                                     (0x5010U 
                                                      == 
                                                      (0x40007014U 
                                                       & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))) 
                                             << 2U) 
                                            | (((IData)(
                                                        (0xfU 
                                                         == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_68))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0x40000030U 
                                                          == 
                                                          (0x40001034U 
                                                           & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29 
        = (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_58))) 
            << 2U) | (((IData)((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_68))) 
                       << 1U) | (0x1fU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_70))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_19 
        = (((IData)((0x4010U == (0x5014U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))) 
            << 1U) | (0x1fU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_70)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17 
        = (((IData)(((0x10U == (0x14U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                     & (3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0)))) 
            << 3U) | (((IData)((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_62))) 
                       << 2U) | (((IData)((0x1fU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_70))) 
                                  << 1U) | (IData)(
                                                   (0x40001010U 
                                                    == 
                                                    (0x40001014U 
                                                     & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))))));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_26)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36 
        = ((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
            << 0x1fU) | ((0x40000000U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                         << 0x1dU)) 
                         | ((0x20000000U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 2U)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 3U)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 7U)) 
                                             << 0x18U)) 
                                         | (((IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_hi_lo_9) 
                                             << 0x10U) 
                                            | ((0x8000U 
                                                & ((~ 
                                                    (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0x10U)) 
                                                   << 0xfU)) 
                                               | ((0x4000U 
                                                   & ((~ 
                                                       (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                        >> 0x11U)) 
                                                      << 0xeU)) 
                                                  | ((0x2000U 
                                                      & ((~ 
                                                          (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                           >> 0x12U)) 
                                                         << 0xdU)) 
                                                     | ((0x1000U 
                                                         & ((~ 
                                                             (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                              >> 0x13U)) 
                                                            << 0xcU)) 
                                                        | ((0x800U 
                                                            & ((~ 
                                                                (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                 >> 0x14U)) 
                                                               << 0xbU)) 
                                                           | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hcac90371__0)))))))))))))));
    vlSelf->Halt = (IData)((((0x100073U == (0x1f00ffU 
                                            & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                             & (0xffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_hi_lo_9))) 
                            & (0x7ffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hcac90371__0))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_46))) 
            << 2U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_44))) 
                       << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_42))));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_12)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6 
        = (((IData)((0x1fU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_2))) 
            << 2U) | (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_39))) 
                       << 1U) | (1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                       >> 0xdU))));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype 
        = ((((IData)((0xffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_50))) 
             << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31))) 
           & ((IData)(((0xffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_50)) 
                       & (0U == (0xf8000U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))))
               ? 0U : 3U));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_38))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_36)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_16 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
            << 1U) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_41)));
    vlSelf->SimpleCpu__DOT__CsrData = ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29))
                                        ? (0x1fU & 
                                           (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                            >> 0xfU))
                                        : vlSelf->SimpleCpu__DOT__RF_io_rdata1);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_10 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_19)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_6 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_12 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_19)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))) 
            << 1U) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_41)));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp 
        = (((IData)((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_41))) 
            << 3U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_19))) 
                       << 2U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))) 
                                  << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15)))));
    vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 = ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
                                              ? vlSelf->SimpleCpu__DOT__PcReg
                                              : ((0U 
                                                  == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
                                                  ? vlSelf->SimpleCpu__DOT__RF_io_rdata1
                                                  : 0U));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm = 
        ((4U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type))
          ? (0xfffff000U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)
          : ((5U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type))
              ? ((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                    >> 0x1fU) ? 0xfffU : 0U) << 0x14U) 
                 | ((0xff000U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg) 
                    | ((0x800U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                  >> 9U)) | (0x7feU 
                                             & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0x14U)))))
              : ((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type))
                  ? ((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                        >> 0x1fU) ? 0xfffffU : 0U) 
                      << 0xcU) | ((0x800U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 7U)))))
                  : ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type))
                      ? ((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                            >> 0x1fU) ? 0xfffffU : 0U) 
                          << 0xcU) | ((0xfe0U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 7U))))
                      : ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type))
                          ? ((((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                >> 0x1fU) ? 0xfffffU
                                : 0U) << 0xcU) | (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0x14U))
                          : 0U)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h7a85f64f__0 
        = (((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_34))) 
              << 6U) << 0xeU) | ((((IData)((0xffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_50))) 
                                   << 5U) << 0xeU) 
                                 | ((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31))) 
                                      << 4U) << 0xeU) 
                                    | ((((IData)((0U 
                                                  != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29))) 
                                         << 3U) << 0xeU) 
                                       | ((((IData)(
                                                    (7U 
                                                     == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27))) 
                                            << 2U) 
                                           << 0xeU) 
                                          | ((((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_26))) 
                                               << 1U) 
                                              << 0xeU) 
                                             | (0x4000U 
                                                & (((0x1fU 
                                                     == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_2)) 
                                                    | ((7U 
                                                        == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8)) 
                                                       | (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                          >> 3U))) 
                                                   << 0xeU)))))))) 
           | ((((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T)) 
                | ((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_10)) 
                   | ((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_21)) 
                      | (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27))))) 
               << 0xdU) | (((IData)((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_41))) 
                            << 0xcU) | (((IData)((0U 
                                                  != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_19))) 
                                         << 0xbU) | 
                                        (((IData)((0U 
                                                   != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))) 
                                          << 0xaU) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
                                             << 9U) 
                                            | (((IData)(
                                                        (7U 
                                                         == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8))) 
                                                << 8U) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_12))) 
                                                   << 7U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10))) 
                                                      << 6U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))) 
                                                         << 5U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6))) 
                                                            << 4U) 
                                                           | ((((IData)(
                                                                        ((0x23U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                                         & (7U 
                                                                            == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))) 
                                                                | (IData)(
                                                                          ((0x23U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                                           & (3U 
                                                                              == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0))))) 
                                                               << 3U) 
                                                              | ((4U 
                                                                  & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                     >> 0xbU)) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1))) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->Halt)))))))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrRead 
        = ((~ (IData)(((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype)) 
                       & (0U == (0xf80U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))))) 
           & (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_34)));
    vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T 
        = (((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype))
             ? 0U : ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype))
                      ? 0xffffffffU : ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype))
                                        ? vlSelf->SimpleCpu__DOT__CsrData
                                        : 0U))) & (
                                                   (2U 
                                                    & (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype))
                                                    ? vlSelf->SimpleCpu__DOT__CsrData
                                                    : 0xffffffffU));
    vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T_1 
        = ((2U & (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrWtype))
            ? (~ vlSelf->SimpleCpu__DOT__CsrData) : 0U);
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_8 
        = ((4U & ((~ (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp)) 
                  << 2U)) | ((2U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                                        >> 1U)) << 1U)) 
                             | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_19))));
    vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0 
        = ((2U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                      >> 2U)) << 1U)) | (1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                                                  >> 3U))));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14 
        = ((4U & ((~ (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp)) 
                  << 2U)) | ((2U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                                        >> 1U)) << 1U)) 
                             | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_41))));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
        = ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
            ? 0U : vlSelf->SimpleCpu__DOT___Alu_io_A_T_3);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 9U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0xaU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0xbU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0xcU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0xdU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0xeU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x19U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x1aU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x1bU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x1cU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x1dU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x1eU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & vlSelf->SimpleCpu__DOT___Alu_io_A_T_3);
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 1U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 2U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 3U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 4U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 5U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 6U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x11U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x12U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x13U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x14U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x15U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x16U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 7U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 8U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0xfU));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x10U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x17U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x18U));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1 
        = ((2U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1)) 
           & (vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 
              >> 0x1fU));
    vlSelf->SimpleCpu__DOT__Alu_io_B = ((3U == (3U 
                                                & (vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h7a85f64f__0 
                                                   >> 0xdU)))
                                         ? (0x1fU & 
                                            (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                             >> 0x14U))
                                         : ((2U == 
                                             (3U & 
                                              (vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h7a85f64f__0 
                                               >> 0xdU)))
                                             ? 4U : 
                                            ((1U == 
                                              (3U & 
                                               (vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h7a85f64f__0 
                                                >> 0xdU)))
                                              ? vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm
                                              : vlSelf->SimpleCpu__DOT__RF_io_rdata2)));
    vlSelf->SimpleCpu__DOT__RF__DOT__Wen = (((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10)) 
                                             | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrRead)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 7U))));
    vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusWdata 
        = (vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T 
           | (vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T_1 
              & vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusReg));
    vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecWdata = 
        (vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T 
         | (vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T_1 
            & vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecReg));
    vlSelf->SimpleCpu__DOT__Csr__DOT___mepcWdata_T_3 
        = (vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T 
           | (vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T_1 
              & vlSelf->SimpleCpu__DOT__Csr__DOT__mepcReg));
    vlSelf->SimpleCpu__DOT__Csr__DOT___mcauseWdata_T_3 
        = (vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T 
           | (vlSelf->SimpleCpu__DOT__Csr__DOT___mstatusWdata_T_1 
              & vlSelf->SimpleCpu__DOT__Csr__DOT__mcauseReg));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_4 
        = ((8U & ((~ (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp)) 
                  << 3U)) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))) 
                              << 2U) | (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0)));
    vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0 
        = ((4U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp) 
                      >> 1U)) << 2U)) | (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0));
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1 
        = ((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18)) 
           & ((~ (IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14)))) 
              & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_2 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
            << 3U) | (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T 
        = ((8U & ((~ (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluOp)) 
                  << 3U)) | (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
    vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB = (vlSelf->SimpleCpu__DOT__Alu_io_B 
                                                ^ (
                                                   (0xfU 
                                                    == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T))
                                                    ? 0U
                                                    : 0xffffffffU));
    vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 
        = (0x3ffffffffULL & ((0x1ffffffffULL & ((QData)((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din)) 
                                                + (QData)((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB)))) 
                             + (QData)((IData)((1U 
                                                & (~ (IData)(
                                                             (0xfU 
                                                              == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T)))))))));
}

VL_INLINE_OPT void VSimpleCpu___024root___nba_sequent__TOP__1(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->SimpleCpu__DOT__Alu_io_Result = (((((((
                                                   ((((0xfU 
                                                       == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T))
                                                       ? (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1)
                                                       : 0U) 
                                                     | ((0xfU 
                                                         == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_2))
                                                         ? (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1)
                                                         : 0U)) 
                                                    | ((3U 
                                                        == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_12))
                                                        ? 
                                                       (vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                                        & vlSelf->SimpleCpu__DOT__Alu_io_B)
                                                        : 0U)) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_10))
                                                       ? 
                                                      (vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                                       | vlSelf->SimpleCpu__DOT__Alu_io_B)
                                                       : 0U)) 
                                                  | ((7U 
                                                      == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_8))
                                                      ? 
                                                     (vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter_io_din 
                                                      ^ vlSelf->SimpleCpu__DOT__Alu_io_B)
                                                      : 0U)) 
                                                 | ((0xfU 
                                                     == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_4))
                                                     ? 
                                                    (1U 
                                                     & (((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1) 
                                                         & (vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB 
                                                            >> 0x1fU)) 
                                                        | (((IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1) 
                                                            ^ 
                                                            (vlSelf->SimpleCpu__DOT__Alu__DOT__AdderB 
                                                             >> 0x1fU)) 
                                                           & (IData)(
                                                                     (vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 
                                                                      >> 0x1fU)))))
                                                     : 0U)) 
                                                | ((3U 
                                                    == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_6))
                                                    ? 
                                                   (1U 
                                                    & ((~ (IData)(
                                                                  (0xfU 
                                                                   == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T)))) 
                                                       ^ (IData)(
                                                                 (vlSelf->SimpleCpu__DOT__Alu__DOT___AdderOut_T_1 
                                                                  >> 0x20U))))
                                                    : 0U)) 
                                               | ((7U 
                                                   == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14))
                                                   ? vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.io_dout
                                                   : 0U)) 
                                              | ((3U 
                                                  == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_16))
                                                  ? vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.io_dout
                                                  : 0U)) 
                                             | ((3U 
                                                 == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18))
                                                 ? vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.io_dout
                                                 : 0U));
    vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput 
        = ((0xcU & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                    << 2U)) | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 0xcU)) | (0U 
                                                   != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1))));
    vlSelf->SimpleCpu__DOT___BrCond_T_7 = (1U & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                 ^ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0xcU)));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h7e8a5b94__0 
        = (IData)((3U == (3U & vlSelf->SimpleCpu__DOT__Alu_io_Result)));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h9506ca72__0 
        = (IData)((2U == (3U & vlSelf->SimpleCpu__DOT__Alu_io_Result)));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_he1e97e09__0 
        = (IData)((1U == (3U & vlSelf->SimpleCpu__DOT__Alu_io_Result)));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h195eb17c__0 
        = (IData)((0U == (3U & vlSelf->SimpleCpu__DOT__Alu_io_Result)));
    VSimpleCpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->SimpleCpu__DOT__Alu_io_Result, 
                                                                ((~ (IData)(vlSelf->reset)) 
                                                                 & (0U 
                                                                    != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))), vlSelf->__Vfunc_pmem_read__0__Vfuncout);
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg 
        = vlSelf->__Vfunc_pmem_read__0__Vfuncout;
    vlSelf->SimpleCpu__DOT__PcNormal = (((((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond)) 
                                           | ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond))
                                               ? (IData)(vlSelf->SimpleCpu__DOT___BrCond_T_7)
                                               : ((1U 
                                                   == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond))
                                                   ? (IData)(vlSelf->SimpleCpu__DOT___BrCond_T_7)
                                                   : 
                                                  ((~ (IData)(
                                                              (0U 
                                                               != vlSelf->SimpleCpu__DOT__Alu_io_Result))) 
                                                   ^ 
                                                   (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                    >> 0xcU))))) 
                                          & (1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc))) 
                                         | (2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc)))
                                         ? ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc))
                                             ? vlSelf->SimpleCpu__DOT__RF_io_rdata1
                                             : (vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm 
                                                + vlSelf->SimpleCpu__DOT__PcReg))
                                         : ((IData)(4U) 
                                            + vlSelf->SimpleCpu__DOT__PcReg));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw 
        = ((((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h195eb17c__0))) 
             & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg) 
            | (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_he1e97e09__0))) 
                & VL_SHIFTR_III(32,32,32, vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg, 8U)) 
               | (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h9506ca72__0))) 
                   & VL_SHIFTR_III(32,32,32, vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg, 0x10U)) 
                  | ((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h7e8a5b94__0))) 
                     & VL_SHIFTR_III(32,32,32, vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg, 0x18U))))) 
           & (0xffU | (((- (IData)((1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                          >> 0xdU)))) 
                        << 0x18U) | ((0xff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                  >> 0xdU)))) 
                                                   << 0x10U)) 
                                     | (0xff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((0U 
                                                                   != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                                                                  | (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                     >> 0xdU))))) 
                                                   << 8U))))));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign 
        = (((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0) 
            & ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6)) 
               & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw 
                  >> 7U))) | ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)) 
                              & ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6)) 
                                 & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw 
                                    >> 0xfU))));
    vlSelf->SimpleCpu__DOT__RF_io_wdata = ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))
                                            ? (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0))) 
                                                & (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw))) 
                                               | (((- (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_1)))) 
                                                   & (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw))) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                    >> 0xdU)))) 
                                                     & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw)))
                                            : ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_CsrRead)
                                                ? (
                                                   (0x343U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                                    ? vlSelf->SimpleCpu__DOT__Csr__DOT__mtvalReg
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                                     ? vlSelf->SimpleCpu__DOT__Csr__DOT__mcauseReg
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                                      ? vlSelf->SimpleCpu__DOT__Csr__DOT__mepcReg
                                                      : 
                                                     ((0x305U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                                       ? vlSelf->SimpleCpu__DOT__Csr__DOT__mtvecReg
                                                       : 
                                                      ((0x300U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm))
                                                        ? vlSelf->SimpleCpu__DOT__Csr__DOT__mstatusReg
                                                        : 0U)))))
                                                : vlSelf->SimpleCpu__DOT__Alu_io_Result));
}

void VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__1(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__1(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__1(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__1(VSimpleCpu_SelectorBundle* vlSelf);

void VSimpleCpu___024root___eval_nba(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSimpleCpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__0((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4));
        VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__0((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3));
        VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__0((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2));
        VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__0((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1));
        VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__0((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0));
        VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__1((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1));
        VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__1((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2));
        VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__1((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3));
        VSimpleCpu_SelectorBundle___nba_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__1((&vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4));
        VSimpleCpu___024root___nba_sequent__TOP__1(vlSelf);
    }
}
