// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "VTOP__pch.h"
#include "VTOP___024root.h"

VL_INLINE_OPT void VTOP___024root___ico_sequent__TOP__0(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___ico_sequent__TOP__0\n"); );
    // Body
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

void VTOP___024root___eval_ico(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VTOP___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VTOP___024root___eval_triggers__ico(VTOP___024root* vlSelf);

bool VTOP___024root___eval_phase__ico(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTOP___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VTOP___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTOP___024root___eval_act(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 8> VTOP__ConstPool__TABLE_h5c6a37b8_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTOP__ConstPool__TABLE_he8d074ac_0;
extern const VlUnpacked<CData/*0:0*/, 8> VTOP__ConstPool__TABLE_h2dc28e24_0;

VL_INLINE_OPT void VTOP___024root___nba_sequent__TOP__0(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_1 = ((1U 
                                                 & (~ (IData)(vlSelf->reset))) 
                                                && (((((((((((0U 
                                                              == (IData)(vlSelf->TOP__DOT__alu_io_Result)) 
                                                             | (4U 
                                                                == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                            | (5U 
                                                               == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                           | (6U 
                                                              == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                          | (8U 
                                                             == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                         | (9U 
                                                            == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                        | (0xaU 
                                                           == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                       | (0xbU 
                                                          == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                      | (0xcU 
                                                         == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                     | (0xeU 
                                                        == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                    | (0xfU 
                                                       == (IData)(vlSelf->TOP__DOT__alu_io_Result))));
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_0 = ((1U 
                                                 & (~ (IData)(vlSelf->reset))) 
                                                && ((((((((((((2U 
                                                               == (IData)(vlSelf->TOP__DOT__alu_io_Result)) 
                                                              | (3U 
                                                                 == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                             | (4U 
                                                                == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                            | (5U 
                                                               == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                           | (6U 
                                                              == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                          | (8U 
                                                             == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                         | (9U 
                                                            == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                        | (0xaU 
                                                           == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                       | (0xbU 
                                                          == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                      | (0xdU 
                                                         == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                     | (0xeU 
                                                        == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                    | (0xfU 
                                                       == (IData)(vlSelf->TOP__DOT__alu_io_Result))));
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_5 = ((1U 
                                                 & (~ (IData)(vlSelf->reset))) 
                                                && (((((((((IData)(vlSelf->TOP__DOT__seg7Res__DOT___outReg_5_T_2) 
                                                           | (2U 
                                                              == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                          | (3U 
                                                             == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                         | (4U 
                                                            == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                        | (7U 
                                                           == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                       | (8U 
                                                          == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                      | (9U 
                                                         == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                     | (0xaU 
                                                        == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                    | (0xdU 
                                                       == (IData)(vlSelf->TOP__DOT__alu_io_Result))));
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_4 = ((1U 
                                                 & (~ (IData)(vlSelf->reset))) 
                                                && (((((((((((IData)(vlSelf->TOP__DOT__seg7Res__DOT___outReg_5_T_2) 
                                                             | (3U 
                                                                == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                            | (4U 
                                                               == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                           | (5U 
                                                              == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                          | (6U 
                                                             == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                         | (7U 
                                                            == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                        | (8U 
                                                           == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                       | (9U 
                                                          == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                      | (0xaU 
                                                         == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                     | (0xbU 
                                                        == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                    | (0xdU 
                                                       == (IData)(vlSelf->TOP__DOT__alu_io_Result))));
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_6 = ((1U 
                                                 & (~ (IData)(vlSelf->reset))) 
                                                && ((((((((IData)(vlSelf->TOP__DOT__seg7Res__DOT___outReg_6_T_8) 
                                                          | (7U 
                                                             == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                         | (8U 
                                                            == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                        | (9U 
                                                           == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                       | (0xaU 
                                                          == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                      | (0xcU 
                                                         == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                     | (0xeU 
                                                        == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                    | (0xfU 
                                                       == (IData)(vlSelf->TOP__DOT__alu_io_Result))));
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_3 = ((1U 
                                                 & (~ (IData)(vlSelf->reset))) 
                                                && ((((((IData)(vlSelf->TOP__DOT__seg7Res__DOT___outReg_6_T_8) 
                                                        | (8U 
                                                           == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                       | (9U 
                                                          == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                      | (0xbU 
                                                         == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                     | (0xcU 
                                                        == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                    | (0xdU 
                                                       == (IData)(vlSelf->TOP__DOT__alu_io_Result))));
    vlSelf->TOP__DOT__seg7Res__DOT__outReg_2 = ((1U 
                                                 & (~ (IData)(vlSelf->reset))) 
                                                && (((((((((IData)(vlSelf->TOP__DOT__seg7Res__DOT___outReg_6_T_2) 
                                                           | (6U 
                                                              == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                          | (8U 
                                                             == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                         | (0xaU 
                                                            == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                        | (0xbU 
                                                           == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                       | (0xcU 
                                                          == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                      | (0xdU 
                                                         == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                     | (0xeU 
                                                        == (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                                    | (0xfU 
                                                       == (IData)(vlSelf->TOP__DOT__alu_io_Result))));
    __Vtableidx2 = (4U | ((2U & ((~ (IData)(vlSelf->TOP__DOT__alu_io_Cout)) 
                                 << 1U)) | (IData)(vlSelf->reset)));
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_0 = VTOP__ConstPool__TABLE_h5c6a37b8_0
        [__Vtableidx2];
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_1 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx2];
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_2 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx2];
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_3 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx2];
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_4 = VTOP__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx2];
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_5 = VTOP__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx2];
    vlSelf->TOP__DOT__seg7Cout__DOT__outReg_6 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx2];
    __Vtableidx3 = (4U | ((2U & ((~ (IData)(vlSelf->TOP__DOT__alu_io_OF)) 
                                 << 1U)) | (IData)(vlSelf->reset)));
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_0 = VTOP__ConstPool__TABLE_h5c6a37b8_0
        [__Vtableidx3];
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_1 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx3];
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_2 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx3];
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_3 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx3];
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_4 = VTOP__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx3];
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_5 = VTOP__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx3];
    vlSelf->TOP__DOT__seg7OF__DOT__outReg_6 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx3];
    __Vtableidx1 = ((4U & (((0U != (IData)(vlSelf->TOP__DOT__alu_io_Result)) 
                            | (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__alu_io_Result))))) 
                           << 2U)) | (((IData)((0U 
                                                != (IData)(vlSelf->TOP__DOT__alu_io_Result))) 
                                       << 1U) | (IData)(vlSelf->reset)));
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_0 = VTOP__ConstPool__TABLE_h5c6a37b8_0
        [__Vtableidx1];
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_1 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx1];
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_2 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx1];
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_3 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx1];
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_4 = VTOP__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx1];
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_5 = VTOP__ConstPool__TABLE_h2dc28e24_0
        [__Vtableidx1];
    vlSelf->TOP__DOT__seg7Zero__DOT__outReg_6 = VTOP__ConstPool__TABLE_he8d074ac_0
        [__Vtableidx1];
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
}

void VTOP___024root___eval_nba(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTOP___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VTOP___024root___eval_triggers__act(VTOP___024root* vlSelf);

bool VTOP___024root___eval_phase__act(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTOP___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTOP___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTOP___024root___eval_phase__nba(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTOP___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__ico(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__nba(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTOP___024root___dump_triggers__act(VTOP___024root* vlSelf);
#endif  // VL_DEBUG

void VTOP___024root___eval(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VTOP___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("build/TOP.v", 255, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTOP___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTOP___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("build/TOP.v", 255, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTOP___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("build/TOP.v", 255, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTOP___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTOP___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_A & 0xf0U))) {
        Verilated::overWidthError("io_A");}
    if (VL_UNLIKELY((vlSelf->io_B & 0xf0U))) {
        Verilated::overWidthError("io_B");}
    if (VL_UNLIKELY((vlSelf->io_aluOp & 0xf8U))) {
        Verilated::overWidthError("io_aluOp");}
}
#endif  // VL_DEBUG
