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

VL_INLINE_OPT void VSimpleCpu___024root___ico_sequent__TOP__1(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->SimpleCpu__DOT__Alu_io_Result = (((((((
                                                   (((0xfU 
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
    vlSelf->SimpleCpu__DOT__RF_io_wdata = ((IData)(vlSelf->Memory_MemRead)
                                            ? vlSelf->Memory_MemReadData
                                            : vlSelf->SimpleCpu__DOT__Alu_io_Result);
    vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_orMatrixOutputs_T_5 
        = ((2U & (vlSelf->Fetch_Inst >> 0xcU)) | (1U 
                                                  & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                     >> 1U)));
    vlSelf->Memory_MemAddr = (3U & vlSelf->SimpleCpu__DOT__Alu_io_Result);
    vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput 
        = (((IData)(vlSelf->Memory_MemAddr) << 2U) 
           | (3U & (vlSelf->Fetch_Inst >> 0xcU)));
    vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_T_6 
        = ((2U & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                  << 1U)) | (1U & (~ ((IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput) 
                                      >> 3U))));
    vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_orMatrixOutputs_T_3 
        = ((4U & (vlSelf->Fetch_Inst >> 0xbU)) | (((IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_T_6))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput) 
                                                          >> 2U)) 
                                                        & (vlSelf->SimpleCpu__DOT__Alu_io_Result 
                                                           >> 1U)))));
    vlSelf->Memory_MemWriteStrb = (((IData)((0U != (IData)(vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_orMatrixOutputs_T_5))) 
                                    << 3U) | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_orMatrixOutputs_T_3))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSelf->Fetch_Inst)) 
                                                              | (3U 
                                                                 == (IData)(vlSelf->SimpleCpu__DOT___Memory_MemWriteStrb_T_6)))) 
                                                     << 1U)) 
                                                 | (IData)(
                                                           (0U 
                                                            == 
                                                            (0xcU 
                                                             & (IData)(vlSelf->SimpleCpu__DOT__Memory_MemWriteStrb_plaInput)))))));
}

void VSimpleCpu___024root___ico_sequent__TOP__0(VSimpleCpu___024root* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__0(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__1(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__1(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__1(VSimpleCpu_SelectorBundle* vlSelf);
void VSimpleCpu_SelectorBundle___ico_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__1(VSimpleCpu_SelectorBundle* vlSelf);

void VSimpleCpu___024root___eval_ico(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VSimpleCpu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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

void VSimpleCpu___024root___nba_sequent__TOP__0(VSimpleCpu___024root* vlSelf);

void VSimpleCpu___024root___eval_nba(VSimpleCpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimpleCpu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSimpleCpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
