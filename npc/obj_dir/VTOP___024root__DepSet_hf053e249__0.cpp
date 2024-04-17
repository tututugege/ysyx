// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "VTOP__pch.h"
#include "VTOP__Syms.h"
#include "VTOP___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__ico(VTOP___024root* vlSelf);
#endif  // VL_DEBUG

void VTOP___024root___eval_triggers__ico(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTOP___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__act(VTOP___024root* vlSelf);
#endif  // VL_DEBUG

void VTOP___024root___eval_triggers__act(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTOP___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTOP___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void VTOP___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wstrb);

VL_INLINE_OPT void VTOP___024root___nba_sequent__TOP__0(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__TOP__DOT__IF__DOT__rFireReg;
    __Vdly__TOP__DOT__IF__DOT__rFireReg = 0;
    // Body
    __Vdly__TOP__DOT__IF__DOT__rFireReg = vlSelf->TOP__DOT__IF__DOT__rFireReg;
    if (VL_UNLIKELY((((IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T_1) 
                      & ((IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T_1) 
                         & (0xa00003f8U == ((IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr)
                                             ? vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_1_addr
                                             : vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_0_addr)))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF_NX(0x80000002U,"%c",0,8,(0xffU & 
                                            ((IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr)
                                              ? vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_1_data
                                              : vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_0_data)));
    }
    vlSelf->TOP__DOT__IF__DOT__brFail__DOT__record 
        = ((1U & (~ (IData)(vlSelf->TOP__DOT__IF__DOT__brFail_io_reset))) 
           && ((IData)(vlSelf->TOP__DOT__IF__DOT__brFail_io_cond) 
               | (IData)(vlSelf->TOP__DOT__IF__DOT__brFail__DOT__record)));
    vlSelf->TOP__DOT__arFireReg = ((1U & (~ (IData)(vlSelf->reset))) 
                                   && ((1U & (~ (IData)(vlSelf->TOP__DOT__IF__DOT__brFail_io_reset))) 
                                       && ((IData)(vlSelf->TOP__DOT___arFireReg_T_1) 
                                           | (IData)(vlSelf->TOP__DOT__arFireReg))));
    __Vdly__TOP__DOT__IF__DOT__rFireReg = ((1U & (~ (IData)(vlSelf->reset))) 
                                           && ((1U 
                                                & (~ (IData)(vlSelf->TOP__DOT__IF__DOT___rFireReg_T))) 
                                               && ((IData)(vlSelf->TOP__DOT__IF__DOT___rFireReg_T_1) 
                                                   | (IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg))));
    vlSelf->TOP__DOT__xbar__DOT__awFireReg = ((1U & 
                                               (~ (IData)(vlSelf->reset))) 
                                              && ((1U 
                                                   & (~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T))) 
                                                  && ((IData)(vlSelf->TOP__DOT__MEM__DOT___awFire_T) 
                                                      | (IData)(vlSelf->TOP__DOT__xbar__DOT__awFireReg))));
    vlSelf->TOP__DOT__MEM__DOT__wFireReg = ((1U & (~ (IData)(vlSelf->reset))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T))) 
                                                && ((IData)(vlSelf->TOP__DOT__MEM__DOT___wFire_T) 
                                                    | (IData)(vlSelf->TOP__DOT__MEM__DOT__wFireReg))));
    vlSelf->TOP__DOT__MEM__DOT__awFireReg = ((1U & 
                                              (~ (IData)(vlSelf->reset))) 
                                             && ((1U 
                                                  & (~ (IData)(vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T))) 
                                                 && ((IData)(vlSelf->TOP__DOT__MEM__DOT___awFire_T) 
                                                     | (IData)(vlSelf->TOP__DOT__MEM__DOT__awFireReg))));
    vlSelf->TOP__DOT__MEM__DOT__wAssert = ((1U & (~ (IData)(vlSelf->reset))) 
                                           && ((1U 
                                                & (~ (IData)(vlSelf->TOP__DOT__EX__DOT___bypassReg_T))) 
                                               && ((IData)(vlSelf->TOP__DOT__MEM_io_w_valid) 
                                                   | (IData)(vlSelf->TOP__DOT__MEM__DOT__wAssert))));
    vlSelf->TOP__DOT__MEM__DOT__awAssert = ((1U & (~ (IData)(vlSelf->reset))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelf->TOP__DOT__EX__DOT___bypassReg_T))) 
                                                && ((IData)(vlSelf->TOP__DOT__MEM_io_aw_valid) 
                                                    | (IData)(vlSelf->TOP__DOT__MEM__DOT__awAssert))));
    vlSelf->TOP__DOT__arAssert = ((1U & (~ (IData)(vlSelf->reset))) 
                                  && ((1U & (~ (IData)(vlSelf->TOP__DOT__IF__DOT__brFail_io_reset))) 
                                      && ((IData)(vlSelf->TOP__DOT__arbiter_io_InstAxiLite_ar_valid) 
                                          | (IData)(vlSelf->TOP__DOT__arAssert))));
    vlSelf->TOP__DOT__MEM__DOT__arDataFireReg = ((1U 
                                                  & (~ (IData)(vlSelf->reset))) 
                                                 && ((1U 
                                                      & (~ (IData)(vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T))) 
                                                     && ((IData)(vlSelf->TOP__DOT__MEM__DOT___arDataFire_T) 
                                                         | (IData)(vlSelf->TOP__DOT__MEM__DOT__arDataFireReg))));
    vlSelf->TOP__DOT__MEM__DOT__arAssert = ((1U & (~ (IData)(vlSelf->reset))) 
                                            && ((1U 
                                                 & (~ (IData)(vlSelf->TOP__DOT__EX__DOT___bypassReg_T))) 
                                                && ((IData)(vlSelf->TOP__DOT__MEM_io_ar_valid) 
                                                    | (IData)(vlSelf->TOP__DOT__MEM__DOT__arAssert))));
    vlSelf->TOP__DOT__WB__DOT__rFireReg = ((1U & (~ (IData)(vlSelf->TOP__DOT__EX_io_WBoutValid))) 
                                           && ((IData)(vlSelf->TOP__DOT__WB__DOT__rDataFire) 
                                               | (IData)(vlSelf->TOP__DOT__WB__DOT__rFireReg)));
    vlSelf->TOP__DOT__WB__DOT__bFireReg = ((1U & (~ (IData)(vlSelf->TOP__DOT__EX_io_WBoutValid))) 
                                           && ((IData)(vlSelf->TOP__DOT__WB__DOT__bFire) 
                                               | (IData)(vlSelf->TOP__DOT__WB__DOT__bFireReg)));
    vlSelf->TOP__DOT__EX__DOT__hazard1Reg = ((1U & 
                                              (~ (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_ready))) 
                                             && (((IData)(
                                                          (2U 
                                                           == (IData)(vlSelf->TOP__DOT__EX_io_hazard1))) 
                                                  & (IData)(vlSelf->TOP__DOT__EX_io_WBoutValid)) 
                                                 | (IData)(vlSelf->TOP__DOT__EX__DOT__hazard1Reg)));
    vlSelf->TOP__DOT__EX__DOT__hazard2Reg = ((1U & 
                                              (~ (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_ready))) 
                                             && (((IData)(
                                                          (2U 
                                                           == (IData)(vlSelf->TOP__DOT__EX_io_hazard2))) 
                                                  & (IData)(vlSelf->TOP__DOT__EX_io_WBoutValid)) 
                                                 | (IData)(vlSelf->TOP__DOT__EX__DOT__hazard2Reg)));
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFullNext));
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFullNext));
    vlSelf->TOP__DOT__IF__DOT__brBufferValid = ((1U 
                                                 & (~ (IData)(vlSelf->reset))) 
                                                && ((IData)(vlSelf->TOP__DOT__IF__DOT__brFail_io_reset)
                                                     ? (IData)(vlSelf->TOP__DOT__IF__DOT__brFail_io_out)
                                                     : (IData)(vlSelf->TOP__DOT__IF__DOT___brBufferValid_T_2)));
    vlSelf->TOP__DOT__Pre2IFValid = ((1U & (~ (IData)(vlSelf->reset))) 
                                     && ((1U & (~ (IData)(vlSelf->TOP__DOT__MEM_io_flush))) 
                                         && (1U & ((IData)(vlSelf->TOP__DOT__IF__DOT__brFail_io_reset)
                                                    ? 
                                                   (~ (IData)(vlSelf->TOP__DOT__IF__DOT__brFail_io_out))
                                                    : 
                                                   ((1U 
                                                     & (~ (IData)(vlSelf->TOP__DOT___Pre2IFValid_T_4))) 
                                                    && (IData)(vlSelf->TOP__DOT___Pre2IFValid_T_8))))));
    vlSelf->TOP__DOT__IF2IDValid = ((1U & (~ (IData)(vlSelf->reset))) 
                                    && ((1U & (~ (IData)(vlSelf->TOP__DOT__MEM_io_flush))) 
                                        && ((IData)(vlSelf->TOP__DOT__IF__DOT___rFireReg_T)
                                             ? (IData)(vlSelf->TOP__DOT__IFoutValid)
                                             : ((1U 
                                                 & (~ 
                                                    ((~ (IData)(vlSelf->TOP__DOT__IF_io_IF2ID_valid)) 
                                                     & (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_ready)))) 
                                                && (IData)(vlSelf->TOP__DOT___IF2IDValid_T_7)))));
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFullNext));
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFullNext));
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFull 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFullNext));
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFull 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFullNext));
    vlSelf->TOP__DOT__EX__DOT__brEnable = (1U & ((IData)(vlSelf->reset) 
                                                 | ((IData)(vlSelf->TOP__DOT__EX__DOT___bypassReg_T) 
                                                    | (~ (IData)(vlSelf->TOP__DOT__EX__DOT__brTaken)))));
    if (vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T) {
        if ((1U & (~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr)))) {
            vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__queue_0_slaveNum 
                = vlSelf->TOP__DOT__xbar__DOT__awFifo_io_enq_bits_slaveNum;
        }
        if (vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr) {
            vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__queue_1_slaveNum 
                = vlSelf->TOP__DOT__xbar__DOT__awFifo_io_enq_bits_slaveNum;
        }
    }
    if (vlSelf->TOP__DOT__IF_io_brTaken) {
        vlSelf->TOP__DOT__IF__DOT__brBuffer = vlSelf->TOP__DOT__IF_io_pcBr;
    }
    if (vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T) {
        if ((1U & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtr)))) {
            vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_0_id 
                = ((IData)(vlSelf->TOP__DOT__MEM_io_ar_valid)
                    ? 1U : 0U);
            vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_0_addr 
                = vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr;
        }
        if (vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtr) {
            vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_1_id 
                = ((IData)(vlSelf->TOP__DOT__MEM_io_ar_valid)
                    ? 1U : 0U);
            vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_1_addr 
                = vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr;
        }
    }
    if ((((~ (IData)(vlSelf->TOP__DOT__EX__DOT___bypassReg_T)) 
          & (((IData)(vlSelf->TOP__DOT__EX_io_hazard1) 
              | (IData)(vlSelf->TOP__DOT__EX_io_hazard2)) 
             >> 1U)) & (IData)(vlSelf->TOP__DOT__EX_io_WBoutValid))) {
        vlSelf->TOP__DOT__EX__DOT__bypassReg = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFullNext));
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFullNext));
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFullNext));
    if (vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T) {
        if ((1U & (~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr)))) {
            vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__queue_0_slaveNum 
                = vlSelf->TOP__DOT__xbar__DOT__arFifo_io_enq_bits_slaveNum;
        }
        if (vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr) {
            vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__queue_1_slaveNum 
                = vlSelf->TOP__DOT__xbar__DOT__arFifo_io_enq_bits_slaveNum;
        }
    }
    if (vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T) {
        if ((1U & (~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtr)))) {
            vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_0_id 
                = ((IData)(vlSelf->TOP__DOT__MEM_io_ar_valid)
                    ? 1U : 0U);
            vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_0_addr 
                = vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr;
        }
        if (vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtr) {
            vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_1_id 
                = ((IData)(vlSelf->TOP__DOT__MEM_io_ar_valid)
                    ? 1U : 0U);
            vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_1_addr 
                = vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr;
        }
    }
    if (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T) {
        if ((1U & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtr)))) {
            vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_0_id 
                = ((IData)(vlSelf->TOP__DOT__MEM_io_ar_valid)
                    ? 1U : 0U);
            vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_0_addr 
                = vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr;
        }
        if (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtr) {
            vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_1_id 
                = ((IData)(vlSelf->TOP__DOT__MEM_io_ar_valid)
                    ? 1U : 0U);
            vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_1_addr 
                = vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr;
        }
    }
    if (vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T) {
        if ((1U & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtr)))) {
            vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_0_id = 0U;
            vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_0_addr 
                = (0xfffffffcU & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut);
        }
        if (vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtr) {
            vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_1_id = 0U;
            vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_1_addr 
                = (0xfffffffcU & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut);
        }
    }
    if (vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T) {
        if ((1U & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtr)))) {
            vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_0_data 
                = vlSelf->TOP__DOT__ramWrapper__DOT__wFifo_io_enq_bits_data;
            vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_0_strb 
                = vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_orMatrixOutputs;
        }
        if (vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtr) {
            vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_1_data 
                = vlSelf->TOP__DOT__ramWrapper__DOT__wFifo_io_enq_bits_data;
            vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_1_strb 
                = vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_orMatrixOutputs;
        }
    }
    if (((0x17U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_23 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0xeU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_14 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0xfU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_15 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x10U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_16 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x11U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_17 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x12U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_18 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x13U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_19 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x14U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_20 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x15U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_21 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x16U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_22 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x18U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_24 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x19U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_25 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x1aU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_26 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0xdU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_13 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0xcU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_12 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_0 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0xaU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_10 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((9U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_9 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((8U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_8 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((7U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_7 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((6U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_6 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0xbU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_11 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((2U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_2 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((5U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_5 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((1U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_1 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((3U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_3 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((4U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_4 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T) {
        if ((1U & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtr)))) {
            vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_0_data 
                = vlSelf->TOP__DOT__ramWrapper__DOT__wFifo_io_enq_bits_data;
            vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_0_strb 
                = vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_orMatrixOutputs;
        }
        if (vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtr) {
            vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_1_data 
                = vlSelf->TOP__DOT__ramWrapper__DOT__wFifo_io_enq_bits_data;
            vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__queue_1_strb 
                = vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_orMatrixOutputs;
        }
    }
    if (vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T) {
        if ((1U & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtr)))) {
            vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_0_id = 0U;
            vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_0_addr 
                = (0xfffffffcU & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut);
        }
        if (vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtr) {
            vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_1_id = 0U;
            vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__queue_1_addr 
                = (0xfffffffcU & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut);
        }
    }
    if (vlSelf->TOP__DOT___WB_io_MEM2WB_bits_T_1) {
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_halt 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_halt;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memWrite 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_mret 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_mret;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_pc = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_pc;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrRead 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrRead;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_inst 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_inst;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_regWrite 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_regWrite;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWdata 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrWdata;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut;
    }
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__arInstValid = 0U;
        vlSelf->TOP__DOT__uart__DOT__wCount = vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__shiftReg;
        vlSelf->TOP__DOT__ramWrapper__DOT__wCount = vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__shiftReg;
        vlSelf->TOP__DOT__uart__DOT__awCount = vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__shiftReg;
        vlSelf->TOP__DOT__ramWrapper__DOT__awCount 
            = vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__shiftReg;
        vlSelf->TOP__DOT__ramWrapper__DOT__arCount 
            = vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__shiftReg;
        vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr = 0U;
        vlSelf->TOP__DOT__clint__DOT__rCount = vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__shiftReg;
        vlSelf->TOP__DOT__uart__DOT__rCount = vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__shiftReg;
        vlSelf->TOP__DOT__ID2EXValid = 0U;
        vlSelf->TOP__DOT__uart__DOT__bCount = vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__shiftReg;
        vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr = 0U;
        vlSelf->TOP__DOT__arwDataValid = 0U;
        vlSelf->TOP__DOT__EX2MEMValid = 0U;
        vlSelf->TOP__DOT__MEM2WBValid = 0U;
        vlSelf->TOP__DOT__clint__DOT__mtime = 0ULL;
        vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr = 0U;
        vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr = 0U;
        vlSelf->TOP__DOT__ramWrapper__DOT__rCount = vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__shiftReg;
        vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr = 0U;
        vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr = 0U;
        vlSelf->TOP__DOT__ramWrapper__DOT__bCount = vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__shiftReg;
        vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr = 0U;
        vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvalReg = 0U;
        vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mstatusReg = 0x1800U;
        vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecReg = 0U;
        vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mcauseReg = 0U;
        vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mepcReg = 0U;
    } else {
        if (vlSelf->TOP__DOT__IF__DOT__brFail_io_reset) {
            vlSelf->TOP__DOT__arInstValid = vlSelf->TOP__DOT__IF_io_Pre2IF_valid;
        } else if (vlSelf->TOP__DOT___Pre2IFValid_T_4) {
            vlSelf->TOP__DOT__arInstValid = 0U;
        }
        if (vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T) {
            vlSelf->TOP__DOT__uart__DOT__wCount = vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__shiftReg;
        } else if (vlSelf->TOP__DOT__xbar_io_slave_1_w_valid) {
            vlSelf->TOP__DOT__uart__DOT__wCount = vlSelf->TOP__DOT__uart__DOT___wCount_T_2;
        }
        if (vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T) {
            vlSelf->TOP__DOT__ramWrapper__DOT__wCount 
                = vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__shiftReg;
        } else if (vlSelf->TOP__DOT__xbar_io_slave_0_w_valid) {
            vlSelf->TOP__DOT__ramWrapper__DOT__wCount 
                = vlSelf->TOP__DOT__ramWrapper__DOT___wCount_T_2;
        }
        if (vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T) {
            vlSelf->TOP__DOT__uart__DOT__awCount = vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__shiftReg;
        } else if (vlSelf->TOP__DOT__xbar_io_slave_1_aw_valid) {
            vlSelf->TOP__DOT__uart__DOT__awCount = vlSelf->TOP__DOT__uart__DOT___awCount_T_2;
        }
        if (vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T) {
            vlSelf->TOP__DOT__ramWrapper__DOT__awCount 
                = vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__shiftReg;
        } else if (vlSelf->TOP__DOT__xbar_io_slave_0_aw_valid) {
            vlSelf->TOP__DOT__ramWrapper__DOT__awCount 
                = vlSelf->TOP__DOT__ramWrapper__DOT___awCount_T_2;
        }
        if (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T) {
            vlSelf->TOP__DOT__ramWrapper__DOT__arCount 
                = vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__shiftReg;
        } else if (vlSelf->TOP__DOT__xbar_io_slave_0_ar_valid) {
            vlSelf->TOP__DOT__ramWrapper__DOT__arCount 
                = vlSelf->TOP__DOT__ramWrapper__DOT___arCount_T_2;
        }
        if (vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T_1) {
            vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr 
                = vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtrInc;
        }
        if (vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T_1) {
            vlSelf->TOP__DOT__clint__DOT__rCount = vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__shiftReg;
            vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr 
                = vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtrInc;
        } else if (((IData)(vlSelf->TOP__DOT__xbar_io_slave_2_r_ready) 
                    & (~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isEmpty)))) {
            vlSelf->TOP__DOT__clint__DOT__rCount = vlSelf->TOP__DOT__clint__DOT___rCount_T_3;
        }
        if (vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T_1) {
            vlSelf->TOP__DOT__uart__DOT__rCount = vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__shiftReg;
            vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr 
                = vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtrInc;
        } else if (((IData)(vlSelf->TOP__DOT__xbar_io_slave_1_r_ready) 
                    & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isEmpty)))) {
            vlSelf->TOP__DOT__uart__DOT__rCount = vlSelf->TOP__DOT__uart__DOT___rCount_T_3;
        }
        if (vlSelf->TOP__DOT__MEM_io_flush) {
            vlSelf->TOP__DOT__ID2EXValid = 0U;
            vlSelf->TOP__DOT__EX2MEMValid = 0U;
            vlSelf->TOP__DOT__MEM2WBValid = 0U;
        } else {
            if (vlSelf->TOP__DOT__ID_io_ID2EX_ready) {
                vlSelf->TOP__DOT__ID2EXValid = vlSelf->TOP__DOT__IDoutValid;
            }
            if (vlSelf->TOP__DOT__EX__DOT___bypassReg_T) {
                vlSelf->TOP__DOT__EX2MEMValid = vlSelf->TOP__DOT__EXoutValid;
            } else if (((IData)(vlSelf->TOP__DOT__EX_io_stall) 
                        & (IData)(vlSelf->TOP__DOT___EX2MEMValid_T_2))) {
                vlSelf->TOP__DOT__EX2MEMValid = 0U;
            }
            if (vlSelf->TOP__DOT___EX2MEMValid_T_2) {
                vlSelf->TOP__DOT__MEM2WBValid = vlSelf->TOP__DOT__MEMoutValid;
            } else if (vlSelf->TOP__DOT___MEM2WBValid_T_3) {
                vlSelf->TOP__DOT__MEM2WBValid = 0U;
            }
        }
        if (vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T_1) {
            vlSelf->TOP__DOT__uart__DOT__bCount = vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__shiftReg;
        } else if ((((IData)(vlSelf->TOP__DOT__xbar_io_slave_1_b_ready) 
                     & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isEmpty))) 
                    & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isEmpty)))) {
            vlSelf->TOP__DOT__uart__DOT__bCount = vlSelf->TOP__DOT__uart__DOT___bCount_T_4;
        }
        if (vlSelf->TOP__DOT___EX2MEMValid_T_2) {
            vlSelf->TOP__DOT__arwDataValid = (((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead) 
                                               | (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite)) 
                                              & (IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_valid));
        } else if (vlSelf->TOP__DOT___MEM2WBValid_T_3) {
            vlSelf->TOP__DOT__arwDataValid = 0U;
        }
        vlSelf->TOP__DOT__clint__DOT__mtime = vlSelf->TOP__DOT__clint__DOT___mtime_T_1;
        if (vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T_1) {
            vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr 
                = vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtrInc;
        }
        if (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T_1) {
            vlSelf->TOP__DOT__ramWrapper__DOT__rCount 
                = vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__shiftReg;
            vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr 
                = vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtrInc;
        } else if (((IData)(vlSelf->TOP__DOT__xbar_io_slave_0_r_ready) 
                    & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isEmpty)))) {
            vlSelf->TOP__DOT__ramWrapper__DOT__rCount 
                = vlSelf->TOP__DOT__ramWrapper__DOT___rCount_T_3;
        }
        if (vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T_1) {
            vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr 
                = vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtrInc;
        }
        if (vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T_1) {
            vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr 
                = vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtrInc;
            vlSelf->TOP__DOT__ramWrapper__DOT__bCount 
                = vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__shiftReg;
        } else if ((((IData)(vlSelf->TOP__DOT__xbar_io_slave_0_b_ready) 
                     & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isEmpty))) 
                    & (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isEmpty)))) {
            vlSelf->TOP__DOT__ramWrapper__DOT__bCount 
                = vlSelf->TOP__DOT__ramWrapper__DOT___bCount_T_4;
        }
        if (((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
             & (0x343U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr)))) {
            vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvalReg 
                = vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecWdata;
        }
        if (((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
             & (0x300U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr)))) {
            vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mstatusReg 
                = vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mstatusWdata;
        }
        if (((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
             & (0x305U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr)))) {
            vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecReg 
                = vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecWdata;
        }
        if ((((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
              & (0x342U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))) 
             | (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall))) {
            vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mcauseReg 
                = ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall)
                    ? ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall)
                        ? 0xbU : 0U) : vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mcauseWdata_T_3);
        }
        if ((((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite) 
              & (0x341U == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))) 
             | (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall))) {
            vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mepcReg 
                = ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall)
                    ? vlSelf->io_commit_pc : vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mepcWdata_T_3);
        }
    }
    if (vlSelf->TOP__DOT___WB_io_MEM2WB_bits_T_1) {
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_syscall;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWrite 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrWrite;
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr 
            = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrAddr;
    }
    if (vlSelf->TOP__DOT___MEM_io_EX2MEM_bits_T_1) {
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2 
            = vlSelf->TOP__DOT__EX__DOT__data2;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_halt 
            = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_halt;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_mret 
            = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_mret;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite 
            = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memWrite;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_pc = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrRead 
            = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_csrRead;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead 
            = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memRead;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_inst 
            = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_inst;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_regWrite 
            = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_regWrite;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3 
            = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrWdata 
            = ((4U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3))
                ? (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1)
                : vlSelf->TOP__DOT__EX__DOT__data1);
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
            = vlSelf->TOP__DOT__EX__DOT__Alu_io_Result;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_syscall 
            = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_syscall;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrWrite 
            = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_csrWrite;
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_csrAddr 
            = (0xfffU & vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm);
    }
    vlSelf->TOP__DOT__arbiter_io_InstAxiLite_ar_valid 
        = (1U & ((~ (IData)(vlSelf->TOP__DOT__arFireReg)) 
                 & (~ (IData)(vlSelf->reset))));
    vlSelf->TOP__DOT__uart__DOT___wCount_T_2 = (0x1fU 
                                                & ((IData)(vlSelf->TOP__DOT__uart__DOT__wCount) 
                                                   - (IData)(1U)));
    vlSelf->TOP__DOT__ramWrapper__DOT___wCount_T_2 
        = (0x1fU & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wCount) 
                    - (IData)(1U)));
    vlSelf->TOP__DOT__uart__DOT___awCount_T_2 = (0x1fU 
                                                 & ((IData)(vlSelf->TOP__DOT__uart__DOT__awCount) 
                                                    - (IData)(1U)));
    vlSelf->TOP__DOT__ramWrapper__DOT___awCount_T_2 
        = (0x1fU & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awCount) 
                    - (IData)(1U)));
    vlSelf->TOP__DOT__ramWrapper__DOT___arCount_T_2 
        = (0x1fU & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arCount) 
                    - (IData)(1U)));
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr)));
    vlSelf->TOP__DOT__xbar__DOT__awFifo_io_deq_bits_slaveNum 
        = ((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr)
            ? (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__queue_1_slaveNum)
            : (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__queue_0_slaveNum));
    vlSelf->TOP__DOT__clint__DOT___rCount_T_3 = (0x1fU 
                                                 & ((IData)(vlSelf->TOP__DOT__clint__DOT__rCount) 
                                                    - (IData)(1U)));
    vlSelf->TOP__DOT__uart__DOT___rCount_T_3 = (0x1fU 
                                                & ((IData)(vlSelf->TOP__DOT__uart__DOT__rCount) 
                                                   - (IData)(1U)));
    vlSelf->TOP__DOT__uart__DOT___bCount_T_4 = (0x1fU 
                                                & ((IData)(vlSelf->TOP__DOT__uart__DOT__bCount) 
                                                   - (IData)(1U)));
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr)));
    vlSelf->TOP__DOT__WB_io_b_ready = ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memWrite) 
                                       & ((~ (IData)(vlSelf->TOP__DOT__WB__DOT__bFireReg)) 
                                          & (IData)(vlSelf->TOP__DOT__arwDataValid)));
    vlSelf->io_commit_pc = vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_pc;
    if (vlSelf->TOP__DOT___EX_io_ID2EX_bits_T_1) {
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_jump = 
            (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10));
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc 
            = (((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6))) 
                << 1U) | (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7)));
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc1 
            = (((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))) 
                << 1U) | (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23)));
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp 
            = (((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36))) 
                << 3U) | (((IData)((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16))) 
                           << 2U) | (((IData)((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14))) 
                                      << 1U) | (0U 
                                                != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12)))));
    }
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_6 
        = ((2U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                  << 1U)) | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                   >> 1U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_8 
        = ((4U & ((~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
                  << 2U)) | ((2U & ((~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                        >> 1U)) << 1U)) 
                             | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 2U))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_10 
        = ((2U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                  << 1U)) | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                   >> 2U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_12 
        = ((2U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
           | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                    >> 2U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_16 
        = ((2U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                  << 1U)) | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                   >> 3U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_h61253848__0 
        = ((2U & ((~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                      >> 2U)) << 1U)) | (1U & (~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                                  >> 3U))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18 
        = ((2U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
           | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                    >> 3U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14 
        = ((4U & ((~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
                  << 2U)) | ((2U & ((~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                        >> 1U)) << 1U)) 
                             | (1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 3U))));
    vlSelf->TOP__DOT__WB_io_r_ready = ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead) 
                                       & ((~ (IData)(vlSelf->TOP__DOT__WB__DOT__rFireReg)) 
                                          & (IData)(vlSelf->TOP__DOT__arwDataValid)));
    vlSelf->io_commit_halt = ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                              & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_halt));
    vlSelf->TOP__DOT__WB__DOT___io_WBout_valid_T = 
        ((IData)(vlSelf->TOP__DOT__MEM2WBValid) & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead));
    vlSelf->TOP__DOT__WB__DOT___io_WBout_valid_T_1 
        = ((IData)(vlSelf->TOP__DOT__MEM2WBValid) & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memWrite));
    vlSelf->TOP__DOT__WB_io_WBout_bits_mret = ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                                               & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_mret));
    vlSelf->TOP__DOT__clint__DOT___mtime_T_1 = (1ULL 
                                                + vlSelf->TOP__DOT__clint__DOT__mtime);
    vlSelf->io_commit_inst = vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_inst;
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr)));
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr)));
    if (vlSelf->TOP__DOT___EX_io_ID2EX_bits_T_1) {
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2 
            = vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2;
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2 = 
            (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 0x14U));
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata1 
            = ((0U == (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                >> 0xfU))) ? 0U : (
                                                   (((0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xfU)) 
                                                     == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                                    & (IData)(vlSelf->io_commit_wen))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31
                                                     : 
                                                    ((0x1eU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30
                                                      : 
                                                     ((0x1dU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29
                                                       : 
                                                      ((0x1cU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28
                                                        : 
                                                       ((0x1bU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27
                                                         : vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_58)))))));
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata2 
            = ((0U == (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                >> 0x14U))) ? 0U : 
               ((((0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                            >> 0x14U)) == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                 & (IData)(vlSelf->io_commit_wen)) ? vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata
                 : ((0x1fU == (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                        >> 0x14U)))
                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31
                     : ((0x1eU == (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                            >> 0x14U)))
                         ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30
                         : ((0x1dU == (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x14U)))
                             ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29
                             : ((0x1cU == (0x1fU & 
                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                            >> 0x14U)))
                                 ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28
                                 : ((0x1bU == (0x1fU 
                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x14U)))
                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27
                                     : vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_90)))))));
    }
    vlSelf->io_commit_wen = ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                             & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_regWrite));
    vlSelf->TOP__DOT__ramWrapper__DOT___rCount_T_3 
        = (0x1fU & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__rCount) 
                    - (IData)(1U)));
    vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum 
        = ((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr)
            ? (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__queue_1_slaveNum)
            : (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__queue_0_slaveNum));
    vlSelf->TOP__DOT__clint__DOT__arFifo_io_deq_bits_addr 
        = ((IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr)
            ? vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_1_addr
            : vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_0_addr);
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr)));
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr)));
    vlSelf->TOP__DOT__ramWrapper__DOT___bCount_T_4 
        = (0x1fU & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__bCount) 
                    - (IData)(1U)));
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr)));
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T 
        = (((3U == (3U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
             ? 0U : ((2U == (3U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                      ? 0xffffffffU : vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWdata)) 
           & ((2U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3))
               ? vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWdata
               : 0xffffffffU));
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T_1 
        = ((2U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3))
            ? (~ vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrWdata)
            : 0U);
    vlSelf->io_commit_addr = vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut;
    if (((0x1fU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x1eU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x1dU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x1cU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (((0x1bU == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
         & (IData)(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen))) {
        vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27 
            = vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata;
    }
    if (vlSelf->TOP__DOT___WB_io_MEM2WB_bits_T_1) {
        vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd = vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd;
    }
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr = 0U;
    } else if (vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T_1) {
        vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr 
            = vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtrInc;
    }
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr)));
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr = 0U;
    } else if (vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T_1) {
        vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr 
            = vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtrInc;
    }
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr)));
    vlSelf->TOP__DOT__xbar_io_slave_0_b_ready = ((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo_io_deq_bits_slaveNum) 
                                                 & (IData)(vlSelf->TOP__DOT__WB_io_b_ready));
    vlSelf->TOP__DOT__xbar_io_slave_1_b_ready = (((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo_io_deq_bits_slaveNum) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->TOP__DOT__WB_io_b_ready));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_4 
        = ((8U & ((~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
                  << 3U)) | ((4U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                    << 1U)) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_h61253848__0)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_hf12cf007__0 
        = ((4U & ((~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                      >> 1U)) << 2U)) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_h61253848__0));
    vlSelf->io_commit_mem = ((IData)(vlSelf->TOP__DOT__WB__DOT___io_WBout_valid_T) 
                             | (IData)(vlSelf->TOP__DOT__WB__DOT___io_WBout_valid_T_1));
    vlSelf->TOP__DOT__arbiter_io_AxiLite_r_bits_rid 
        = ((((1U & (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum))
              ? ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr)
                  ? (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_1_id)
                  : (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_0_id))
              : 0U) | ((2U & (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum))
                        ? ((IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr)
                            ? (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_1_id)
                            : (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__queue_0_id))
                        : 0U)) | ((4U & (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum))
                                   ? ((IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr)
                                       ? (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_1_id)
                                       : (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__queue_0_id))
                                   : 0U));
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mstatusWdata 
        = (vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T 
           | (vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T_1 
              & vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mstatusReg));
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecWdata 
        = (vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T 
           | (vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T_1 
              & vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecReg));
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mepcWdata_T_3 
        = (vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T 
           | (vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T_1 
              & vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mepcReg));
    vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mcauseWdata_T_3 
        = (vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T 
           | (vlSelf->TOP__DOT__WB__DOT__Csr__DOT___mstatusWdata_T_1 
              & vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mcauseReg));
    vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__shiftReg 
        = ((IData)(vlSelf->reset) ? 0x1cU : ((IData)(vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__zero)
                                              ? 0x1cU
                                              : (IData)(vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT___nxtVal_T_1)));
    vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__zero = 
        (1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__shiftReg)))));
    vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT___nxtVal_T_1 
        = ((0x10U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__shiftReg))) 
                     << 4U)) | (0xfU & ((IData)(vlSelf->TOP__DOT__uart__DOT__wLfsr__DOT__shiftReg) 
                                        >> 1U)));
    vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__shiftReg 
        = ((IData)(vlSelf->reset) ? 3U : ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__zero)
                                           ? 3U : (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT___nxtVal_T_1)));
    vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__zero 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__shiftReg)))));
    vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT___nxtVal_T_1 
        = ((0x10U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__shiftReg))) 
                     << 4U)) | (0xfU & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wLfsr__DOT__shiftReg) 
                                        >> 1U)));
    vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__shiftReg 
        = ((IData)(vlSelf->reset) ? 0x17U : ((IData)(vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__zero)
                                              ? 0x17U
                                              : (IData)(vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT___nxtVal_T_1)));
    vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__zero 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__shiftReg)))));
    vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT___nxtVal_T_1 
        = ((0x10U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__shiftReg))) 
                     << 4U)) | (0xfU & ((IData)(vlSelf->TOP__DOT__uart__DOT__awLfsr__DOT__shiftReg) 
                                        >> 1U)));
    vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__shiftReg 
        = ((IData)(vlSelf->reset) ? 0xcU : ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__zero)
                                             ? 0xcU
                                             : (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT___nxtVal_T_1)));
    vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__zero 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__shiftReg)))));
    vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT___nxtVal_T_1 
        = ((0x10U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__shiftReg))) 
                     << 4U)) | (0xfU & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awLfsr__DOT__shiftReg) 
                                        >> 1U)));
    vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__shiftReg 
        = ((IData)(vlSelf->reset) ? 2U : ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__zero)
                                           ? 2U : (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT___nxtVal_T_1)));
    vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__zero 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__shiftReg)))));
    vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT___nxtVal_T_1 
        = ((0x10U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__shiftReg))) 
                     << 4U)) | (0xfU & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arLfsr__DOT__shiftReg) 
                                        >> 1U)));
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr = 0U;
    } else if (vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T) {
        vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr 
            = vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtrInc;
    }
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__shiftReg 
        = ((IData)(vlSelf->reset) ? 0x1dU : ((IData)(vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__zero)
                                              ? 0x1dU
                                              : (IData)(vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT___nxtVal_T_1)));
    vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__zero 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__shiftReg)))));
    vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT___nxtVal_T_1 
        = ((0x10U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__shiftReg))) 
                     << 4U)) | (0xfU & ((IData)(vlSelf->TOP__DOT__clint__DOT__rLfsr__DOT__shiftReg) 
                                        >> 1U)));
    vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__shiftReg 
        = ((IData)(vlSelf->reset) ? 0x1aU : ((IData)(vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__zero)
                                              ? 0x1aU
                                              : (IData)(vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT___nxtVal_T_1)));
    vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__zero = 
        (1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__shiftReg)))));
    vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT___nxtVal_T_1 
        = ((0x10U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__shiftReg))) 
                     << 4U)) | (0xfU & ((IData)(vlSelf->TOP__DOT__uart__DOT__rLfsr__DOT__shiftReg) 
                                        >> 1U)));
    vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__shiftReg 
        = ((IData)(vlSelf->reset) ? 0x1eU : ((IData)(vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__zero)
                                              ? 0x1eU
                                              : (IData)(vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT___nxtVal_T_1)));
    vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__zero = 
        (1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__shiftReg)))));
    vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT___nxtVal_T_1 
        = ((0x10U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__shiftReg))) 
                     << 4U)) | (0xfU & ((IData)(vlSelf->TOP__DOT__uart__DOT__bLfsr__DOT__shiftReg) 
                                        >> 1U)));
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtr = 0U;
    } else if (vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T) {
        vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtr 
            = vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtrInc;
    }
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isEmpty 
        = ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr) 
              == (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__MEM__DOT___io_aw_valid_T = ((IData)(vlSelf->TOP__DOT__EX2MEMValid) 
                                                  & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite));
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo_io_deq_ready 
        = ((IData)(vlSelf->TOP__DOT__xbar_io_slave_0_b_ready) 
           & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__bCount)));
    vlSelf->TOP__DOT__uart__DOT__awFifo_io_deq_ready 
        = ((IData)(vlSelf->TOP__DOT__xbar_io_slave_1_b_ready) 
           & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__bCount)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_2 
        = ((8U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                  << 3U)) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T 
        = ((8U & ((~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)) 
                  << 3U)) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT____VdfgTmp_hf12cf007__0));
    vlSelf->TOP__DOT__MEM__DOT___io_ar_valid_T = ((IData)(vlSelf->TOP__DOT__EX2MEMValid) 
                                                  & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead));
    vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__shiftReg 
        = ((IData)(vlSelf->reset) ? 0x14U : ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__zero)
                                              ? 0x14U
                                              : (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT___nxtVal_T_1)));
    vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__zero 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__shiftReg)))));
    vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT___nxtVal_T_1 
        = ((0x10U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__shiftReg))) 
                     << 4U)) | (0xfU & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__rLfsr__DOT__shiftReg) 
                                        >> 1U)));
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr = 0U;
    } else if (vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T) {
        vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr 
            = vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtrInc;
    }
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr)));
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtr = 0U;
    } else if (vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T) {
        vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtr 
            = vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtrInc;
    }
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isEmpty 
        = ((~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr) 
              == (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__shiftReg 
        = ((IData)(vlSelf->reset) ? 0x1cU : ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__zero)
                                              ? 0x1cU
                                              : (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT___nxtVal_T_1)));
    vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__zero 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__shiftReg)))));
    vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT___nxtVal_T_1 
        = ((0x10U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__shiftReg))) 
                     << 4U)) | (0xfU & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__bLfsr__DOT__shiftReg) 
                                        >> 1U)));
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtr = 0U;
    } else if (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T) {
        vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtr 
            = vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtrInc;
    }
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isEmpty 
        = ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr) 
              == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtr)));
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtr = 0U;
    } else if (vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T) {
        vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtr 
            = vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtrInc;
    }
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isEmpty 
        = ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr) 
              == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__WB_io_WBout_bits_syscall = ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                                                  & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_syscall));
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtr = 0U;
    } else if (vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T) {
        vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtr 
            = vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtrInc;
    }
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isEmpty 
        = ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr) 
              == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtr)));
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtr = 0U;
    } else if (vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T) {
        vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtr 
            = vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtrInc;
    }
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isEmpty 
        = ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr) 
              == (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtr)));
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtr = 0U;
    } else if (vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T) {
        vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtr 
            = vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtrInc;
    }
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtrInc 
        = (1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isEmpty 
        = ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr) 
              == (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtr)));
    vlSelf->TOP__DOT__MEM__DOT__shiftWdata0 = ((1U 
                                                & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)
                                                ? VL_SHIFTL_III(32,32,32, vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2, 8U)
                                                : vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2);
    vlSelf->TOP__DOT__MEM__DOT___io_w_bits_wstrb_orMatrixOutputs_T_5 
        = (((IData)((3U == (3U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut))) 
            << 2U) | ((2U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                             & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                << 1U))) | (1U & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                  >> 1U))));
    vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput 
        = ((0xcU & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                    << 2U)) | (3U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut));
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h65f26336__0 
        = ((2U & ((~ (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                      >> 0x1eU)) << 1U)) | (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                            >> 0x1fU));
    vlSelf->TOP__DOT__ramWrapper__DOT__Sram_ren = (
                                                   (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isEmpty)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__rCount)));
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T_1 
        = ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isEmpty)) 
           & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo_io_deq_ready));
    vlSelf->TOP__DOT__MEM_io_flush = ((IData)(vlSelf->TOP__DOT__WB_io_WBout_bits_mret) 
                                      | (IData)(vlSelf->TOP__DOT__WB_io_WBout_bits_syscall));
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T_1 
        = ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isEmpty)) 
           & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo_io_deq_ready));
    vlSelf->TOP__DOT__ramWrapper__DOT__Sram_wen = (
                                                   (~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isEmpty)) 
                                                   & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isEmpty)) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__bCount))));
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T_1 
        = ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isEmpty)) 
           & (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo_io_deq_ready));
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T_1 
        = ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isEmpty)) 
           & (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo_io_deq_ready));
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo_io_enq_bits_data 
        = ((2U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)
            ? VL_SHIFTL_III(32,32,32, vlSelf->TOP__DOT__MEM__DOT__shiftWdata0, 0x10U)
            : vlSelf->TOP__DOT__MEM__DOT__shiftWdata0);
    vlSelf->TOP__DOT__MEM__DOT___io_w_bits_wstrb_orMatrixOutputs_T_3 
        = ((4U & (((~ (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)) 
                   << 2U) & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                             << 1U))) | ((2U & ((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                 & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                  >> 1U))));
    vlSelf->TOP__DOT__xbar__DOT___awSel_T = ((0x10U 
                                              & ((~ 
                                                  (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                   >> 0x1bU)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((~ 
                                                     (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                      >> 0x1cU)) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                         >> 0x1dU)) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h65f26336__0))));
    vlSelf->TOP__DOT__xbar__DOT__awSel_lo_1 = ((0x1000U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                     >> 0x13U)) 
                                                   << 0xcU)) 
                                               | ((0x800U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                        >> 0x14U)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                           >> 0x15U)) 
                                                         << 0xaU)) 
                                                     | ((0x200U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                              >> 0x16U)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ 
                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                 >> 0x17U)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ 
                                                                   (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                    >> 0x18U)) 
                                                                  << 7U)) 
                                                              | ((0x40U 
                                                                  & ((~ 
                                                                      (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                       >> 0x19U)) 
                                                                     << 6U)) 
                                                                 | ((0x20U 
                                                                     & ((~ 
                                                                         (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                          >> 0x1aU)) 
                                                                        << 5U)) 
                                                                    | ((0x10U 
                                                                        & ((~ 
                                                                            (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                             >> 0x1bU)) 
                                                                           << 4U)) 
                                                                       | ((8U 
                                                                           & ((~ 
                                                                               (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0x1cU)) 
                                                                              << 3U)) 
                                                                          | ((4U 
                                                                              & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0x1bU)) 
                                                                             | (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h65f26336__0))))))))))));
    if (vlSelf->TOP__DOT___EX_io_ID2EX_bits_T_1) {
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_halt = 
            (0xffffffffU == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62);
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_mret = 
            (0xffffffffU == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_64);
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memWrite 
            = (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1));
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc = vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_pc;
    }
    vlSelf->TOP__DOT__arbiter_io_AxiLite_r_valid = 
        (((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum) 
          & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__Sram_ren)) 
         | ((((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum) 
              >> 1U) & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isEmpty)) 
                        & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__rCount)))) 
            | (((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum) 
                >> 2U) & ((~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isEmpty)) 
                          & (0U == (IData)(vlSelf->TOP__DOT__clint__DOT__rCount))))));
    vlSelf->TOP__DOT__MEM__DOT___io_aw_valid_T_6 = 
        (1U & (~ ((~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__awAssert) 
                      | (IData)(vlSelf->TOP__DOT__MEM__DOT__wAssert))) 
                  & (IData)(vlSelf->TOP__DOT__MEM_io_flush))));
    vlSelf->TOP__DOT__MEM_io_ar_valid = ((~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__arDataFireReg) 
                                             | ((~ (IData)(vlSelf->TOP__DOT__MEM__DOT__arAssert)) 
                                                & (IData)(vlSelf->TOP__DOT__MEM_io_flush)))) 
                                         & (IData)(vlSelf->TOP__DOT__MEM__DOT___io_ar_valid_T));
    vlSelf->TOP__DOT__WB__DOT__bFire = ((IData)(vlSelf->TOP__DOT__WB_io_b_ready) 
                                        & (((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo_io_deq_bits_slaveNum) 
                                            & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__Sram_wen)) 
                                           | (((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo_io_deq_bits_slaveNum) 
                                               >> 1U) 
                                              & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isEmpty)) 
                                                 & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isEmpty)) 
                                                    & (0U 
                                                       == (IData)(vlSelf->TOP__DOT__uart__DOT__bCount)))))));
    if (vlSelf->TOP__DOT___EX_io_ID2EX_bits_T_1) {
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_csrRead 
            = vlSelf->TOP__DOT__ID_io_ID2EX_bits_csrRead;
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memRead 
            = (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3));
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_inst = vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst;
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_regWrite 
            = ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5)) 
               | (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_bits_csrRead));
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3 
            = (7U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                     >> 0xcU));
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1 = 
            (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 0xfU));
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_syscall 
            = (0xffffffffU == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_34);
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_csrWrite 
            = ((~ (IData)((0x2000U == (0xfa000U & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)))) 
               & (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26)));
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm = 
            ((((((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                  ? (((- (IData)((vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                  >> 0x1fU))) << 0xdU) 
                     | ((0x1000U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                    >> 0x13U)) | (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x14U)))
                  : 0U) | ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                            ? (((- (IData)((vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 0x13U)) 
                                            | ((0xfe0U 
                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 7U)))))
                            : 0U)) | ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                       ? (((- (IData)(
                                                      (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x1fU))) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 7U))))))
                                       : 0U)) | ((5U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0x1fU))) 
                                                   << 0x15U) 
                                                  | ((0x100000U 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst) 
                                                        | ((0x800U 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0x14U))))))
                                                  : 0U)) 
             | ((4U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                 ? (0xfffff000U & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)
                 : 0U));
    }
    if (vlSelf->TOP__DOT___ID_io_IF2ID_bits_T_1) {
        vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_pc = vlSelf->TOP__DOT__IF__DOT__pcReg;
    }
    if (vlSelf->TOP__DOT__ramWrapper__DOT__Sram_ren) {
        VTOP___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr)
                                                                ? vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_1_addr
                                                                : vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__queue_0_addr), vlSelf->__Vfunc_pmem_read__0__Vfuncout);
        vlSelf->TOP__DOT__ramWrapper__DOT__Sram__DOT__rdataReg 
            = vlSelf->__Vfunc_pmem_read__0__Vfuncout;
    } else {
        vlSelf->TOP__DOT__ramWrapper__DOT__Sram__DOT__rdataReg = 0U;
    }
    if (vlSelf->TOP__DOT__ramWrapper__DOT__Sram_wen) {
        VTOP___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr)
                                                                 ? vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_1_addr
                                                                 : vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__queue_0_addr), 
                                                               ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr)
                                                                 ? vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_1_data
                                                                 : vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_0_data), 
                                                               ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr)
                                                                 ? (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_1_strb)
                                                                 : (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__queue_0_strb)));
    }
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__IF__DOT__pcReg = 0x7ffffffcU;
    } else if (vlSelf->TOP__DOT__IF__DOT__brFail_io_reset) {
        vlSelf->TOP__DOT__IF__DOT__pcReg = vlSelf->TOP__DOT__IF_io_pcNext;
    }
    if (vlSelf->TOP__DOT___MEM_io_EX2MEM_bits_T_1) {
        vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd = vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rd;
    }
    if (vlSelf->TOP__DOT___EX_io_ID2EX_bits_T_1) {
        vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rd = (0x1fU 
                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 7U));
    }
    if (vlSelf->TOP__DOT___ID_io_IF2ID_bits_T_1) {
        vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst = 
            ((IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg)
              ? vlSelf->TOP__DOT__IF__DOT__rdataReg
              : vlSelf->TOP__DOT__IF_io_r_bits_rdata);
    }
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen = ((IData)(vlSelf->io_commit_wen) 
                                               & (0U 
                                                  != (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)));
    vlSelf->TOP__DOT__WBRegWrite = ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_regWrite) 
                                    & ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                                       & (0U != (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd))));
    vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_orMatrixOutputs 
        = (((IData)((0U != (IData)(vlSelf->TOP__DOT__MEM__DOT___io_w_bits_wstrb_orMatrixOutputs_T_5))) 
            << 3U) | (((IData)((0U != (IData)(vlSelf->TOP__DOT__MEM__DOT___io_w_bits_wstrb_orMatrixOutputs_T_3))) 
                       << 2U) | ((2U & (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          & (~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                                >> 1U))) 
                                         << 1U) | (
                                                   (((~ 
                                                      ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                                       >> 1U)) 
                                                     & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                                    << 1U) 
                                                   | (0xfffffffeU 
                                                      & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))))) 
                                 | (IData)((0U == (3U 
                                                   & (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))))));
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h7c0b3a70__0 
        = ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFireReg)) 
           & (0x1fU == (IData)(vlSelf->TOP__DOT__xbar__DOT___awSel_T)));
    vlSelf->TOP__DOT__xbar__DOT___awSel_T_2 = ((0x4000000U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                     >> 5U)) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                      << 0x13U)) 
                                                  | ((0x1000000U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                           >> 7U)) 
                                                         << 0x18U)) 
                                                     | ((0x800000U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                              >> 8U)) 
                                                            << 0x17U)) 
                                                        | ((0x400000U 
                                                            & ((~ 
                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                 >> 9U)) 
                                                               << 0x16U)) 
                                                           | ((0x200000U 
                                                               & ((~ 
                                                                   (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                    >> 0xaU)) 
                                                                  << 0x15U)) 
                                                              | ((0x100000U 
                                                                  & ((~ 
                                                                      (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                       >> 0xbU)) 
                                                                     << 0x14U)) 
                                                                 | ((0x80000U 
                                                                     & ((~ 
                                                                         (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                          >> 0xcU)) 
                                                                        << 0x13U)) 
                                                                    | ((0x40000U 
                                                                        & ((~ 
                                                                            (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                             >> 0xdU)) 
                                                                           << 0x12U)) 
                                                                       | ((0x20000U 
                                                                           & ((~ 
                                                                               (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0xeU)) 
                                                                              << 0x11U)) 
                                                                          | ((0x10000U 
                                                                              & ((~ 
                                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                             | ((0x8000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | (IData)(vlSelf->TOP__DOT__xbar__DOT__awSel_lo_1)))))))))))))));
    vlSelf->TOP__DOT__xbar__DOT___awSel_T_4 = ((0x20000000U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                     >> 2U)) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                      << 0x19U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                         << 0x17U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                            << 0x15U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                               << 0x13U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                  << 0x11U)) 
                                                              | ((0x800000U 
                                                                  & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                     << 0xfU)) 
                                                                 | ((0x400000U 
                                                                     & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                        << 0xdU)) 
                                                                    | (((0x200000U 
                                                                         & ((~ 
                                                                             (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                              >> 0xaU)) 
                                                                            << 0x15U)) 
                                                                        | ((0x100000U 
                                                                            & ((~ 
                                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0xbU)) 
                                                                               << 0x14U)) 
                                                                           | ((0x80000U 
                                                                               & ((~ 
                                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                              | ((0x40000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | (0x8000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)))))))) 
                                                                       | ((0x4000U 
                                                                           & ((~ 
                                                                               (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0x11U)) 
                                                                              << 0xeU)) 
                                                                          | ((0x2000U 
                                                                              & ((~ 
                                                                                (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                             | (IData)(vlSelf->TOP__DOT__xbar__DOT__awSel_lo_1))))))))))));
    vlSelf->TOP__DOT__WB__DOT__rDataFire = ((IData)(vlSelf->TOP__DOT__WB_io_r_ready) 
                                            & ((IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_bits_rid) 
                                               & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_valid)));
    vlSelf->TOP__DOT__MEM_io_w_valid = ((IData)(vlSelf->TOP__DOT__MEM__DOT___io_aw_valid_T) 
                                        & ((~ (IData)(vlSelf->TOP__DOT__MEM__DOT__wFireReg)) 
                                           & (IData)(vlSelf->TOP__DOT__MEM__DOT___io_aw_valid_T_6)));
    vlSelf->TOP__DOT__MEM_io_aw_valid = ((IData)(vlSelf->TOP__DOT__MEM__DOT___io_aw_valid_T) 
                                         & ((~ (IData)(vlSelf->TOP__DOT__MEM__DOT__awFireReg)) 
                                            & (IData)(vlSelf->TOP__DOT__MEM__DOT___io_aw_valid_T_6)));
    vlSelf->TOP__DOT__arbiter_io_AxiLite_ar_valid = 
        ((IData)(vlSelf->TOP__DOT__MEM_io_ar_valid) 
         | (IData)(vlSelf->TOP__DOT__arbiter_io_InstAxiLite_ar_valid));
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T_1 
        = ((~ ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
               & ((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr) 
                  == (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr)))) 
           & (IData)(vlSelf->TOP__DOT__WB__DOT__bFire));
    vlSelf->TOP__DOT__hazard1_1 = (((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1) 
                                    == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                   & (IData)(vlSelf->TOP__DOT__WBRegWrite));
    vlSelf->TOP__DOT__hazard2_1 = (((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2) 
                                    == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                   & (IData)(vlSelf->TOP__DOT__WBRegWrite));
    vlSelf->TOP__DOT__xbar__DOT__awFifo_io_enq_bits_slaveNum 
        = (((IData)((0x7ffffffU == vlSelf->TOP__DOT__xbar__DOT___awSel_T_2)) 
            << 2U) | (((IData)((0x3fffffffU == vlSelf->TOP__DOT__xbar__DOT___awSel_T_4)) 
                       << 1U) | (0x1fU == (IData)(vlSelf->TOP__DOT__xbar__DOT___awSel_T))));
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_heab2129b__0 
        = ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFireReg)) 
           & (0x3fffffffU == vlSelf->TOP__DOT__xbar__DOT___awSel_T_4));
    vlSelf->TOP__DOT__EX_io_WBoutValid = (1U & ((IData)(vlSelf->TOP__DOT__WB__DOT___io_WBout_valid_T)
                                                 ? (IData)(vlSelf->TOP__DOT__WB__DOT__rDataFire)
                                                 : 
                                                ((~ (IData)(vlSelf->TOP__DOT__WB__DOT___io_WBout_valid_T_1)) 
                                                 | (IData)(vlSelf->TOP__DOT__WB__DOT__bFire))));
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h84fb32f7__0 
        = ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
           & (IData)(vlSelf->TOP__DOT__MEM_io_w_valid));
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h17c60d26__0 
        = ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
           & (IData)(vlSelf->TOP__DOT__MEM_io_aw_valid));
    vlSelf->TOP__DOT__MEM__DOT___awFire_T = ((((0x1fU 
                                                == (IData)(vlSelf->TOP__DOT__xbar__DOT___awSel_T)) 
                                               & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                                  & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull)) 
                                                     & (0U 
                                                        == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awCount))))) 
                                              | ((0x3fffffffU 
                                                  == vlSelf->TOP__DOT__xbar__DOT___awSel_T_4) 
                                                 & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                                    & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull)) 
                                                       & (0U 
                                                          == (IData)(vlSelf->TOP__DOT__uart__DOT__awCount)))))) 
                                             & (IData)(vlSelf->TOP__DOT__MEM_io_aw_valid));
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_hff5c6ba8__0 
        = ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull)) 
           & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_ar_valid));
    vlSelf->TOP__DOT__MEMRegWrite = ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_regWrite) 
                                     & ((IData)(vlSelf->TOP__DOT__EX2MEMValid) 
                                        & (0U != (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd))));
    vlSelf->TOP__DOT__MEM__DOT___wFire_T = ((((IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h7c0b3a70__0) 
                                              & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                                 & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull)) 
                                                    & (0U 
                                                       == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wCount))))) 
                                             | ((IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_heab2129b__0) 
                                                & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
                                                   & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull)) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TOP__DOT__uart__DOT__wCount)))))) 
                                            & (IData)(vlSelf->TOP__DOT__MEM_io_w_valid));
    vlSelf->io_commit_commit = ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                                & (IData)(vlSelf->TOP__DOT__EX_io_WBoutValid));
    vlSelf->TOP__DOT__MEM_io_MEM2WB_ready = (1U & (
                                                   (~ 
                                                    ((IData)(vlSelf->TOP__DOT__MEM2WBValid) 
                                                     | (IData)(vlSelf->TOP__DOT__arwDataValid))) 
                                                   | (IData)(vlSelf->TOP__DOT__EX_io_WBoutValid)));
    vlSelf->TOP__DOT__xbar_io_slave_0_w_valid = ((IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h7c0b3a70__0) 
                                                 & (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h84fb32f7__0));
    vlSelf->TOP__DOT__xbar_io_slave_1_w_valid = ((IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_heab2129b__0) 
                                                 & (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h84fb32f7__0));
    vlSelf->TOP__DOT__xbar_io_slave_0_aw_valid = ((0x1fU 
                                                   == (IData)(vlSelf->TOP__DOT__xbar__DOT___awSel_T)) 
                                                  & (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h17c60d26__0));
    vlSelf->TOP__DOT__xbar_io_slave_1_aw_valid = ((0x3fffffffU 
                                                   == vlSelf->TOP__DOT__xbar__DOT___awSel_T_4) 
                                                  & (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h17c60d26__0));
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T 
        = ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)) 
           & (IData)(vlSelf->TOP__DOT__MEM__DOT___awFire_T));
    vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0 
        = (((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1) 
            == (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd)) 
           & (IData)(vlSelf->TOP__DOT__MEMRegWrite));
    vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0 
        = (((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2) 
            == (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd)) 
           & (IData)(vlSelf->TOP__DOT__MEMRegWrite));
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T 
        = ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__xbar_io_slave_0_w_valid) 
              & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wCount))));
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T 
        = ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__xbar_io_slave_1_w_valid) 
              & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__wCount))));
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T 
        = ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__xbar_io_slave_0_aw_valid) 
              & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awCount))));
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T 
        = ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__xbar_io_slave_1_aw_valid) 
              & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__awCount))));
    vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFullNext 
        = (((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T) 
            & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T_1)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__enqPtr))) 
                  == (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__deqPtr)))) 
           | ((~ ((IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT___isFullNext_T_1) 
                  & (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull))) 
              & (IData)(vlSelf->TOP__DOT__xbar__DOT__awFifo__DOT__isFull)));
    vlSelf->TOP__DOT__EX_io_hazard1 = (((IData)(vlSelf->TOP__DOT__hazard1_1) 
                                        << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0));
    vlSelf->TOP__DOT__EX_io_hazard2 = (((IData)(vlSelf->TOP__DOT__hazard2_1) 
                                        << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0));
    vlSelf->TOP__DOT__EX_io_stall = ((((IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0) 
                                       | (IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)) 
                                      & (IData)(vlSelf->TOP__DOT__MEM__DOT___io_ar_valid_T)) 
                                     | (((IData)(vlSelf->TOP__DOT__hazard1_1) 
                                         | (IData)(vlSelf->TOP__DOT__hazard2_1)) 
                                        & ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead) 
                                           & ((~ (IData)(vlSelf->TOP__DOT__EX_io_WBoutValid)) 
                                              & (IData)(vlSelf->TOP__DOT__MEM2WBValid)))));
    vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFullNext 
        = (((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T) 
            & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T_1)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__enqPtr))) 
                  == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__deqPtr)))) 
           | ((~ ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT___isFullNext_T_1) 
                  & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull))) 
              & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__wFifo__DOT__isFull)));
    vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFullNext 
        = (((IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T) 
            & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T_1)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__enqPtr))) 
                  == (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__deqPtr)))) 
           | ((~ ((IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT___isFullNext_T_1) 
                  & (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull))) 
              & (IData)(vlSelf->TOP__DOT__uart__DOT__wFifo__DOT__isFull)));
    vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFullNext 
        = (((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T) 
            & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T_1)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__enqPtr))) 
                  == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__deqPtr)))) 
           | ((~ ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT___isFullNext_T_1) 
                  & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull))) 
              & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__awFifo__DOT__isFull)));
    vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFullNext 
        = (((IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T) 
            & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T_1)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__enqPtr))) 
                  == (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__deqPtr)))) 
           | ((~ ((IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT___isFullNext_T_1) 
                  & (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull))) 
              & (IData)(vlSelf->TOP__DOT__uart__DOT__awFifo__DOT__isFull)));
    vlSelf->TOP__DOT__EXoutValid = ((~ (IData)(vlSelf->TOP__DOT__EX_io_stall)) 
                                    & (IData)(vlSelf->TOP__DOT__ID2EXValid));
    vlSelf->TOP__DOT__IF__DOT__rFireReg = __Vdly__TOP__DOT__IF__DOT__rFireReg;
    vlSelf->TOP__DOT__IF_io_r_ready = ((~ (IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg)) 
                                       & (IData)(vlSelf->TOP__DOT__arInstValid));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36 = (
                                                   (8U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 2U)) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 2U)) 
                                                      | ((2U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0xbU)) 
                                                         | (1U 
                                                            & (~ 
                                                               (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0xdU))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0 
        = ((0x20U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                         >> 0x19U)) << 5U)) | ((0x10U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0x1aU)) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x1bU)) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x1cU)) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x1dU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0x1fU))))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_2 = ((0x80U 
                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      << 7U)) 
                                                  | ((0x40U 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         << 5U)) 
                                                     | ((0x20U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 2U)) 
                                                            << 5U)) 
                                                        | ((0x10U 
                                                            & ((~ 
                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 3U)) 
                                                               << 4U)) 
                                                           | ((8U 
                                                               & ((~ 
                                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 4U)) 
                                                                  << 3U)) 
                                                              | ((4U 
                                                                  & ((~ 
                                                                      (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                       >> 5U)) 
                                                                     << 2U)) 
                                                                 | ((2U 
                                                                     & ((~ 
                                                                         (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                          >> 6U)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (~ 
                                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                           >> 0xdU))))))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6 = ((4U 
                                                   & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst) 
                                                  | ((2U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 3U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 4U)))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_32 = (
                                                   (0x40U 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          << 4U)) 
                                                      | ((0x10U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             << 2U)) 
                                                         | ((8U 
                                                             & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst) 
                                                            | ((4U 
                                                                & ((~ 
                                                                    (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                     >> 4U)) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                      >> 4U)) 
                                                                  | (1U 
                                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                        >> 6U))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h89094836__0 
        = ((2U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                  >> 0xcU)) | (1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                        >> 0xeU))));
    vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9 = 
        ((0x80U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                       >> 8U)) << 7U)) | ((0x40U & 
                                           ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                >> 9U)) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & ((~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0xaU)) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & ((~ 
                                                     (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0xbU)) 
                                                    << 4U)) 
                                                | ((8U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xcU)) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & ((~ 
                                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0xdU)) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & ((~ 
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0xeU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (~ 
                                                               (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0xfU))))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hc297c6cf__0 
        = ((2U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                  >> 5U)) | (1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 0xdU)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T = ((2U 
                                                 & ((~ 
                                                     (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 2U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 5U))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_19 = (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 4U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 4U)) 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 6U)))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25 = (
                                                   (4U 
                                                    & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst) 
                                                   | ((2U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 3U)) 
                                                      | (1U 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 5U))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6398cd2a__0 
        = ((2U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                  >> 0xcU)) | (1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                     >> 0xeU)));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h20af328f__0 
        = ((4U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 6U)) << 2U)) | ((2U & ((~ 
                                                 (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0xcU)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0xeU)))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h1fa5bf6d__0 
        = ((2U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0xeU))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_8 = ((2U 
                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 5U))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_52 = (
                                                   (8U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 2U)) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & ((~ 
                                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 4U)) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 4U)) 
                                                         | (1U 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0xeU)))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_28 = (
                                                   (8U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 2U)) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & ((~ 
                                                           (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 4U)) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 5U)) 
                                                         | (1U 
                                                            & (~ 
                                                               (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0xeU))))));
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_45 = (
                                                   (0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_13
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_12
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_11
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_10
                                                       : 
                                                      ((9U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_9
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_8
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_7
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_6
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_5
                                                            : 
                                                           ((4U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_4
                                                             : 
                                                            ((3U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 0xfU)))
                                                              ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_3
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   >> 0xfU)))
                                                               ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_2
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 0xfU)))
                                                                ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_1
                                                                : vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_0)))))))))))));
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_77 = (
                                                   (0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_13
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_12
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_11
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_10
                                                       : 
                                                      ((9U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_9
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_8
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_7
                                                          : 
                                                         ((6U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_6
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0x14U)))
                                                            ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_5
                                                            : 
                                                           ((4U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0x14U)))
                                                             ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_4
                                                             : 
                                                            ((3U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 0x14U)))
                                                              ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_3
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   >> 0x14U)))
                                                               ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_2
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 0x14U)))
                                                                ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_1
                                                                : vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_0)))))))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0 
        = ((2U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                      >> 0x1eU)) << 1U)) | (1U & (~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x1fU))));
    if (((IData)(vlSelf->TOP__DOT__IF__DOT___rFireReg_T_1) 
         & (~ (IData)(vlSelf->TOP__DOT__IF_io_IF2ID_ready)))) {
        vlSelf->TOP__DOT__IF__DOT__rdataReg = vlSelf->TOP__DOT__IF_io_r_bits_rdata;
    }
    vlSelf->TOP__DOT__arbiter_io_AxiLite_r_ready = 
        ((1U & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_bits_rid))
          ? (IData)(vlSelf->TOP__DOT__WB_io_r_ready)
          : (IData)(vlSelf->TOP__DOT__IF_io_r_ready));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26 
        = (((IData)((0x1073U == (0x107fU & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
            << 1U) | (IData)(((0x33U == (0x3fU & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                              & (3U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hc297c6cf__0)))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_32 
        = (((IData)((3U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T))) 
            << 1U) | (1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                            >> 6U)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_60 = (
                                                   (0x10U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 2U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 1U)) 
                                                      | ((4U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0xaU)) 
                                                         | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6398cd2a__0))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_4 = ((0x100U 
                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      << 8U)) 
                                                  | ((0x80U 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         << 6U)) 
                                                     | ((0x40U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 2U)) 
                                                            << 6U)) 
                                                        | ((0x20U 
                                                            & ((~ 
                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 3U)) 
                                                               << 5U)) 
                                                           | ((0x10U 
                                                               & ((~ 
                                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 4U)) 
                                                                  << 4U)) 
                                                              | ((8U 
                                                                  & ((~ 
                                                                      (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                       >> 5U)) 
                                                                     << 3U)) 
                                                                 | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h20af328f__0)))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1 
        = (((IData)(((0x23U == (0x3fU & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                     & (7U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h20af328f__0)))) 
            << 1U) | (IData)(((0x23U == (0x7fU & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                              & (3U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h1fa5bf6d__0)))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_30 = (
                                                   (0x100U 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          << 6U)) 
                                                      | ((0x40U 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             << 4U)) 
                                                         | ((0x20U 
                                                             & ((~ 
                                                                 (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 4U)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   >> 1U)) 
                                                               | ((8U 
                                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                      >> 3U)) 
                                                                  | ((4U 
                                                                      & ((~ 
                                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                           >> 0xcU)) 
                                                                         << 2U)) 
                                                                     | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h1fa5bf6d__0))))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23 
        = (((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6))) 
            << 2U) | (((IData)((3U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_8))) 
                       << 1U) | (1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 3U))));
    vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2 = ((2U 
                                                   & (((7U 
                                                        == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6)) 
                                                       | (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 3U)) 
                                                      << 1U)) 
                                                  | ((3U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T)) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_8)) 
                                                        | ((7U 
                                                            == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_19)) 
                                                           | (7U 
                                                              == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_36 
        = (((IData)((3U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_8))) 
            << 2U) | ((2U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                             >> 2U)) | (7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12 
        = (((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_28))) 
            << 5U) | ((((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                            >> 2U)) & (3U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hc297c6cf__0))) 
                       << 4U) | (((IData)(((0x1000U 
                                            == (0x1004U 
                                                & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                                           & (3U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h89094836__0)))) 
                                  << 3U) | (((IData)(
                                                     (0x5010U 
                                                      == 
                                                      (0x40007014U 
                                                       & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
                                             << 2U) 
                                            | (((IData)(
                                                        ((0U 
                                                          == 
                                                          (0x1004U 
                                                           & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                         & (3U 
                                                            == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6398cd2a__0)))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0x40000030U 
                                                          == 
                                                          (0x40001034U 
                                                           & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hf773fe7b__0 
        = (((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_28))) 
            << 1U) | (0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_52)));
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_58 = (
                                                   (0x1aU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_26
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_25
                                                     : 
                                                    ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_24
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_23
                                                       : 
                                                      ((0x16U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_22
                                                        : 
                                                       ((0x15U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_21
                                                         : 
                                                        ((0x14U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_20
                                                          : 
                                                         ((0x13U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_19
                                                           : 
                                                          ((0x12U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_18
                                                            : 
                                                           ((0x11U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_17
                                                             : 
                                                            ((0x10U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 0xfU)))
                                                              ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_16
                                                              : 
                                                             ((0xfU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   >> 0xfU)))
                                                               ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_15
                                                               : 
                                                              ((0xeU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 0xfU)))
                                                                ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_14
                                                                : vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_45)))))))))))));
    vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_90 = (
                                                   (0x1aU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_26
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_25
                                                     : 
                                                    ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_24
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_23
                                                       : 
                                                      ((0x16U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_22
                                                        : 
                                                       ((0x15U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_21
                                                         : 
                                                        ((0x14U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_20
                                                          : 
                                                         ((0x13U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_19
                                                           : 
                                                          ((0x12U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0x14U)))
                                                            ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_18
                                                            : 
                                                           ((0x11U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0x14U)))
                                                             ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_17
                                                             : 
                                                            ((0x10U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 0x14U)))
                                                              ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_16
                                                              : 
                                                             ((0xfU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   >> 0x14U)))
                                                               ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_15
                                                               : 
                                                              ((0xeU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                    >> 0x14U)))
                                                                ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_14
                                                                : vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_77)))))))))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_64 = (
                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    << 0x1fU) 
                                                   | ((0x40000000U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          << 0x1dU)) 
                                                      | ((0x20000000U 
                                                          & ((~ 
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 2U)) 
                                                             << 0x1dU)) 
                                                         | ((0x10000000U 
                                                             & ((~ 
                                                                 (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 3U)) 
                                                                << 0x1cU)) 
                                                            | ((0x8000000U 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   << 0x17U)) 
                                                               | ((0x4000000U 
                                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                      << 0x15U)) 
                                                                  | ((0x2000000U 
                                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                         << 0x13U)) 
                                                                     | ((0x1000000U 
                                                                         & ((~ 
                                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                              >> 7U)) 
                                                                            << 0x18U)) 
                                                                        | (((IData)(vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9) 
                                                                            << 0x10U) 
                                                                           | ((0x8000U 
                                                                               & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                              | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x1bU)) 
                                                                                | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0))))))))))))))))))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h35f65dd2__0 
        = ((0x40U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                         >> 0x19U)) << 6U)) | ((0x20U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0x1aU)) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x1bU)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x1cU)) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x1dU)) 
                                                            << 2U)) 
                                                        | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0))))));
    vlSelf->TOP__DOT__IF__DOT___rFireReg_T_1 = ((IData)(vlSelf->TOP__DOT__IF_io_r_ready) 
                                                & ((~ (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_bits_rid)) 
                                                   & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_valid)));
    vlSelf->TOP__DOT__IF_io_r_bits_rdata = (((1U & (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum))
                                              ? vlSelf->TOP__DOT__ramWrapper__DOT__Sram__DOT__rdataReg
                                              : 0U) 
                                            | ((4U 
                                                & (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum))
                                                ? (
                                                   (0xa000004cU 
                                                    == vlSelf->TOP__DOT__clint__DOT__arFifo_io_deq_bits_addr)
                                                    ? (IData)(
                                                              (vlSelf->TOP__DOT__clint__DOT__mtime 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xa0000048U 
                                                     == vlSelf->TOP__DOT__clint__DOT__arFifo_io_deq_bits_addr)
                                                     ? (IData)(vlSelf->TOP__DOT__clint__DOT__mtime)
                                                     : 0U))
                                                : 0U));
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T_1 
        = ((~ ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull)) 
               & ((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr) 
                  == (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr)))) 
           & ((IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_ready) 
              & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_valid)));
    vlSelf->TOP__DOT__xbar_io_slave_0_r_ready = ((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum) 
                                                 & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_ready));
    vlSelf->TOP__DOT__xbar_io_slave_1_r_ready = (((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum) 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_ready));
    vlSelf->TOP__DOT__xbar_io_slave_2_r_ready = (((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo_io_deq_bits_slaveNum) 
                                                  >> 2U) 
                                                 & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_r_ready));
    vlSelf->TOP__DOT__ID_io_ID2EX_bits_csrRead = ((~ (IData)(
                                                             (0x1000U 
                                                              == 
                                                              (0x3f80U 
                                                               & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16 
        = (((IData)((0x4010U == (0x5014U & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
            << 1U) | (0x1fU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_60)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14 
        = (((IData)(((0x10U == (0x14U & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                     & (3U == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h89094836__0)))) 
            << 3U) | (((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_52))) 
                       << 2U) | (((IData)((0x1fU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_60))) 
                                  << 1U) | (IData)(
                                                   (0x40001010U 
                                                    == 
                                                    (0x40001014U 
                                                     & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3 
        = (((IData)((0xffU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_2))) 
            << 1U) | (0x1ffU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_4)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10 
        = (((IData)((0x1ffU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_30))) 
            << 1U) | (0x7fU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_32)));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7 
        = ((4U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                  >> 1U)) | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hf773fe7b__0));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_34 
        = (((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_19))) 
            << 2U) | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_hf773fe7b__0));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5 
        = (((IData)((0xffU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_2))) 
            << 9U) | (((IData)((0x1ffU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_4))) 
                       << 8U) | (((IData)((0x13U == 
                                           (0x107bU 
                                            & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
                                  << 7U) | (((IData)(
                                                     ((0x13U 
                                                       == 
                                                       (0x705bU 
                                                        & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                      & (0x3fU 
                                                         == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0)))) 
                                             << 6U) 
                                            | (((IData)(
                                                        ((0x13U 
                                                          == 
                                                          (0x5bU 
                                                           & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                         & (0x7fU 
                                                            == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h35f65dd2__0)))) 
                                                << 5U) 
                                               | (((IData)(
                                                           (0x17U 
                                                            == 
                                                            (0x5fU 
                                                             & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              (0x1ffU 
                                                               == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_30))) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0x7fU 
                                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_32))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0x2013U 
                                                                     == 
                                                                     (0x207bU 
                                                                      & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst))) 
                                                            << 1U) 
                                                           | (IData)(
                                                                     ((0x5013U 
                                                                       == 
                                                                       (0x705bU 
                                                                        & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)) 
                                                                      & (0x3fU 
                                                                         == (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0)))))))))))));
    vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0 
        = ((0x400U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                          >> 0x15U)) << 0xaU)) | ((0x200U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x16U)) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                           >> 0x17U)) 
                                                         << 8U)) 
                                                     | ((0x80U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                              >> 0x18U)) 
                                                            << 7U)) 
                                                        | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h35f65dd2__0)))));
    vlSelf->TOP__DOT__IF_io_IF2ID_valid = ((IData)(vlSelf->TOP__DOT__IF__DOT___rFireReg_T_1) 
                                           | (IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg));
    vlSelf->TOP__DOT__WB__DOT__rdataShift0 = ((1U & vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut)
                                               ? VL_SHIFTR_III(32,32,32, vlSelf->TOP__DOT__IF_io_r_bits_rdata, 8U)
                                               : vlSelf->TOP__DOT__IF_io_r_bits_rdata);
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T_1 
        = ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isEmpty)) 
           & ((IData)(vlSelf->TOP__DOT__xbar_io_slave_0_r_ready) 
              & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__rCount))));
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T_1 
        = ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isEmpty)) 
           & ((IData)(vlSelf->TOP__DOT__xbar_io_slave_1_r_ready) 
              & (0U == (IData)(vlSelf->TOP__DOT__uart__DOT__rCount))));
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T_1 
        = ((~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isEmpty)) 
           & ((IData)(vlSelf->TOP__DOT__xbar_io_slave_2_r_ready) 
              & (0U == (IData)(vlSelf->TOP__DOT__clint__DOT__rCount))));
    vlSelf->TOP__DOT__ID__DOT__Type = (((IData)((0U 
                                                 != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_36))) 
                                        << 2U) | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_34))) 
                                                   << 1U) 
                                                  | (0U 
                                                     != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_32))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_34 = (
                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    << 0x1fU) 
                                                   | ((0x40000000U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          << 0x1dU)) 
                                                      | ((0x20000000U 
                                                          & ((~ 
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 2U)) 
                                                             << 0x1dU)) 
                                                         | ((0x10000000U 
                                                             & ((~ 
                                                                 (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 3U)) 
                                                                << 0x1cU)) 
                                                            | ((0x8000000U 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   << 0x17U)) 
                                                               | ((0x4000000U 
                                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                      << 0x15U)) 
                                                                  | ((0x2000000U 
                                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                         << 0x13U)) 
                                                                     | ((0x1000000U 
                                                                         & ((~ 
                                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                              >> 7U)) 
                                                                            << 0x18U)) 
                                                                        | (((IData)(vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9) 
                                                                            << 0x10U) 
                                                                           | ((0x8000U 
                                                                               & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                              | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0)))))))))))))));
    vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62 = (
                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    << 0x1fU) 
                                                   | ((0x40000000U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          << 0x1dU)) 
                                                      | ((0x20000000U 
                                                          & ((~ 
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 2U)) 
                                                             << 0x1dU)) 
                                                         | ((0x10000000U 
                                                             & ((~ 
                                                                 (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                  >> 3U)) 
                                                                << 0x1cU)) 
                                                            | ((0x8000000U 
                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   << 0x17U)) 
                                                               | ((0x4000000U 
                                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                      << 0x15U)) 
                                                                  | ((0x2000000U 
                                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                         << 0x13U)) 
                                                                     | ((0x1000000U 
                                                                         & ((~ 
                                                                             (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                              >> 7U)) 
                                                                            << 0x18U)) 
                                                                        | (((IData)(vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9) 
                                                                            << 0x10U) 
                                                                           | ((0x8000U 
                                                                               & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                              | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                                >> 9U)) 
                                                                                | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0)))))))))))))));
    vlSelf->TOP__DOT__WB__DOT__rdataShift1 = ((2U & vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut)
                                               ? VL_SHIFTR_III(32,32,32, vlSelf->TOP__DOT__WB__DOT__rdataShift0, 0x10U)
                                               : vlSelf->TOP__DOT__WB__DOT__rdataShift0);
    vlSelf->TOP__DOT__WB__DOT__rdataSignal = (1U & 
                                              ((~ ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3) 
                                                   >> 2U)) 
                                               & ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                                   ? 
                                                  (vlSelf->TOP__DOT__WB__DOT__rdataShift1 
                                                   >> 0xfU)
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                                    ? 
                                                   (vlSelf->TOP__DOT__WB__DOT__rdataShift1 
                                                    >> 7U)
                                                    : 
                                                   (vlSelf->TOP__DOT__WB__DOT__rdataShift1 
                                                    >> 0x1fU)))));
    vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata = ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead)
                                               ? ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                                   ? 
                                                  ((((IData)(vlSelf->TOP__DOT__WB__DOT__rdataSignal)
                                                      ? 0xffffU
                                                      : 0U) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->TOP__DOT__WB__DOT__rdataShift1))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                                    ? 
                                                   ((((IData)(vlSelf->TOP__DOT__WB__DOT__rdataSignal)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->TOP__DOT__WB__DOT__rdataShift1))
                                                    : vlSelf->TOP__DOT__WB__DOT__rdataShift1))
                                               : ((IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrRead)
                                                   ? 
                                                  ((0x343U 
                                                    == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                                    ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvalReg
                                                    : 
                                                   ((0x342U 
                                                     == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                                     ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mcauseReg
                                                     : 
                                                    ((0x341U 
                                                      == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                                      ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mepcReg
                                                      : 
                                                     ((0x305U 
                                                       == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                                       ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecReg
                                                       : 
                                                      ((0x300U 
                                                        == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_csrAddr))
                                                        ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mstatusReg
                                                        : 0U)))))
                                                   : vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut));
    vlSelf->TOP__DOT__EX__DOT__data1 = ((IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0)
                                         ? vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut
                                         : (((~ (IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0)) 
                                             & (IData)(vlSelf->TOP__DOT__hazard1_1))
                                             ? vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata
                                             : ((IData)(vlSelf->TOP__DOT__EX__DOT__hazard1Reg)
                                                 ? vlSelf->TOP__DOT__EX__DOT__bypassReg
                                                 : vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata1)));
    vlSelf->TOP__DOT__EX__DOT__data2 = ((IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)
                                         ? vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut
                                         : (((~ (IData)(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0)) 
                                             & (IData)(vlSelf->TOP__DOT__hazard2_1))
                                             ? vlSelf->TOP__DOT__ID__DOT__Rf_io_wdata
                                             : ((IData)(vlSelf->TOP__DOT__EX__DOT__hazard2Reg)
                                                 ? vlSelf->TOP__DOT__EX__DOT__bypassReg
                                                 : vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata2)));
    vlSelf->TOP__DOT__IF_io_pcBr = ((IData)(vlSelf->TOP__DOT__WB_io_WBout_bits_syscall)
                                     ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mtvecReg
                                     : ((IData)(vlSelf->TOP__DOT__WB_io_WBout_bits_mret)
                                         ? vlSelf->TOP__DOT__WB__DOT__Csr__DOT__mepcReg
                                         : (((1U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc))
                                              ? (vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm 
                                                 + vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc)
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc))
                                                ? vlSelf->TOP__DOT__EX__DOT__data1
                                                : 0U))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
        = ((1U == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc1))
            ? vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc
            : ((0U == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc1))
                ? vlSelf->TOP__DOT__EX__DOT__data1 : 0U));
    vlSelf->TOP__DOT__EX__DOT__Alu_io_B = (((((0U == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                                               ? vlSelf->TOP__DOT__EX__DOT__data2
                                               : 0U) 
                                             | ((1U 
                                                 == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                                                 ? vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm
                                                 : 0U)) 
                                            | ((2U 
                                                == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                                                ? 4U
                                                : 0U)) 
                                           | ((3U == (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2))
                                               ? (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2)
                                               : 0U));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit 
        = ((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18)) 
           & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
              & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                 >> 0x1fU)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)) 
           & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B >> 4U));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB = (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                   ^ 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T))
                                                     ? 0U
                                                     : 0xffffffffU));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
                 & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                    >> 4U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)) 
           & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B >> 3U));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
                 & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                    >> 3U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)) 
           & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B >> 2U));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
                 & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                    >> 2U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)) 
           & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B >> 1U));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
                 & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                    >> 1U)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL 
        = ((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)) 
           & vlSelf->TOP__DOT__EX__DOT__Alu_io_B);
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR 
        = (1U & ((~ (IData)((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14)))) 
                 & vlSelf->TOP__DOT__EX__DOT__Alu_io_B));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
        = (0x3ffffffffULL & ((0x1ffffffffULL & ((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din)) 
                                                + (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB)))) 
                             + (QData)((IData)((1U 
                                                & (~ (IData)(
                                                             (0xfU 
                                                              == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))))))));
    vlSelf->__VdfgTmp_hdc4529e6__0 = ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->__VdfgTmp_hc0e75ea4__0 = ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->__VdfgTmp_hc5f2be33__0 = ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->__VdfgTmp_hea51fcb4__0 = ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                       >> 1U))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 1U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 2U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1eU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1fU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1dU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1fU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit)) 
                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                      & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 0x1eU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 2U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 3U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 1U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 3U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 4U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 2U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1cU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1dU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1bU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1dU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1eU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1cU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 4U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 5U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 3U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 5U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 6U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 4U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1aU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1bU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x19U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x1bU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1cU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1aU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 6U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 7U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 5U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 7U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 8U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 6U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x18U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x19U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x17U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x19U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1aU)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x18U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 8U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 9U)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                  >> 7U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 9U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                    >> 0xaU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 8U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x16U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x17U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x15U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x17U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x18U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x16U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xaU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xbU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 9U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xbU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xcU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xaU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x14U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x15U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x13U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x15U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x16U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x14U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xcU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xdU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xbU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xdU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xeU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xcU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x12U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x13U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x11U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x13U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x14U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x12U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xeU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xfU)) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xdU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0xfU)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x10U)) | 
                                  ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xeU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x10U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x11U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0xfU)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17 
        = (1U & (((~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B) 
                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                     >> 0x11U)) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x12U)) | 
                                   ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL) 
                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x10U)))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30)) 
           | ((IData)(vlSelf->__VdfgTmp_hea51fcb4__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31)) 
           | ((IData)(vlSelf->__VdfgTmp_hea51fcb4__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 1U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30)) 
           | ((IData)(vlSelf->__VdfgTmp_hc5f2be33__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31)) 
           | ((IData)(vlSelf->__VdfgTmp_hc5f2be33__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28)) 
           | ((IData)(vlSelf->__VdfgTmp_hc5f2be33__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29)) 
           | ((IData)(vlSelf->__VdfgTmp_hc5f2be33__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 2U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24)) 
           | ((IData)(vlSelf->__VdfgTmp_hc0e75ea4__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28)) 
           | ((IData)(vlSelf->__VdfgTmp_hc0e75ea4__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26)) 
           | ((IData)(vlSelf->__VdfgTmp_hc0e75ea4__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30)) 
           | ((IData)(vlSelf->__VdfgTmp_hc0e75ea4__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25)) 
           | ((IData)(vlSelf->__VdfgTmp_hc0e75ea4__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29)) 
           | ((IData)(vlSelf->__VdfgTmp_hc0e75ea4__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7)) 
           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15)));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27)) 
           | ((IData)(vlSelf->__VdfgTmp_hc0e75ea4__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31)) 
           | ((IData)(vlSelf->__VdfgTmp_hc0e75ea4__0) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23 
        = (((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                >> 3U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23)) 
           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR) 
               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31)) 
              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL) 
                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15))));
    vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout 
        = ((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                   >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)) 
              | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)))) 
             << 0x1fU) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                 >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)) 
                            | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                               | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)))) 
                           << 0x1eU) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                               >> 4U)) 
                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)) 
                                          | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)))) 
                                         << 0x1dU) 
                                        | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                  >> 4U)) 
                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)) 
                                             | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)))) 
                                            << 0x1cU) 
                                           | (((((~ 
                                                  (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)) 
                                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)))) 
                                               << 0x1bU) 
                                              | (((((~ 
                                                     (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                      >> 4U)) 
                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)) 
                                                   | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                      | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)))) 
                                                  << 0x1aU) 
                                                 | (((((~ 
                                                        (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                         >> 4U)) 
                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)) 
                                                      | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                         | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)))) 
                                                     << 0x19U) 
                                                    | (((((~ 
                                                           (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                            >> 4U)) 
                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)) 
                                                         | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                            | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)))) 
                                                        << 0x18U) 
                                                       | (((((~ 
                                                              (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                               >> 4U)) 
                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                                            | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                               | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))) 
                                                           << 0x17U) 
                                                          | (((((~ 
                                                                 (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                  >> 4U)) 
                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                                               | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                  | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))) 
                                                              << 0x16U) 
                                                             | (((((~ 
                                                                    (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                     >> 4U)) 
                                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                                                  | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                     | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                        & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))) 
                                                                 << 0x15U) 
                                                                | (((((~ 
                                                                       (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                        >> 4U)) 
                                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                                                     | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                        | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))) 
                                                                    << 0x14U) 
                                                                   | (((((~ 
                                                                          (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                           >> 4U)) 
                                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                                                        | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))) 
                                                                       << 0x13U) 
                                                                      | (((((~ 
                                                                             (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                              >> 4U)) 
                                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                                                           | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))) 
                                                                          << 0x12U) 
                                                                         | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                                                              | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))) 
                                                                             << 0x11U) 
                                                                            | ((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_hdc4529e6__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))) 
                                                                               << 0x10U)))))))))))))))) 
           | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                     >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)) 
                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))) 
               << 0xfU) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))) 
                            << 0xeU) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                               >> 4U)) 
                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)) 
                                          | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))) 
                                         << 0xdU) | 
                                        (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                >> 4U)) 
                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)) 
                                           | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))) 
                                          << 0xcU) 
                                         | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                   >> 4U)) 
                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)) 
                                              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))) 
                                             << 0xbU) 
                                            | (((((~ 
                                                   (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                    >> 4U)) 
                                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)) 
                                                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))) 
                                                << 0xaU) 
                                               | (((((~ 
                                                      (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                       >> 4U)) 
                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)) 
                                                    | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))) 
                                                   << 9U) 
                                                  | (((((~ 
                                                         (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                          >> 4U)) 
                                                        & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)) 
                                                       | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))) 
                                                      << 8U) 
                                                     | (((((~ 
                                                            (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                             >> 4U)) 
                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)) 
                                                          | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))) 
                                                         << 7U) 
                                                        | (((((~ 
                                                               (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                >> 4U)) 
                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)) 
                                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))) 
                                                            << 6U) 
                                                           | (((((~ 
                                                                  (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                   >> 4U)) 
                                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)) 
                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))) 
                                                               << 5U) 
                                                              | (((((~ 
                                                                     (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                      >> 4U)) 
                                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)) 
                                                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))) 
                                                                  << 4U) 
                                                                 | (((((~ 
                                                                        (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                         >> 4U)) 
                                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)) 
                                                                      | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))) 
                                                                     << 3U) 
                                                                    | (((((~ 
                                                                           (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                            >> 4U)) 
                                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)) 
                                                                         | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))) 
                                                                        << 2U) 
                                                                       | (((((~ 
                                                                              (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                               >> 4U)) 
                                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)) 
                                                                            | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))) 
                                                                           << 1U) 
                                                                          | (((~ 
                                                                               (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)) 
                                                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)))))))))))))))))));
    vlSelf->TOP__DOT__EX__DOT__Alu_io_Result = ((((
                                                   (((((((0xfU 
                                                          == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T))
                                                          ? (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)
                                                          : 0U) 
                                                        | ((0xfU 
                                                            == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_2))
                                                            ? (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)
                                                            : 0U)) 
                                                       | ((3U 
                                                           == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_12))
                                                           ? 
                                                          (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                           & vlSelf->TOP__DOT__EX__DOT__Alu_io_B)
                                                           : 0U)) 
                                                      | ((3U 
                                                          == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_10))
                                                          ? 
                                                         (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                          | vlSelf->TOP__DOT__EX__DOT__Alu_io_B)
                                                          : 0U)) 
                                                     | ((7U 
                                                         == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_8))
                                                         ? 
                                                        (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                         ^ vlSelf->TOP__DOT__EX__DOT__Alu_io_B)
                                                         : 0U)) 
                                                    | ((0xfU 
                                                        == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_4))
                                                        ? 
                                                       (1U 
                                                        & (((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                             & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB) 
                                                            >> 0x1fU) 
                                                           | (((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                                ^ vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB) 
                                                               >> 0x1fU) 
                                                              & (IData)(
                                                                        (vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                                         >> 0x1fU)))))
                                                        : 0U)) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_6))
                                                       ? 
                                                      (1U 
                                                       & ((~ (IData)(
                                                                     (0xfU 
                                                                      == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))) 
                                                          ^ (IData)(
                                                                    (vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                                     >> 0x20U))))
                                                       : 0U)) 
                                                  | ((7U 
                                                      == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14))
                                                      ? vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout
                                                      : 0U)) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_16))
                                                     ? vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout
                                                     : 0U)) 
                                                | ((3U 
                                                    == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18))
                                                    ? vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout
                                                    : 0U));
    vlSelf->TOP__DOT__EX__DOT__brTaken = ((((IData)(
                                                    ((0U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3))) 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != vlSelf->TOP__DOT__EX__DOT__Alu_io_Result))) 
                                                        ^ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3)))) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3) 
                                                     >> 1U))) 
                                                | (3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3) 
                                                       >> 1U)))) 
                                               & (vlSelf->TOP__DOT__EX__DOT__Alu_io_Result 
                                                  ^ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3)))) 
                                           | (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_jump)) 
                                          & ((0U != (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc)) 
                                             & (IData)(vlSelf->TOP__DOT__EXoutValid)));
    vlSelf->TOP__DOT__EX_io_brTaken = ((IData)(vlSelf->TOP__DOT__EX__DOT__brTaken) 
                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__brEnable));
    vlSelf->TOP__DOT__IDoutValid = ((~ (IData)(vlSelf->TOP__DOT__EX_io_brTaken)) 
                                    & (IData)(vlSelf->TOP__DOT__IF2IDValid));
    vlSelf->TOP__DOT__IFoutValid = ((IData)(vlSelf->TOP__DOT__IF_io_IF2ID_valid) 
                                    & ((~ (IData)(vlSelf->TOP__DOT__EX_io_brTaken)) 
                                       & (IData)(vlSelf->TOP__DOT__Pre2IFValid)));
    vlSelf->TOP__DOT__IF_io_brTaken = ((IData)(vlSelf->TOP__DOT__EX_io_brTaken) 
                                       | (IData)(vlSelf->TOP__DOT__MEM_io_flush));
    vlSelf->TOP__DOT__IF__DOT__brFail_io_cond = ((IData)(vlSelf->TOP__DOT__arAssert) 
                                                 & (IData)(vlSelf->TOP__DOT__IF_io_brTaken));
    vlSelf->TOP__DOT__IF__DOT__brEnable = ((~ (IData)(vlSelf->TOP__DOT__arAssert)) 
                                           & (IData)(vlSelf->TOP__DOT__IF_io_brTaken));
    vlSelf->TOP__DOT__IF__DOT__brFail_io_out = ((IData)(vlSelf->TOP__DOT__IF__DOT__brFail_io_cond) 
                                                | (IData)(vlSelf->TOP__DOT__IF__DOT__brFail__DOT__record));
    vlSelf->TOP__DOT__IF__DOT___brBufferValid_T_2 = 
        (((IData)(vlSelf->TOP__DOT__IF_io_brTaken) 
          & (IData)(vlSelf->TOP__DOT__IF__DOT__brEnable)) 
         | (IData)(vlSelf->TOP__DOT__IF__DOT__brBufferValid));
    vlSelf->TOP__DOT__IF_io_pcNext = ((IData)(vlSelf->TOP__DOT__IF__DOT__brBufferValid)
                                       ? vlSelf->TOP__DOT__IF__DOT__brBuffer
                                       : ((IData)(vlSelf->TOP__DOT__IF__DOT__brEnable)
                                           ? vlSelf->TOP__DOT__IF_io_pcBr
                                           : ((IData)(4U) 
                                              + vlSelf->TOP__DOT__IF__DOT__pcReg)));
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
        = ((IData)(vlSelf->TOP__DOT__MEM_io_ar_valid)
            ? (0xfffffffcU & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)
            : vlSelf->TOP__DOT__IF_io_pcNext);
    vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h19dcd5d3__0 
        = ((2U & ((~ (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                      >> 0x1eU)) << 1U)) | (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                            >> 0x1fU));
    vlSelf->TOP__DOT__xbar__DOT___arSel_T = ((0x10U 
                                              & ((~ 
                                                  (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                   >> 0x1bU)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((~ 
                                                     (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                      >> 0x1cU)) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                         >> 0x1dU)) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h19dcd5d3__0))));
    vlSelf->TOP__DOT__xbar__DOT__arSel_lo_1 = ((0x1000U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                     >> 0x13U)) 
                                                   << 0xcU)) 
                                               | ((0x800U 
                                                   & ((~ 
                                                       (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                        >> 0x14U)) 
                                                      << 0xbU)) 
                                                  | ((0x400U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                           >> 0x15U)) 
                                                         << 0xaU)) 
                                                     | ((0x200U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                              >> 0x16U)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ 
                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                 >> 0x17U)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ 
                                                                   (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                    >> 0x18U)) 
                                                                  << 7U)) 
                                                              | ((0x40U 
                                                                  & ((~ 
                                                                      (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                       >> 0x19U)) 
                                                                     << 6U)) 
                                                                 | ((0x20U 
                                                                     & ((~ 
                                                                         (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                          >> 0x1aU)) 
                                                                        << 5U)) 
                                                                    | ((0x10U 
                                                                        & ((~ 
                                                                            (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                             >> 0x1bU)) 
                                                                           << 4U)) 
                                                                       | ((8U 
                                                                           & ((~ 
                                                                               (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0x1cU)) 
                                                                              << 3U)) 
                                                                          | ((4U 
                                                                              & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0x1bU)) 
                                                                             | (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_h19dcd5d3__0))))))))))));
    vlSelf->TOP__DOT__xbar_io_slave_0_ar_valid = ((0x1fU 
                                                   == (IData)(vlSelf->TOP__DOT__xbar__DOT___arSel_T)) 
                                                  & (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_hff5c6ba8__0));
    vlSelf->TOP__DOT__xbar__DOT___arSel_T_2 = ((0x4000000U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                     >> 5U)) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                      << 0x13U)) 
                                                  | ((0x1000000U 
                                                      & ((~ 
                                                          (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                           >> 7U)) 
                                                         << 0x18U)) 
                                                     | ((0x800000U 
                                                         & ((~ 
                                                             (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                              >> 8U)) 
                                                            << 0x17U)) 
                                                        | ((0x400000U 
                                                            & ((~ 
                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                 >> 9U)) 
                                                               << 0x16U)) 
                                                           | ((0x200000U 
                                                               & ((~ 
                                                                   (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                    >> 0xaU)) 
                                                                  << 0x15U)) 
                                                              | ((0x100000U 
                                                                  & ((~ 
                                                                      (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                       >> 0xbU)) 
                                                                     << 0x14U)) 
                                                                 | ((0x80000U 
                                                                     & ((~ 
                                                                         (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                          >> 0xcU)) 
                                                                        << 0x13U)) 
                                                                    | ((0x40000U 
                                                                        & ((~ 
                                                                            (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                             >> 0xdU)) 
                                                                           << 0x12U)) 
                                                                       | ((0x20000U 
                                                                           & ((~ 
                                                                               (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0xeU)) 
                                                                              << 0x11U)) 
                                                                          | ((0x10000U 
                                                                              & ((~ 
                                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                             | ((0x8000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | (IData)(vlSelf->TOP__DOT__xbar__DOT__arSel_lo_1)))))))))))))));
    vlSelf->TOP__DOT__xbar__DOT___arSel_T_4 = ((0x20000000U 
                                                & ((~ 
                                                    (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                     >> 2U)) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                      << 0x19U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                         << 0x17U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                            << 0x15U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                               << 0x13U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                  << 0x11U)) 
                                                              | ((0x800000U 
                                                                  & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                     << 0xfU)) 
                                                                 | ((0x400000U 
                                                                     & (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                        << 0xdU)) 
                                                                    | (((0x200000U 
                                                                         & ((~ 
                                                                             (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                              >> 0xaU)) 
                                                                            << 0x15U)) 
                                                                        | ((0x100000U 
                                                                            & ((~ 
                                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0xbU)) 
                                                                               << 0x14U)) 
                                                                           | ((0x80000U 
                                                                               & ((~ 
                                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                              | ((0x40000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | (0x8000U 
                                                                                & ((~ 
                                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)))))))) 
                                                                       | ((0x4000U 
                                                                           & ((~ 
                                                                               (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0x11U)) 
                                                                              << 0xeU)) 
                                                                          | ((0x2000U 
                                                                              & ((~ 
                                                                                (vlSelf->TOP__DOT__ramWrapper__DOT__arFifo_io_enq_bits_addr 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                             | (IData)(vlSelf->TOP__DOT__xbar__DOT__arSel_lo_1))))))))))));
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T 
        = ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__xbar_io_slave_0_ar_valid) 
              & (0U == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arCount))));
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T 
        = ((~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFull)) 
           & ((0x7ffffffU == vlSelf->TOP__DOT__xbar__DOT___arSel_T_2) 
              & (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_hff5c6ba8__0)));
    vlSelf->TOP__DOT__xbar__DOT__arFifo_io_enq_bits_slaveNum 
        = (((IData)((0x7ffffffU == vlSelf->TOP__DOT__xbar__DOT___arSel_T_2)) 
            << 2U) | (((IData)((0x3fffffffU == vlSelf->TOP__DOT__xbar__DOT___arSel_T_4)) 
                       << 1U) | (0x1fU == (IData)(vlSelf->TOP__DOT__xbar__DOT___arSel_T))));
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T 
        = ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFull)) 
           & ((0x3fffffffU == vlSelf->TOP__DOT__xbar__DOT___arSel_T_4) 
              & (IData)(vlSelf->TOP__DOT__xbar__DOT____VdfgTmp_hff5c6ba8__0)));
    vlSelf->TOP__DOT__MEM_io_ar_ready = (((0x1fU == (IData)(vlSelf->TOP__DOT__xbar__DOT___arSel_T)) 
                                          & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull)) 
                                             & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull)) 
                                                & (0U 
                                                   == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arCount))))) 
                                         | (((0x3fffffffU 
                                              == vlSelf->TOP__DOT__xbar__DOT___arSel_T_4) 
                                             & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull)) 
                                                & (~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFull)))) 
                                            | ((0x7ffffffU 
                                                == vlSelf->TOP__DOT__xbar__DOT___arSel_T_2) 
                                               & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull)) 
                                                  & (~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFull))))));
    vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFullNext 
        = (((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T) 
            & ((~ (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T_1)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__enqPtr))) 
                  == (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__deqPtr)))) 
           | ((~ ((IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT___isFullNext_T_1) 
                  & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull))) 
              & (IData)(vlSelf->TOP__DOT__ramWrapper__DOT__arFifo__DOT__isFull)));
    vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFullNext 
        = (((IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T) 
            & ((~ (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T_1)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__enqPtr))) 
                  == (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__deqPtr)))) 
           | ((~ ((IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT___isFullNext_T_1) 
                  & (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFull))) 
              & (IData)(vlSelf->TOP__DOT__clint__DOT__arFifo__DOT__isFull)));
    vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFullNext 
        = (((IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T) 
            & ((~ (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T_1)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__enqPtr))) 
                  == (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__deqPtr)))) 
           | ((~ ((IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT___isFullNext_T_1) 
                  & (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFull))) 
              & (IData)(vlSelf->TOP__DOT__uart__DOT__arFifo__DOT__isFull)));
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T 
        = ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull)) 
           & ((IData)(vlSelf->TOP__DOT__MEM_io_ar_ready) 
              & (IData)(vlSelf->TOP__DOT__arbiter_io_AxiLite_ar_valid)));
    vlSelf->TOP__DOT___arFireReg_T_1 = (((~ (IData)(vlSelf->TOP__DOT__MEM_io_ar_valid)) 
                                         & (IData)(vlSelf->TOP__DOT__MEM_io_ar_ready)) 
                                        & (IData)(vlSelf->TOP__DOT__arbiter_io_InstAxiLite_ar_valid));
    vlSelf->TOP__DOT__MEM__DOT___arDataFire_T = ((IData)(vlSelf->TOP__DOT__MEM_io_ar_ready) 
                                                 & (IData)(vlSelf->TOP__DOT__MEM_io_ar_valid));
    vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFullNext 
        = (((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T) 
            & ((~ (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T_1)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__enqPtr))) 
                  == (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__deqPtr)))) 
           | ((~ ((IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT___isFullNext_T_1) 
                  & (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull))) 
              & (IData)(vlSelf->TOP__DOT__xbar__DOT__arFifo__DOT__isFull)));
    vlSelf->TOP__DOT__IF_io_Pre2IF_valid = ((~ (IData)(vlSelf->TOP__DOT__MEM_io_flush)) 
                                            & ((IData)(vlSelf->TOP__DOT___arFireReg_T_1) 
                                               | (IData)(vlSelf->TOP__DOT__arFireReg)));
    vlSelf->TOP__DOT__MEM_io_MEM2WB_valid = (1U & ((IData)(vlSelf->TOP__DOT__MEM__DOT___io_ar_valid_T)
                                                    ? 
                                                   ((IData)(vlSelf->TOP__DOT__MEM__DOT__arDataFireReg) 
                                                    | (IData)(vlSelf->TOP__DOT__MEM__DOT___arDataFire_T))
                                                    : 
                                                   ((~ (IData)(vlSelf->TOP__DOT__MEM__DOT___io_aw_valid_T)) 
                                                    | (((IData)(vlSelf->TOP__DOT__MEM__DOT__awFireReg) 
                                                        | (IData)(vlSelf->TOP__DOT__MEM__DOT___awFire_T)) 
                                                       & ((IData)(vlSelf->TOP__DOT__MEM__DOT__wFireReg) 
                                                          | (IData)(vlSelf->TOP__DOT__MEM__DOT___wFire_T))))));
    vlSelf->TOP__DOT___MEM2WBValid_T_3 = ((~ (IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_valid)) 
                                          & (IData)(vlSelf->TOP__DOT__EX_io_WBoutValid));
    vlSelf->TOP__DOT___EX2MEMValid_T_2 = ((IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_valid) 
                                          & (IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_ready));
    vlSelf->TOP__DOT__MEMoutValid = ((IData)(vlSelf->TOP__DOT__EX2MEMValid) 
                                     & (IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_valid));
    vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T = 
        ((IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_ready) 
         & (IData)(vlSelf->TOP__DOT__MEM_io_MEM2WB_valid));
    vlSelf->TOP__DOT___WB_io_MEM2WB_bits_T_1 = ((IData)(vlSelf->TOP__DOT___EX2MEMValid_T_2) 
                                                & (IData)(vlSelf->TOP__DOT__MEMoutValid));
    vlSelf->TOP__DOT__EX__DOT___bypassReg_T = (1U & 
                                               ((~ (IData)(vlSelf->TOP__DOT__EX_io_stall)) 
                                                & ((~ (IData)(vlSelf->TOP__DOT__EX2MEMValid)) 
                                                   | (IData)(vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T))));
    vlSelf->TOP__DOT___MEM_io_EX2MEM_bits_T_1 = ((IData)(vlSelf->TOP__DOT__EX__DOT___bypassReg_T) 
                                                 & (IData)(vlSelf->TOP__DOT__EXoutValid));
    vlSelf->TOP__DOT__ID_io_ID2EX_ready = (1U & ((~ (IData)(vlSelf->TOP__DOT__ID2EXValid)) 
                                                 | (IData)(vlSelf->TOP__DOT__EX__DOT___bypassReg_T)));
    vlSelf->TOP__DOT___EX_io_ID2EX_bits_T_1 = ((IData)(vlSelf->TOP__DOT__ID_io_ID2EX_ready) 
                                               & (IData)(vlSelf->TOP__DOT__IDoutValid));
    vlSelf->TOP__DOT___IF2IDValid_T_7 = ((~ ((~ (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_ready)) 
                                             & (IData)(vlSelf->TOP__DOT__EX_io_brTaken))) 
                                         & (IData)(vlSelf->TOP__DOT__IF2IDValid));
    vlSelf->TOP__DOT__IF_io_IF2ID_ready = (1U & ((~ (IData)(vlSelf->TOP__DOT__IF2IDValid)) 
                                                 | (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_ready)));
    vlSelf->TOP__DOT__IF__DOT___rFireReg_T = ((IData)(vlSelf->TOP__DOT__IF_io_IF2ID_ready) 
                                              & (IData)(vlSelf->TOP__DOT__IF_io_IF2ID_valid));
    vlSelf->TOP__DOT___Pre2IFValid_T_4 = ((~ (IData)(vlSelf->TOP__DOT__IF_io_Pre2IF_valid)) 
                                          & (IData)(vlSelf->TOP__DOT__IF__DOT___rFireReg_T));
    vlSelf->TOP__DOT___ID_io_IF2ID_bits_T_1 = ((IData)(vlSelf->TOP__DOT__IF__DOT___rFireReg_T) 
                                               & (IData)(vlSelf->TOP__DOT__IFoutValid));
    vlSelf->TOP__DOT___Pre2IFValid_T_8 = ((~ ((~ (IData)(vlSelf->TOP__DOT__IF__DOT___rFireReg_T)) 
                                              & (IData)(vlSelf->TOP__DOT__EX_io_brTaken))) 
                                          & (IData)(vlSelf->TOP__DOT__Pre2IFValid));
    vlSelf->TOP__DOT__IF__DOT__brFail_io_reset = ((
                                                   (~ 
                                                    ((IData)(vlSelf->TOP__DOT__Pre2IFValid) 
                                                     | (IData)(vlSelf->TOP__DOT__arInstValid))) 
                                                   | (IData)(vlSelf->TOP__DOT__IF__DOT___rFireReg_T)) 
                                                  & (IData)(vlSelf->TOP__DOT__IF_io_Pre2IF_valid));
}
