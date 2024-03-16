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

void VSimpleCpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void VSimpleCpu___024root___ico_sequent__TOP__0(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6)) 
         & (~ (IData)(vlSelf->reset)))) {
        VSimpleCpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->SimpleCpu__DOT__Alu_io_Result, vlSelf->__Vfunc_pmem_read__0__Vfuncout);
        vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg 
            = vlSelf->__Vfunc_pmem_read__0__Vfuncout;
    } else {
        vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg = 0U;
    }
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
                                                   (- (IData)((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x3000U 
                                                                        & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))))) 
                                                   << 8U))))));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign 
        = (1U & (((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0) 
                  & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                         >> 0xeU)) & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw 
                                      >> 7U))) | (IData)(
                                                         ((0x1000U 
                                                           == 
                                                           (0x5000U 
                                                            & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                          & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw 
                                                             >> 0xfU)))));
    vlSelf->SimpleCpu__DOT__RF_io_wdata = ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6))
                                            ? (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0))) 
                                                & (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw))) 
                                               | (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                  >> 0xcU)))) 
                                                   & (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw))) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                    >> 0xdU)))) 
                                                     & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw)))
                                            : vlSelf->SimpleCpu__DOT__Alu_io_Result);
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

void VSimpleCpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void VSimpleCpu___024root___nba_sequent__TOP__0(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((((IData)(((0x23U == (0x3fU & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                   & (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0)))) 
          | (IData)(((0x23U == (0x7fU & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                     & (3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0))))) 
         & (~ (IData)(vlSelf->reset)))) {
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
                                                                          | ((0x7ffff8U 
                                                                              & ((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                                >> 9U) 
                                                                                & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                                                << 2U))) 
                                                                             | (0xfffffff8U 
                                                                                & ((vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                                                << 3U) 
                                                                                & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                                                << 2U)))))) 
                                                                      | ((4U 
                                                                          & ((0x1ffffcU 
                                                                              & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                                >> 0xbU)) 
                                                                             | ((0x3ffffcU 
                                                                                & ((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                                >> 0xaU) 
                                                                                & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                                                << 2U))) 
                                                                                | (0xfffffffcU 
                                                                                & (((~ 
                                                                                ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                                                                >> 2U)) 
                                                                                << 2U) 
                                                                                & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                                                << 1U)))))) 
                                                                         | ((2U 
                                                                             & ((0x1ffffeU 
                                                                                & ((vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                                >> 0xbU) 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput) 
                                                                                >> 3U)) 
                                                                                << 1U))) 
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
    vlSelf->SimpleCpu__DOT__PcReg = ((IData)(vlSelf->reset)
                                      ? 0x80000000U
                                      : (((((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond)) 
                                            | ((2U 
                                                == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond))
                                                ? (IData)(vlSelf->SimpleCpu__DOT___BrCond_T_7)
                                                : (
                                                   (1U 
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
                                              : vlSelf->SimpleCpu__DOT__PcImm)
                                          : vlSelf->SimpleCpu__DOT__PcInc));
    vlSelf->SimpleCpu__DOT__PcInc = ((IData)(4U) + vlSelf->SimpleCpu__DOT__PcReg);
    VSimpleCpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->SimpleCpu__DOT__PcReg, vlSelf->__Vfunc_pmem_read__1__Vfuncout);
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
        = vlSelf->__Vfunc_pmem_read__1__Vfuncout;
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0 
        = (IData)((0U == (0x3000U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)));
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
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0 
        = ((2U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0xeU))));
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
                                                        | ((2U 
                                                            & ((~ 
                                                                (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                 >> 0x1eU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (~ 
                                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                  >> 0x1fU)))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_3 
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
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35 
        = ((8U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 2U)) << 3U)) | ((4U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 2U)) 
                                         | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0xbU)) 
                                            | (1U & 
                                               (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0xdU))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 0xcU)) | (1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                        >> 0xeU))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0 
        = ((4U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 6U)) << 2U)) | ((2U & ((~ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0xcU)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0xeU)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 0xcU)) | (1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0xeU)));
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
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_20 
        = ((4U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 4U)) << 2U)) | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 4U)) 
                                         | (1U & (~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 6U)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T 
        = ((2U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 2U)) << 1U)) | (1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 5U))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_28 
        = ((4U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 2U)) << 2U)) | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 5U)) 
                                         | (1U & (~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0xeU)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_48 
        = ((8U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 2U)) << 3U)) | ((4U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 4U)) 
                                         | ((2U & (
                                                   (~ 
                                                    (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                     >> 0xdU)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 0xeU)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_42 
        = ((4U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                      >> 2U)) << 2U)) | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                >> 5U)) 
                                         | (1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0xdU))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_26 
        = ((4U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg) 
           | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                     >> 3U)) | (1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 5U))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_9 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 1U)) | (1U & (~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                      >> 5U))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7 
        = ((4U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg) 
           | ((2U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                         >> 3U)) << 1U)) | (1U & (~ 
                                                  (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 4U)))));
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
    vlSelf->Halt = (IData)(((0x100073U == (0x1ffffffU 
                                           & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                            & (0x7fU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_5 
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
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_56 
        = ((0x10U & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                         >> 2U)) << 4U)) | ((8U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 1U)) 
                                            | ((4U 
                                                & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 0xaU)) 
                                               | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0))));
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
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_27 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 2U)) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_48)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29 
        = ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                  >> 2U)) | (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_42)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_28))) 
            << 5U) | (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_42))) 
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
                                                        ((0U 
                                                          == 
                                                          (0x1004U 
                                                           & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                         & (3U 
                                                            == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0)))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0x40000030U 
                                                          == 
                                                          (0x40001034U 
                                                           & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hf6c6e245__0 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_28))) 
            << 2U) | (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_42))) 
                       << 1U) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_48))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_35 
        = (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_9))) 
            << 2U) | ((2U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                             >> 2U)) | (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_26))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_20 
        = (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T))) 
            << 3U) | (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_9))) 
                       << 2U) | (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_20))) 
                                  << 1U) | (7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_26)))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_22 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7))) 
            << 1U) | (1U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                            >> 3U)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_24 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7))) 
            << 2U) | (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_9))) 
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
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8 
        = (((IData)((0xffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_3))) 
            << 9U) | (((IData)((0x1ffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_5))) 
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
                                                                (0x1077U 
                                                                 & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                               & (3U 
                                                                  == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0)))) 
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
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6 
        = (((IData)((0xffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_3))) 
            << 1U) | (0x1ffU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_5)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17 
        = (((IData)((0x4010U == (0x5014U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))) 
            << 1U) | (0x1fU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_56)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15 
        = (((IData)(((0x10U == (0x14U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                     & (3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0)))) 
            << 4U) | (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_42))) 
                       << 3U) | (((IData)((0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_48))) 
                                  << 2U) | (((IData)(
                                                     (0x1fU 
                                                      == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_56))) 
                                             << 1U) 
                                            | (IData)(
                                                      (0x40001010U 
                                                       == 
                                                       (0x40001014U 
                                                        & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)))))));
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
    vlSelf->SimpleCpu__DOT__DecoderModule_io_BrCond 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_27)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_16 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
            << 1U) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_33 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_20))) 
            << 3U) | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hf6c6e245__0));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10 
        = ((8U & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg) 
           | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hf6c6e245__0));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_22))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_20)));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_26))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_24)));
    vlSelf->SimpleCpu__DOT__RF__DOT__Wen = ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                   >> 7U))));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_10 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_6 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_12 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
            << 1U) | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35)));
    vlSelf->SimpleCpu__DOT__DecoderModule_io_PcSrc 
        = (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7))) 
            << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10)));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hce535874__0 
        = (((((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_24))) 
              << 4U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_22))) 
                         << 3U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_20))) 
                                    << 2U) | (((IData)(
                                                       (0xfU 
                                                        == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35))) 
                                               << 1U) 
                                              | (0U 
                                                 != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17)))))) 
            << 0xbU) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
                         << 0xaU) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
                                      << 9U) | (((IData)(
                                                         (7U 
                                                          == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7))) 
                                                 << 8U) 
                                                | (((IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10))) 
                                                    << 7U) 
                                                   | (((IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8))) 
                                                       << 6U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6))) 
                                                          << 5U) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                  >> 0xeU)) 
                                                                << 4U)) 
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
                                                               | ((6U 
                                                                   & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                      >> 0xbU)) 
                                                                  | (IData)(vlSelf->Halt)))))))))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31 
        = (((IData)((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T))) 
            << 5U) | (((IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7))) 
                       << 4U) | (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10)));
    vlSelf->SimpleCpu__DOT___Alu_io_A_T_3 = ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
                                              ? vlSelf->SimpleCpu__DOT__PcReg
                                              : ((0U 
                                                  == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc1))
                                                  ? vlSelf->SimpleCpu__DOT__RF_io_rdata1
                                                  : 0U));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_8 
        = ((4U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hce535874__0) 
                      >> 9U)) << 2U)) | ((2U & ((~ 
                                                 ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hce535874__0) 
                                                  >> 0xaU)) 
                                                << 1U)) 
                                         | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17))));
    vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0 
        = ((2U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hce535874__0) 
                      >> 0xbU)) << 1U)) | (1U & (~ 
                                                 ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hce535874__0) 
                                                  >> 0xcU))));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14 
        = ((4U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hce535874__0) 
                      >> 9U)) << 2U)) | ((2U & ((~ 
                                                 ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hce535874__0) 
                                                  >> 0xaU)) 
                                                << 1U)) 
                                         | (0xfU == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35))));
    vlSelf->SimpleCpu__DOT__DecoderModule__DOT__Type 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_35))) 
            << 2U) | (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_33))) 
                       << 1U) | (0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31))));
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
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_4 
        = ((8U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hce535874__0) 
                      >> 9U)) << 3U)) | (((IData)((0U 
                                                   != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15))) 
                                          << 2U) | (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0)));
    vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0 
        = ((4U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hce535874__0) 
                      >> 0xaU)) << 2U)) | (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0));
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
    vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1 
        = ((3U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_18)) 
           & ((~ (IData)((7U == (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_14)))) 
              & (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T_2 
        = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13))) 
            << 3U) | (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
    vlSelf->SimpleCpu__DOT__Alu__DOT___Operation_T 
        = ((8U & ((~ ((IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hce535874__0) 
                      >> 9U)) << 3U)) | (IData)(vlSelf->SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
    vlSelf->SimpleCpu__DOT__PcImm = (vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm 
                                     + vlSelf->SimpleCpu__DOT__PcReg);
    vlSelf->SimpleCpu__DOT__Alu_io_B = ((3U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2))
                                         ? (0x1fU & 
                                            (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                             >> 0x14U))
                                         : ((2U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2))
                                             ? 4U : 
                                            ((1U == (IData)(vlSelf->SimpleCpu__DOT__DecoderModule_io_AluSrc2))
                                              ? vlSelf->SimpleCpu__DOT__DecoderModule_io_Imm
                                              : vlSelf->SimpleCpu__DOT__RF_io_rdata2)));
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
    vlSelf->SimpleCpu__DOT___BrCond_T_7 = (1U & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                 ^ 
                                                 (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                  >> 0xcU)));
    vlSelf->SimpleCpu__DOT__MemoryAccess_io_Wstrb_plaInput 
        = ((0xcU & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                    << 2U)) | (3U & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                     >> 0xcU)));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h7e8a5b94__0 
        = (IData)((3U == (3U & vlSelf->SimpleCpu__DOT__Alu_io_Result)));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h9506ca72__0 
        = (IData)((2U == (3U & vlSelf->SimpleCpu__DOT__Alu_io_Result)));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_he1e97e09__0 
        = (IData)((1U == (3U & vlSelf->SimpleCpu__DOT__Alu_io_Result)));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h195eb17c__0 
        = (IData)((0U == (3U & vlSelf->SimpleCpu__DOT__Alu_io_Result)));
    if (((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6)) 
         & (~ (IData)(vlSelf->reset)))) {
        VSimpleCpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->SimpleCpu__DOT__Alu_io_Result, vlSelf->__Vfunc_pmem_read__0__Vfuncout);
        vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg 
            = vlSelf->__Vfunc_pmem_read__0__Vfuncout;
    } else {
        vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg = 0U;
    }
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
                                                   (- (IData)((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x3000U 
                                                                        & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg))))) 
                                                   << 8U))))));
    vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign 
        = (1U & (((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0) 
                  & ((~ (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                         >> 0xeU)) & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw 
                                      >> 7U))) | (IData)(
                                                         ((0x1000U 
                                                           == 
                                                           (0x5000U 
                                                            & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg)) 
                                                          & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw 
                                                             >> 0xfU)))));
    vlSelf->SimpleCpu__DOT__RF_io_wdata = ((0U != (IData)(vlSelf->SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6))
                                            ? (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT____VdfgTmp_h257e9805__0))) 
                                                & (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw))) 
                                               | (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                  >> 0xcU)))) 
                                                   & (((- (IData)((IData)(vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadSign))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw))) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__InstReg 
                                                                    >> 0xdU)))) 
                                                     & vlSelf->SimpleCpu__DOT__MemoryAccess__DOT__ReadDataRaw)))
                                            : vlSelf->SimpleCpu__DOT__Alu_io_Result);
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
