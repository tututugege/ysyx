// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu_SelectorBundle.h"
#include "VSimpleCpu__Syms.h"

VL_ATTR_COLD void VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__0(VSimpleCpu_SelectorBundle* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__0\n"); );
    // Body
    vlSelf->__PVT__sel_10__DOT__ShiftR = (1U & ((~ (IData)(
                                                           (7U 
                                                            == (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT___Operation_T_14)))) 
                                                & vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B));
    vlSelf->__PVT__sel_10__DOT__ShiftL = ((7U == (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT___Operation_T_14)) 
                                          & vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B);
    vlSelf->__PVT__io_dout_lo_lo = (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                       & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1)) 
                                      | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1)) 
                                         | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                            & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1)))) 
                                     << 7U) | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                  & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1)) 
                                                 | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1)) 
                                                    | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                       & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1)))) 
                                                << 6U) 
                                               | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                     & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1)) 
                                                    | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1)) 
                                                       | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                          & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1)))) 
                                                   << 5U) 
                                                  | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                        & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1)) 
                                                       | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                           & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1)) 
                                                          | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                             & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1)))) 
                                                      << 4U) 
                                                     | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                           & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1)) 
                                                          | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                              & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1)) 
                                                             | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1)))) 
                                                         << 3U) 
                                                        | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                              & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1)) 
                                                             | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                 & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1)) 
                                                                | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                   & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1)))) 
                                                            << 2U) 
                                                           | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                                 & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1)) 
                                                                | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                    & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1)) 
                                                                   | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                      & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0)))) 
                                                               << 1U) 
                                                              | (((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                                  & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0)) 
                                                                 | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                    & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1))))))))));
    vlSelf->__PVT__io_dout_hi_lo = (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                       & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1)) 
                                      | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                          & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1)) 
                                         | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                            & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1)))) 
                                     << 7U) | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                  & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1)) 
                                                 | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1)) 
                                                    | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                       & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1)))) 
                                                << 6U) 
                                               | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                     & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1)) 
                                                    | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1)) 
                                                       | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                          & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1)))) 
                                                   << 5U) 
                                                  | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                        & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1)) 
                                                       | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                           & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1)) 
                                                          | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                             & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1)))) 
                                                      << 4U) 
                                                     | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                           & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1)) 
                                                          | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                              & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1)) 
                                                             | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1)))) 
                                                         << 3U) 
                                                        | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                              & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1)) 
                                                             | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                 & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1)) 
                                                                | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                   & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1)))) 
                                                            << 2U) 
                                                           | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                                 & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1)) 
                                                                | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                    & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1)) 
                                                                   | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                      & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1)))) 
                                                               << 1U) 
                                                              | (((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                                  & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1)) 
                                                                 | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                     & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1)) 
                                                                    | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                       & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1)))))))))));
    vlSelf->__PVT__io_dout_lo = (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                    & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1)) 
                                   | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                       & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1)) 
                                      | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                         & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1)))) 
                                  << 0xfU) | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                 & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1)) 
                                                | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                    & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1)) 
                                                   | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                      & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1)))) 
                                               << 0xeU) 
                                              | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                    & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1)) 
                                                   | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                       & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1)) 
                                                      | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                         & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1)))) 
                                                  << 0xdU) 
                                                 | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                       & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1)) 
                                                      | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                          & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1)) 
                                                         | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                            & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1)))) 
                                                     << 0xcU) 
                                                    | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                          & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1)) 
                                                         | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                             & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1)) 
                                                            | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                               & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1)))) 
                                                        << 0xbU) 
                                                       | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                             & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1)) 
                                                            | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1)) 
                                                               | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                  & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1)))) 
                                                           << 0xaU) 
                                                          | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                                & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1)) 
                                                               | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                   & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1)) 
                                                                  | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                     & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1)))) 
                                                              << 9U) 
                                                             | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                                   & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1)) 
                                                                  | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                      & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1)) 
                                                                     | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                        & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1)))) 
                                                                 << 8U) 
                                                                | (IData)(vlSelf->__PVT__io_dout_lo_lo)))))))));
    vlSelf->__PVT__io_dout_hi = (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                    & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)) 
                                   | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                       & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                      | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                         & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1)))) 
                                  << 0xfU) | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                 & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1)) 
                                                | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                    & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1)) 
                                                   | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                      & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1)))) 
                                               << 0xeU) 
                                              | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                    & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1)) 
                                                   | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                       & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1)) 
                                                      | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                         & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1)))) 
                                                  << 0xdU) 
                                                 | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                       & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1)) 
                                                      | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                          & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1)) 
                                                         | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                            & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1)))) 
                                                     << 0xcU) 
                                                    | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                          & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1)) 
                                                         | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                             & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1)) 
                                                            | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                               & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1)))) 
                                                        << 0xbU) 
                                                       | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                             & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1)) 
                                                            | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1)) 
                                                               | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                  & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1)))) 
                                                           << 0xaU) 
                                                          | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                                & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1)) 
                                                               | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                   & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1)) 
                                                                  | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                     & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1)))) 
                                                              << 9U) 
                                                             | (((((~ vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B) 
                                                                   & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1)) 
                                                                  | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                      & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1)) 
                                                                     | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                        & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1)))) 
                                                                 << 8U) 
                                                                | (IData)(vlSelf->__PVT__io_dout_hi_lo)))))))));
    vlSelf->io_dout = (((IData)(vlSelf->__PVT__io_dout_hi) 
                        << 0x10U) | (IData)(vlSelf->__PVT__io_dout_lo));
}

VL_ATTR_COLD void VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__0(VSimpleCpu_SelectorBundle* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__0\n"); );
    // Body
    vlSelf->__PVT__sel_10__DOT__ShiftR = (1U & ((~ (IData)(
                                                           (7U 
                                                            == (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT___Operation_T_14)))) 
                                                & (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 1U)));
    vlSelf->__PVT__sel_10__DOT__ShiftL = ((7U == (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT___Operation_T_14)) 
                                          & (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                             >> 1U));
}

VL_ATTR_COLD void VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__1(VSimpleCpu_SelectorBundle* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__1\n"); );
    // Body
    vlSelf->__PVT__io_dout_lo_lo = ((0x80U & ((0xffffff80U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 1U)) 
                                                   << 7U) 
                                                  & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                              | ((0x3fffff80U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      << 7U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                        >> 2U))) 
                                                 | (0xffffff80U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 7U) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                          << 2U)))))) 
                                    | ((0x40U & ((0xffffffc0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 1U)) 
                                                      << 6U) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                                 | ((0x3fffffc0U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 6U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                           >> 2U))) 
                                                    | (0xffffffc0U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 6U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                             << 2U)))))) 
                                       | ((0x20U & 
                                           ((0xffffffe0U 
                                             & (((~ 
                                                  (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 1U)) 
                                                 << 5U) 
                                                & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                            | ((0x3fffffe0U 
                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                    << 5U) 
                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                      >> 2U))) 
                                               | (0xffffffe0U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                      << 5U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                        << 2U)))))) 
                                          | ((0x10U 
                                              & ((0xfffffff0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 1U)) 
                                                      << 4U) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                                 | ((0x3ffffff0U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 4U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                           >> 2U))) 
                                                    | (0xfffffff0U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 4U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                             << 2U)))))) 
                                             | ((8U 
                                                 & ((0xfffffff8U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 1U)) 
                                                         << 3U) 
                                                        & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                                    | ((0x3ffffff8U 
                                                        & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            << 3U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                              >> 2U))) 
                                                       | (0xfffffff8U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 3U) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                << 2U)))))) 
                                                | ((4U 
                                                    & ((0xfffffffcU 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 1U)) 
                                                            << 2U) 
                                                           & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                                       | ((0x3ffffffcU 
                                                           & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               << 2U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                 >> 2U))) 
                                                          | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & ((0xfffffffeU 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 1U)) 
                                                               << 1U) 
                                                              & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                                          | (0x3ffffffeU 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                 << 1U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                   >> 2U))))) 
                                                      | (1U 
                                                         & (((~ 
                                                              (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                               >> 1U)) 
                                                             & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout) 
                                                            | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                  >> 2U)))))))))));
    vlSelf->__PVT__io_dout_hi_lo = ((0x80U & ((0xff80U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 1U)) 
                                                   << 7U) 
                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                     >> 0x10U))) 
                                              | ((0x3f80U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      << 7U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                        >> 0x12U))) 
                                                 | (0x3ff80U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 7U) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                          >> 0xeU)))))) 
                                    | ((0x40U & ((0xffc0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 1U)) 
                                                      << 6U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                        >> 0x10U))) 
                                                 | ((0x3fc0U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 6U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                           >> 0x12U))) 
                                                    | (0x3ffc0U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 6U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                             >> 0xeU)))))) 
                                       | ((0x20U & 
                                           ((0xffe0U 
                                             & (((~ 
                                                  (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 1U)) 
                                                 << 5U) 
                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                   >> 0x10U))) 
                                            | ((0x3fe0U 
                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                    << 5U) 
                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                      >> 0x12U))) 
                                               | (0x3ffe0U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                      << 5U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                        >> 0xeU)))))) 
                                          | ((0x10U 
                                              & ((0xfff0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 1U)) 
                                                      << 4U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                        >> 0x10U))) 
                                                 | ((0x3ff0U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 4U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                           >> 0x12U))) 
                                                    | (0x3fff0U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 4U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                             >> 0xeU)))))) 
                                             | ((8U 
                                                 & ((0xfff8U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 1U)) 
                                                         << 3U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                           >> 0x10U))) 
                                                    | ((0x3ff8U 
                                                        & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            << 3U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                              >> 0x12U))) 
                                                       | (0x3fff8U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 3U) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                >> 0xeU)))))) 
                                                | ((4U 
                                                    & ((0xfffcU 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 1U)) 
                                                            << 2U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                              >> 0x10U))) 
                                                       | ((0x3ffcU 
                                                           & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               << 2U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                 >> 0x12U))) 
                                                          | (0x3fffcU 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 << 2U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                   >> 0xeU)))))) 
                                                   | ((2U 
                                                       & ((0xfffeU 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 1U)) 
                                                               << 1U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                 >> 0x10U))) 
                                                          | ((0x3ffeU 
                                                              & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                  << 1U) 
                                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                    >> 0x12U))) 
                                                             | (0x3fffeU 
                                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                    << 1U) 
                                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                      >> 0xeU)))))) 
                                                      | (1U 
                                                         & (((~ 
                                                              (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                               >> 1U)) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                >> 0x10U)) 
                                                            | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                   >> 0x12U)) 
                                                               | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                     >> 0xeU))))))))))));
    vlSelf->__PVT__io_dout_lo = ((0x8000U & ((0xffff8000U 
                                              & (((~ 
                                                   (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                    >> 1U)) 
                                                  << 0xfU) 
                                                 & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                             | ((0x3fff8000U 
                                                 & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     << 0xfU) 
                                                    & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                       >> 2U))) 
                                                | (0xffff8000U 
                                                   & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                       << 0xfU) 
                                                      & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                         << 2U)))))) 
                                 | ((0x4000U & ((0xffffc000U 
                                                 & (((~ 
                                                      (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                       >> 1U)) 
                                                     << 0xeU) 
                                                    & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                                | ((0x3fffc000U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        << 0xeU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                          >> 2U))) 
                                                   | (0xffffc000U 
                                                      & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                          << 0xeU) 
                                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                            << 2U)))))) 
                                    | ((0x2000U & (
                                                   (0xffffe000U 
                                                    & (((~ 
                                                         (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                          >> 1U)) 
                                                        << 0xdU) 
                                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                                   | ((0x3fffe000U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                           << 0xdU) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                             >> 2U))) 
                                                      | (0xffffe000U 
                                                         & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                             << 0xdU) 
                                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                               << 2U)))))) 
                                       | ((0x1000U 
                                           & ((0xfffff000U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 1U)) 
                                                   << 0xcU) 
                                                  & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                              | ((0x3ffff000U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                        >> 2U))) 
                                                 | (0xfffff000U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                          << 2U)))))) 
                                          | ((0x800U 
                                              & ((0xfffff800U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 1U)) 
                                                      << 0xbU) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                                 | ((0x3ffff800U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 0xbU) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                           >> 2U))) 
                                                    | (0xfffff800U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 0xbU) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                             << 2U)))))) 
                                             | ((0x400U 
                                                 & ((0xfffffc00U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 1U)) 
                                                         << 0xaU) 
                                                        & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                                    | ((0x3ffffc00U 
                                                        & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            << 0xaU) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                              >> 2U))) 
                                                       | (0xfffffc00U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 0xaU) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                << 2U)))))) 
                                                | ((0x200U 
                                                    & ((0xfffffe00U 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 1U)) 
                                                            << 9U) 
                                                           & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                                       | ((0x3ffffe00U 
                                                           & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               << 9U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                 >> 2U))) 
                                                          | (0xfffffe00U 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 << 9U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                   << 2U)))))) 
                                                   | ((0x100U 
                                                       & ((0xffffff00U 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 1U)) 
                                                               << 8U) 
                                                              & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout)) 
                                                          | ((0x3fffff00U 
                                                              & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                  << 8U) 
                                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                    >> 2U))) 
                                                             | (0xffffff00U 
                                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                    << 8U) 
                                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                      << 2U)))))) 
                                                      | (IData)(vlSelf->__PVT__io_dout_lo_lo)))))))));
    vlSelf->__PVT__io_dout_hi = ((0x8000U & ((0x8000U 
                                              & (((~ 
                                                   (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                    >> 1U)) 
                                                  << 0xfU) 
                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                    >> 0x10U))) 
                                             | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                  & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                 << 0xfU) 
                                                | (0x38000U 
                                                   & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                       << 0xfU) 
                                                      & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                         >> 0xeU)))))) 
                                 | ((0x4000U & ((0xc000U 
                                                 & (((~ 
                                                      (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                       >> 1U)) 
                                                     << 0xeU) 
                                                    & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                       >> 0x10U))) 
                                                | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                    << 0xeU) 
                                                   | (0x3c000U 
                                                      & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                          << 0xeU) 
                                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                            >> 0xeU)))))) 
                                    | ((0x2000U & (
                                                   (0xe000U 
                                                    & (((~ 
                                                         (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                          >> 1U)) 
                                                        << 0xdU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                          >> 0x10U))) 
                                                   | ((0x2000U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                           << 0xdU) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                             >> 0x12U))) 
                                                      | (0x3e000U 
                                                         & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                             << 0xdU) 
                                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                               >> 0xeU)))))) 
                                       | ((0x1000U 
                                           & ((0xf000U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 1U)) 
                                                   << 0xcU) 
                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                     >> 0x10U))) 
                                              | ((0x3000U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                        >> 0x12U))) 
                                                 | (0x3f000U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                          >> 0xeU)))))) 
                                          | ((0x800U 
                                              & ((0xf800U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 1U)) 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                        >> 0x10U))) 
                                                 | ((0x3800U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 0xbU) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                           >> 0x12U))) 
                                                    | (0x3f800U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 0xbU) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                             >> 0xeU)))))) 
                                             | ((0x400U 
                                                 & ((0xfc00U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 1U)) 
                                                         << 0xaU) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                           >> 0x10U))) 
                                                    | ((0x3c00U 
                                                        & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            << 0xaU) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                              >> 0x12U))) 
                                                       | (0x3fc00U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 0xaU) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                >> 0xeU)))))) 
                                                | ((0x200U 
                                                    & ((0xfe00U 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 1U)) 
                                                            << 9U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                              >> 0x10U))) 
                                                       | ((0x3e00U 
                                                           & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               << 9U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                 >> 0x12U))) 
                                                          | (0x3fe00U 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 << 9U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                   >> 0xeU)))))) 
                                                   | ((0x100U 
                                                       & ((0xff00U 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 1U)) 
                                                               << 8U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                 >> 0x10U))) 
                                                          | ((0x3f00U 
                                                              & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                  << 8U) 
                                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                    >> 0x12U))) 
                                                             | (0x3ff00U 
                                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                    << 8U) 
                                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.io_dout 
                                                                      >> 0xeU)))))) 
                                                      | (IData)(vlSelf->__PVT__io_dout_hi_lo)))))))));
    vlSelf->io_dout = (((IData)(vlSelf->__PVT__io_dout_hi) 
                        << 0x10U) | (IData)(vlSelf->__PVT__io_dout_lo));
}

VL_ATTR_COLD void VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__0(VSimpleCpu_SelectorBundle* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__0\n"); );
    // Body
    vlSelf->__PVT__sel_10__DOT__ShiftR = (1U & ((~ (IData)(
                                                           (7U 
                                                            == (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT___Operation_T_14)))) 
                                                & (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 2U)));
    vlSelf->__PVT__sel_10__DOT__ShiftL = ((7U == (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT___Operation_T_14)) 
                                          & (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                             >> 2U));
}

VL_ATTR_COLD void VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__1(VSimpleCpu_SelectorBundle* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__1\n"); );
    // Body
    vlSelf->__PVT__io_dout_lo_lo = ((0x80U & ((0xffffff80U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 2U)) 
                                                   << 7U) 
                                                  & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                              | ((0xfffff80U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      << 7U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                        >> 4U))) 
                                                 | (0xffffff80U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 7U) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                          << 4U)))))) 
                                    | ((0x40U & ((0xffffffc0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 2U)) 
                                                      << 6U) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                                 | ((0xfffffc0U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 6U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                           >> 4U))) 
                                                    | (0xffffffc0U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 6U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                             << 4U)))))) 
                                       | ((0x20U & 
                                           ((0xffffffe0U 
                                             & (((~ 
                                                  (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 2U)) 
                                                 << 5U) 
                                                & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                            | ((0xfffffe0U 
                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                    << 5U) 
                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                      >> 4U))) 
                                               | (0xffffffe0U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                      << 5U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                        << 4U)))))) 
                                          | ((0x10U 
                                              & ((0xfffffff0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 2U)) 
                                                      << 4U) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                                 | ((0xffffff0U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 4U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                           >> 4U))) 
                                                    | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout) 
                                                       << 4U)))) 
                                             | ((8U 
                                                 & ((0xfffffff8U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 2U)) 
                                                         << 3U) 
                                                        & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                                    | (0xffffff8U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                           << 3U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                             >> 4U))))) 
                                                | ((4U 
                                                    & ((0xfffffffcU 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 2U)) 
                                                            << 2U) 
                                                           & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                                       | (0xffffffcU 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                              << 2U) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                >> 4U))))) 
                                                   | ((2U 
                                                       & ((0xfffffffeU 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 2U)) 
                                                               << 1U) 
                                                              & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                                          | (0xffffffeU 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                 << 1U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                   >> 4U))))) 
                                                      | (1U 
                                                         & (((~ 
                                                              (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                               >> 2U)) 
                                                             & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout) 
                                                            | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                  >> 4U)))))))))));
    vlSelf->__PVT__io_dout_hi_lo = ((0x80U & ((0xff80U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 2U)) 
                                                   << 7U) 
                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                     >> 0x10U))) 
                                              | ((0xf80U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      << 7U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                        >> 0x14U))) 
                                                 | (0xfff80U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 7U) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                          >> 0xcU)))))) 
                                    | ((0x40U & ((0xffc0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 2U)) 
                                                      << 6U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                        >> 0x10U))) 
                                                 | ((0xfc0U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 6U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                           >> 0x14U))) 
                                                    | (0xfffc0U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 6U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                             >> 0xcU)))))) 
                                       | ((0x20U & 
                                           ((0xffe0U 
                                             & (((~ 
                                                  (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 2U)) 
                                                 << 5U) 
                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                   >> 0x10U))) 
                                            | ((0xfe0U 
                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                    << 5U) 
                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                      >> 0x14U))) 
                                               | (0xfffe0U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                      << 5U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                        >> 0xcU)))))) 
                                          | ((0x10U 
                                              & ((0xfff0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 2U)) 
                                                      << 4U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                        >> 0x10U))) 
                                                 | ((0xff0U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 4U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                           >> 0x14U))) 
                                                    | (0xffff0U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 4U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                             >> 0xcU)))))) 
                                             | ((8U 
                                                 & ((0xfff8U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 2U)) 
                                                         << 3U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                           >> 0x10U))) 
                                                    | ((0xff8U 
                                                        & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            << 3U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                              >> 0x14U))) 
                                                       | (0xffff8U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 3U) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                >> 0xcU)))))) 
                                                | ((4U 
                                                    & ((0xfffcU 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 2U)) 
                                                            << 2U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                              >> 0x10U))) 
                                                       | ((0xffcU 
                                                           & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               << 2U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                 >> 0x14U))) 
                                                          | (0xffffcU 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 << 2U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                   >> 0xcU)))))) 
                                                   | ((2U 
                                                       & ((0xfffeU 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 2U)) 
                                                               << 1U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                 >> 0x10U))) 
                                                          | ((0xffeU 
                                                              & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                  << 1U) 
                                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                    >> 0x14U))) 
                                                             | (0xffffeU 
                                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                    << 1U) 
                                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                      >> 0xcU)))))) 
                                                      | (1U 
                                                         & (((~ 
                                                              (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                               >> 2U)) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                >> 0x10U)) 
                                                            | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                   >> 0x14U)) 
                                                               | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                     >> 0xcU))))))))))));
    vlSelf->__PVT__io_dout_lo = ((0x8000U & ((0xffff8000U 
                                              & (((~ 
                                                   (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                    >> 2U)) 
                                                  << 0xfU) 
                                                 & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                             | ((0xfff8000U 
                                                 & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     << 0xfU) 
                                                    & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                       >> 4U))) 
                                                | (0xffff8000U 
                                                   & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                       << 0xfU) 
                                                      & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                         << 4U)))))) 
                                 | ((0x4000U & ((0xffffc000U 
                                                 & (((~ 
                                                      (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                       >> 2U)) 
                                                     << 0xeU) 
                                                    & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                                | ((0xfffc000U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        << 0xeU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                          >> 4U))) 
                                                   | (0xffffc000U 
                                                      & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                          << 0xeU) 
                                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                            << 4U)))))) 
                                    | ((0x2000U & (
                                                   (0xffffe000U 
                                                    & (((~ 
                                                         (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                          >> 2U)) 
                                                        << 0xdU) 
                                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                                   | ((0xfffe000U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                           << 0xdU) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                             >> 4U))) 
                                                      | (0xffffe000U 
                                                         & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                             << 0xdU) 
                                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                               << 4U)))))) 
                                       | ((0x1000U 
                                           & ((0xfffff000U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 2U)) 
                                                   << 0xcU) 
                                                  & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                              | ((0xffff000U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                        >> 4U))) 
                                                 | (0xfffff000U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                          << 4U)))))) 
                                          | ((0x800U 
                                              & ((0xfffff800U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 2U)) 
                                                      << 0xbU) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                                 | ((0xffff800U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 0xbU) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                           >> 4U))) 
                                                    | (0xfffff800U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 0xbU) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                             << 4U)))))) 
                                             | ((0x400U 
                                                 & ((0xfffffc00U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 2U)) 
                                                         << 0xaU) 
                                                        & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                                    | ((0xffffc00U 
                                                        & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            << 0xaU) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                              >> 4U))) 
                                                       | (0xfffffc00U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 0xaU) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                << 4U)))))) 
                                                | ((0x200U 
                                                    & ((0xfffffe00U 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 2U)) 
                                                            << 9U) 
                                                           & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                                       | ((0xffffe00U 
                                                           & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               << 9U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                 >> 4U))) 
                                                          | (0xfffffe00U 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 << 9U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                   << 4U)))))) 
                                                   | ((0x100U 
                                                       & ((0xffffff00U 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 2U)) 
                                                               << 8U) 
                                                              & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout)) 
                                                          | ((0xfffff00U 
                                                              & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                  << 8U) 
                                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                    >> 4U))) 
                                                             | (0xffffff00U 
                                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                    << 8U) 
                                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                      << 4U)))))) 
                                                      | (IData)(vlSelf->__PVT__io_dout_lo_lo)))))))));
    vlSelf->__PVT__io_dout_hi = ((0x8000U & ((0x8000U 
                                              & (((~ 
                                                   (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                    >> 2U)) 
                                                  << 0xfU) 
                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                    >> 0x10U))) 
                                             | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                  & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                 << 0xfU) 
                                                | (0xf8000U 
                                                   & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                       << 0xfU) 
                                                      & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                         >> 0xcU)))))) 
                                 | ((0x4000U & ((0xc000U 
                                                 & (((~ 
                                                      (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                       >> 2U)) 
                                                     << 0xeU) 
                                                    & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                       >> 0x10U))) 
                                                | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                    << 0xeU) 
                                                   | (0xfc000U 
                                                      & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                          << 0xeU) 
                                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                            >> 0xcU)))))) 
                                    | ((0x2000U & (
                                                   (0xe000U 
                                                    & (((~ 
                                                         (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                          >> 2U)) 
                                                        << 0xdU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                          >> 0x10U))) 
                                                   | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                       << 0xdU) 
                                                      | (0xfe000U 
                                                         & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                             << 0xdU) 
                                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                               >> 0xcU)))))) 
                                       | ((0x1000U 
                                           & ((0xf000U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 2U)) 
                                                   << 0xcU) 
                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                     >> 0x10U))) 
                                              | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                   & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                  << 0xcU) 
                                                 | (0xff000U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                          >> 0xcU)))))) 
                                          | ((0x800U 
                                              & ((0xf800U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 2U)) 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                        >> 0x10U))) 
                                                 | ((0x800U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 0xbU) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                           >> 0x14U))) 
                                                    | (0xff800U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 0xbU) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                             >> 0xcU)))))) 
                                             | ((0x400U 
                                                 & ((0xfc00U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 2U)) 
                                                         << 0xaU) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                           >> 0x10U))) 
                                                    | ((0xc00U 
                                                        & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            << 0xaU) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                              >> 0x14U))) 
                                                       | (0xffc00U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 0xaU) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                >> 0xcU)))))) 
                                                | ((0x200U 
                                                    & ((0xfe00U 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 2U)) 
                                                            << 9U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                              >> 0x10U))) 
                                                       | ((0xe00U 
                                                           & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               << 9U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                 >> 0x14U))) 
                                                          | (0xffe00U 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 << 9U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                   >> 0xcU)))))) 
                                                   | ((0x100U 
                                                       & ((0xff00U 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 2U)) 
                                                               << 8U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                 >> 0x10U))) 
                                                          | ((0xf00U 
                                                              & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                  << 8U) 
                                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                    >> 0x14U))) 
                                                             | (0xfff00U 
                                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                    << 8U) 
                                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.io_dout 
                                                                      >> 0xcU)))))) 
                                                      | (IData)(vlSelf->__PVT__io_dout_hi_lo)))))))));
    vlSelf->io_dout = (((IData)(vlSelf->__PVT__io_dout_hi) 
                        << 0x10U) | (IData)(vlSelf->__PVT__io_dout_lo));
}

VL_ATTR_COLD void VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__0(VSimpleCpu_SelectorBundle* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__0\n"); );
    // Body
    vlSelf->__PVT__sel_10__DOT__ShiftL = ((7U == (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT___Operation_T_14)) 
                                          & (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                             >> 3U));
    vlSelf->__PVT__sel_10__DOT__ShiftR = (1U & ((~ (IData)(
                                                           (7U 
                                                            == (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT___Operation_T_14)))) 
                                                & (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 3U)));
}

VL_ATTR_COLD void VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__1(VSimpleCpu_SelectorBundle* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__1\n"); );
    // Body
    vlSelf->__PVT__io_dout_lo_lo = ((0x80U & ((0xffffff80U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 3U)) 
                                                   << 7U) 
                                                  & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                              | (0xffff80U 
                                                 & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     << 7U) 
                                                    & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                       >> 8U))))) 
                                    | ((0x40U & ((0xffffffc0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 3U)) 
                                                      << 6U) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                                 | (0xffffc0U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        << 6U) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                          >> 8U))))) 
                                       | ((0x20U & 
                                           ((0xffffffe0U 
                                             & (((~ 
                                                  (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 3U)) 
                                                 << 5U) 
                                                & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                            | (0xffffe0U 
                                               & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                   << 5U) 
                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                     >> 8U))))) 
                                          | ((0x10U 
                                              & ((0xfffffff0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 3U)) 
                                                      << 4U) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                                 | (0xfffff0U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        << 4U) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                          >> 8U))))) 
                                             | ((8U 
                                                 & ((0xfffffff8U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 3U)) 
                                                         << 3U) 
                                                        & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                                    | (0xfffff8U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                           << 3U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                             >> 8U))))) 
                                                | ((4U 
                                                    & ((0xfffffffcU 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 3U)) 
                                                            << 2U) 
                                                           & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                                       | (0xfffffcU 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                              << 2U) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                >> 8U))))) 
                                                   | ((2U 
                                                       & ((0xfffffffeU 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 3U)) 
                                                               << 1U) 
                                                              & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                                          | (0xfffffeU 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                 << 1U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                   >> 8U))))) 
                                                      | (1U 
                                                         & (((~ 
                                                              (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                               >> 3U)) 
                                                             & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout) 
                                                            | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                  >> 8U)))))))))));
    vlSelf->__PVT__io_dout_hi_lo = ((0x80U & ((0xff80U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 3U)) 
                                                   << 7U) 
                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                     >> 0x10U))) 
                                              | ((0x80U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      << 7U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                        >> 0x18U))) 
                                                 | (0xffff80U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 7U) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                          >> 8U)))))) 
                                    | ((0x40U & ((0xffc0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 3U)) 
                                                      << 6U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                        >> 0x10U))) 
                                                 | ((0xc0U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 6U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                           >> 0x18U))) 
                                                    | (0xffffc0U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 6U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                             >> 8U)))))) 
                                       | ((0x20U & 
                                           ((0xffe0U 
                                             & (((~ 
                                                  (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 3U)) 
                                                 << 5U) 
                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                   >> 0x10U))) 
                                            | ((0xe0U 
                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                    << 5U) 
                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                      >> 0x18U))) 
                                               | (0xffffe0U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                      << 5U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                        >> 8U)))))) 
                                          | ((0x10U 
                                              & ((0xfff0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 3U)) 
                                                      << 4U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                        >> 0x10U))) 
                                                 | ((0xf0U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 4U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                           >> 0x18U))) 
                                                    | (0xfffff0U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 4U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                             >> 8U)))))) 
                                             | ((8U 
                                                 & ((0xfff8U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 3U)) 
                                                         << 3U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                           >> 0x10U))) 
                                                    | ((0xf8U 
                                                        & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            << 3U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                              >> 0x18U))) 
                                                       | (0xfffff8U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 3U) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                >> 8U)))))) 
                                                | ((4U 
                                                    & ((0xfffcU 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 3U)) 
                                                            << 2U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                              >> 0x10U))) 
                                                       | ((0xfcU 
                                                           & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               << 2U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                 >> 0x18U))) 
                                                          | (0xfffffcU 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 << 2U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                   >> 8U)))))) 
                                                   | ((2U 
                                                       & ((0xfffeU 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 3U)) 
                                                               << 1U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                 >> 0x10U))) 
                                                          | ((0xfeU 
                                                              & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                  << 1U) 
                                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                    >> 0x18U))) 
                                                             | (0xfffffeU 
                                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                    << 1U) 
                                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                      >> 8U)))))) 
                                                      | (1U 
                                                         & (((~ 
                                                              (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                               >> 3U)) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                >> 0x10U)) 
                                                            | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                   >> 0x18U)) 
                                                               | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                     >> 8U))))))))))));
    vlSelf->__PVT__io_dout_lo = ((0x8000U & ((0xffff8000U 
                                              & (((~ 
                                                   (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                    >> 3U)) 
                                                  << 0xfU) 
                                                 & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                             | ((0xff8000U 
                                                 & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     << 0xfU) 
                                                    & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                       >> 8U))) 
                                                | (0xffff8000U 
                                                   & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                       << 0xfU) 
                                                      & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                         << 8U)))))) 
                                 | ((0x4000U & ((0xffffc000U 
                                                 & (((~ 
                                                      (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                       >> 3U)) 
                                                     << 0xeU) 
                                                    & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                                | ((0xffc000U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        << 0xeU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                          >> 8U))) 
                                                   | (0xffffc000U 
                                                      & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                          << 0xeU) 
                                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                            << 8U)))))) 
                                    | ((0x2000U & (
                                                   (0xffffe000U 
                                                    & (((~ 
                                                         (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                          >> 3U)) 
                                                        << 0xdU) 
                                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                                   | ((0xffe000U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                           << 0xdU) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                             >> 8U))) 
                                                      | (0xffffe000U 
                                                         & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                             << 0xdU) 
                                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                               << 8U)))))) 
                                       | ((0x1000U 
                                           & ((0xfffff000U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 3U)) 
                                                   << 0xcU) 
                                                  & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                              | ((0xfff000U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      << 0xcU) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                        >> 8U))) 
                                                 | (0xfffff000U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                          << 8U)))))) 
                                          | ((0x800U 
                                              & ((0xfffff800U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 3U)) 
                                                      << 0xbU) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                                 | ((0xfff800U 
                                                     & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         << 0xbU) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                           >> 8U))) 
                                                    | (0xfffff800U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 0xbU) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                             << 8U)))))) 
                                             | ((0x400U 
                                                 & ((0xfffffc00U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 3U)) 
                                                         << 0xaU) 
                                                        & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                                    | ((0xfffc00U 
                                                        & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            << 0xaU) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                              >> 8U))) 
                                                       | (0xfffffc00U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 0xaU) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                << 8U)))))) 
                                                | ((0x200U 
                                                    & ((0xfffffe00U 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 3U)) 
                                                            << 9U) 
                                                           & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                                       | ((0xfffe00U 
                                                           & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               << 9U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                 >> 8U))) 
                                                          | (0xfffffe00U 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 << 9U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                   << 8U)))))) 
                                                   | ((0x100U 
                                                       & ((0xffffff00U 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 3U)) 
                                                               << 8U) 
                                                              & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout)) 
                                                          | ((0xffff00U 
                                                              & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                  << 8U) 
                                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                    >> 8U))) 
                                                             | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout) 
                                                                << 8U)))) 
                                                      | (IData)(vlSelf->__PVT__io_dout_lo_lo)))))))));
    vlSelf->__PVT__io_dout_hi = ((0x8000U & ((0x8000U 
                                              & (((~ 
                                                   (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                    >> 3U)) 
                                                  << 0xfU) 
                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                    >> 0x10U))) 
                                             | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                  & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                 << 0xfU) 
                                                | (0xff8000U 
                                                   & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                       << 0xfU) 
                                                      & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                         >> 8U)))))) 
                                 | ((0x4000U & ((0xc000U 
                                                 & (((~ 
                                                      (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                       >> 3U)) 
                                                     << 0xeU) 
                                                    & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                       >> 0x10U))) 
                                                | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                    << 0xeU) 
                                                   | (0xffc000U 
                                                      & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                          << 0xeU) 
                                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                            >> 8U)))))) 
                                    | ((0x2000U & (
                                                   (0xe000U 
                                                    & (((~ 
                                                         (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                          >> 3U)) 
                                                        << 0xdU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                          >> 0x10U))) 
                                                   | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                       << 0xdU) 
                                                      | (0xffe000U 
                                                         & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                             << 0xdU) 
                                                            & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                               >> 8U)))))) 
                                       | ((0x1000U 
                                           & ((0xf000U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 3U)) 
                                                   << 0xcU) 
                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                     >> 0x10U))) 
                                              | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                   & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                  << 0xcU) 
                                                 | (0xfff000U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 0xcU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                          >> 8U)))))) 
                                          | ((0x800U 
                                              & ((0xf800U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 3U)) 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                        >> 0x10U))) 
                                                 | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                     << 0xbU) 
                                                    | (0xfff800U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 0xbU) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                             >> 8U)))))) 
                                             | ((0x400U 
                                                 & ((0xfc00U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 3U)) 
                                                         << 0xaU) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                           >> 0x10U))) 
                                                    | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                        << 0xaU) 
                                                       | (0xfffc00U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 0xaU) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                >> 8U)))))) 
                                                | ((0x200U 
                                                    & ((0xfe00U 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 3U)) 
                                                            << 9U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                              >> 0x10U))) 
                                                       | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                           << 9U) 
                                                          | (0xfffe00U 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 << 9U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                   >> 8U)))))) 
                                                   | ((0x100U 
                                                       & ((0xff00U 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 3U)) 
                                                               << 8U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                 >> 0x10U))) 
                                                          | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                              << 8U) 
                                                             | (0xffff00U 
                                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                    << 8U) 
                                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.io_dout 
                                                                      >> 8U)))))) 
                                                      | (IData)(vlSelf->__PVT__io_dout_hi_lo)))))))));
    vlSelf->io_dout = (((IData)(vlSelf->__PVT__io_dout_hi) 
                        << 0x10U) | (IData)(vlSelf->__PVT__io_dout_lo));
}

VL_ATTR_COLD void VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__0(VSimpleCpu_SelectorBundle* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__0\n"); );
    // Body
    vlSelf->__PVT__sel_10__DOT__ShiftL = ((7U == (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT___Operation_T_14)) 
                                          & (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                             >> 4U));
    vlSelf->__PVT__sel_10__DOT__ShiftR = (1U & ((~ (IData)(
                                                           (7U 
                                                            == (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT___Operation_T_14)))) 
                                                & (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 4U)));
}

VL_ATTR_COLD void VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__1(VSimpleCpu_SelectorBundle* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSimpleCpu_SelectorBundle___stl_sequent__TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__1\n"); );
    // Body
    vlSelf->__PVT__io_dout_lo_lo = ((0x80U & ((0xffffff80U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 4U)) 
                                                   << 7U) 
                                                  & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                              | (0xff80U 
                                                 & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     << 7U) 
                                                    & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                       >> 0x10U))))) 
                                    | ((0x40U & ((0xffffffc0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 4U)) 
                                                      << 6U) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                                 | (0xffc0U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        << 6U) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                          >> 0x10U))))) 
                                       | ((0x20U & 
                                           ((0xffffffe0U 
                                             & (((~ 
                                                  (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 4U)) 
                                                 << 5U) 
                                                & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                            | (0xffe0U 
                                               & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                   << 5U) 
                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                     >> 0x10U))))) 
                                          | ((0x10U 
                                              & ((0xfffffff0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 4U)) 
                                                      << 4U) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                                 | (0xfff0U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        << 4U) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                          >> 0x10U))))) 
                                             | ((8U 
                                                 & ((0xfffffff8U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 4U)) 
                                                         << 3U) 
                                                        & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                                    | (0xfff8U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                           << 3U) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                             >> 0x10U))))) 
                                                | ((4U 
                                                    & ((0xfffffffcU 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 4U)) 
                                                            << 2U) 
                                                           & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                                       | (0xfffcU 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                              << 2U) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                                >> 0x10U))))) 
                                                   | ((2U 
                                                       & ((0xfffffffeU 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 4U)) 
                                                               << 1U) 
                                                              & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                                          | (0xfffeU 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                 << 1U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                                   >> 0x10U))))) 
                                                      | (1U 
                                                         & (((~ 
                                                              (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                               >> 4U)) 
                                                             & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout) 
                                                            | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                                  >> 0x10U)))))))))));
    vlSelf->__PVT__io_dout_hi_lo = ((0x80U & ((0xff80U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 4U)) 
                                                   << 7U) 
                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                     >> 0x10U))) 
                                              | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                   & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                  << 7U) 
                                                 | (0xffffff80U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 7U) 
                                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                    | ((0x40U & ((0xffc0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 4U)) 
                                                      << 6U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                        >> 0x10U))) 
                                                 | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                     << 6U) 
                                                    | (0xffffffc0U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 6U) 
                                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                       | ((0x20U & 
                                           ((0xffe0U 
                                             & (((~ 
                                                  (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                   >> 4U)) 
                                                 << 5U) 
                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                   >> 0x10U))) 
                                            | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                 & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                      << 5U) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                          | ((0x10U 
                                              & ((0xfff0U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 4U)) 
                                                      << 4U) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                        >> 0x10U))) 
                                                 | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                     << 4U) 
                                                    | (0xfffffff0U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 4U) 
                                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                             | ((8U 
                                                 & ((0xfff8U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 4U)) 
                                                         << 3U) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                           >> 0x10U))) 
                                                    | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 3U) 
                                                             & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                                | ((4U 
                                                    & ((0xfffcU 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 4U)) 
                                                            << 2U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                              >> 0x10U))) 
                                                       | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                           << 2U) 
                                                          | (0xfffffffcU 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 << 2U) 
                                                                & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                                   | ((2U 
                                                       & ((0xfffeU 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 4U)) 
                                                               << 1U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                                 >> 0x10U))) 
                                                          | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                              << 1U) 
                                                             | (0xfffffffeU 
                                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                    << 1U) 
                                                                   & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                                      | (1U 
                                                         & (((~ 
                                                              (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                               >> 4U)) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                                >> 0x10U)) 
                                                            | (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                               | ((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                  & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)))))))))));
    vlSelf->__PVT__io_dout_lo = ((0x8000U & ((0xffff8000U 
                                              & (((~ 
                                                   (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                    >> 4U)) 
                                                  << 0xfU) 
                                                 & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                             | (0x8000U 
                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                    << 0xfU) 
                                                   & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                      >> 0x10U))))) 
                                 | ((0x4000U & ((0xffffc000U 
                                                 & (((~ 
                                                      (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                       >> 4U)) 
                                                     << 0xeU) 
                                                    & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                                | (0xc000U 
                                                   & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                       << 0xeU) 
                                                      & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                         >> 0x10U))))) 
                                    | ((0x2000U & (
                                                   (0xffffe000U 
                                                    & (((~ 
                                                         (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                          >> 4U)) 
                                                        << 0xdU) 
                                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                                   | (0xe000U 
                                                      & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                          << 0xdU) 
                                                         & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                            >> 0x10U))))) 
                                       | ((0x1000U 
                                           & ((0xfffff000U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 4U)) 
                                                   << 0xcU) 
                                                  & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                              | (0xf000U 
                                                 & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     << 0xcU) 
                                                    & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                       >> 0x10U))))) 
                                          | ((0x800U 
                                              & ((0xfffff800U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 4U)) 
                                                      << 0xbU) 
                                                     & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                                 | (0xf800U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        << 0xbU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                          >> 0x10U))))) 
                                             | ((0x400U 
                                                 & ((0xfffffc00U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 4U)) 
                                                         << 0xaU) 
                                                        & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                                    | (0xfc00U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                           << 0xaU) 
                                                          & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                             >> 0x10U))))) 
                                                | ((0x200U 
                                                    & ((0xfffffe00U 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 4U)) 
                                                            << 9U) 
                                                           & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                                       | (0xfe00U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                              << 9U) 
                                                             & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                                >> 0x10U))))) 
                                                   | ((0x100U 
                                                       & ((0xffffff00U 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 4U)) 
                                                               << 8U) 
                                                              & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout)) 
                                                          | (0xff00U 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                                 << 8U) 
                                                                & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                                   >> 0x10U))))) 
                                                      | (IData)(vlSelf->__PVT__io_dout_lo_lo)))))))));
    vlSelf->__PVT__io_dout_hi = ((0x8000U & ((0x8000U 
                                              & (((~ 
                                                   (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                    >> 4U)) 
                                                  << 0xfU) 
                                                 & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                    >> 0x10U))) 
                                             | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                  & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                 << 0xfU) 
                                                | (0xffff8000U 
                                                   & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                       << 0xfU) 
                                                      & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                 | ((0x4000U & ((0xc000U 
                                                 & (((~ 
                                                      (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                       >> 4U)) 
                                                     << 0xeU) 
                                                    & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                       >> 0x10U))) 
                                                | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                     & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                    << 0xeU) 
                                                   | (0xffffc000U 
                                                      & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                          << 0xeU) 
                                                         & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                    | ((0x2000U & (
                                                   (0xe000U 
                                                    & (((~ 
                                                         (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                          >> 4U)) 
                                                        << 0xdU) 
                                                       & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                          >> 0x10U))) 
                                                   | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                        & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                       << 0xdU) 
                                                      | (0xffffe000U 
                                                         & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                             << 0xdU) 
                                                            & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                       | ((0x1000U 
                                           & ((0xf000U 
                                               & (((~ 
                                                    (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                     >> 4U)) 
                                                   << 0xcU) 
                                                  & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                     >> 0x10U))) 
                                              | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                   & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                  << 0xcU) 
                                                 | (0xfffff000U 
                                                    & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                        << 0xcU) 
                                                       & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                          | ((0x800U 
                                              & ((0xf800U 
                                                  & (((~ 
                                                       (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                        >> 4U)) 
                                                      << 0xbU) 
                                                     & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                        >> 0x10U))) 
                                                 | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                      & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                     << 0xbU) 
                                                    | (0xfffff800U 
                                                       & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                           << 0xbU) 
                                                          & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                             | ((0x400U 
                                                 & ((0xfc00U 
                                                     & (((~ 
                                                          (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                           >> 4U)) 
                                                         << 0xaU) 
                                                        & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                           >> 0x10U))) 
                                                    | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                         & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                        << 0xaU) 
                                                       | (0xfffffc00U 
                                                          & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                              << 0xaU) 
                                                             & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                                | ((0x200U 
                                                    & ((0xfe00U 
                                                        & (((~ 
                                                             (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                              >> 4U)) 
                                                            << 9U) 
                                                           & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                              >> 0x10U))) 
                                                       | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                            & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                           << 9U) 
                                                          | (0xfffffe00U 
                                                             & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                 << 9U) 
                                                                & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                                   | ((0x100U 
                                                       & ((0xff00U 
                                                           & (((~ 
                                                                (vlSymsp->TOP.SimpleCpu__DOT__Alu_io_B 
                                                                 >> 4U)) 
                                                               << 8U) 
                                                              & (vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout 
                                                                 >> 0x10U))) 
                                                          | ((((IData)(vlSelf->__PVT__sel_10__DOT__ShiftR) 
                                                               & (IData)(vlSymsp->TOP.SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1)) 
                                                              << 8U) 
                                                             | (0xffffff00U 
                                                                & (((IData)(vlSelf->__PVT__sel_10__DOT__ShiftL) 
                                                                    << 8U) 
                                                                   & vlSymsp->TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.io_dout))))) 
                                                      | (IData)(vlSelf->__PVT__io_dout_hi_lo)))))))));
    vlSelf->io_dout = (((IData)(vlSelf->__PVT__io_dout_hi) 
                        << 0x10U) | (IData)(vlSelf->__PVT__io_dout_lo));
}
