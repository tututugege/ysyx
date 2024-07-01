// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMultiplier__Syms.h"


VL_ATTR_COLD void VMultiplier___024root__trace_full_0_sub_1(VMultiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root__trace_full_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1733,(((0x10U & ((IData)(vlSelf->Multiplier__DOT__c53_93__DOT___c32_1_io_out) 
                                          << 3U)) | 
                                ((8U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_111 
                                                 >> 0x1bU)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((IData)(
                                                               (vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                                >> 0x1dU)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((IData)(
                                                                  (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                                   >> 0x1fU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->io_signed)
                                                              ? (IData)(
                                                                        (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                                         >> 0x20U))
                                                              : 
                                                             ((vlSelf->io_y 
                                                               >> 9U) 
                                                              & ((vlSelf->io_y 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (vlSelf->io_y 
                                                                  >> 8U))))))))))),5);
    bufp->fullCData(oldp+1734,(((4U & ((IData)((vlSelf->Multiplier__DOT___ppTemp_T_97 
                                                >> 0x1dU)) 
                                       << 2U)) | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->Multiplier__DOT___ppTemp_T_83 
                                                               >> 0x1fU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->io_signed)
                                                          ? (IData)(
                                                                    (vlSelf->Multiplier__DOT___ppTemp_T_69 
                                                                     >> 0x20U))
                                                          : 
                                                         ((vlSelf->io_y 
                                                           >> 9U) 
                                                          & ((vlSelf->io_y 
                                                              >> 7U) 
                                                             ^ 
                                                             (vlSelf->io_y 
                                                              >> 8U))))))))),3);
}
