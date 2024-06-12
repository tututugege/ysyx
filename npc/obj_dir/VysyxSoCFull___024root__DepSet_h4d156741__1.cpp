// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__counter;
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__data;
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__addr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
        = ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss)
            ? 0U : (0xffU & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))
                              ? ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                                  ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                                  : 0U) : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))
                                            ? ((0x17U 
                                                > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                                                : 0U)
                                            : ((IData)(1U) 
                                               + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))))));
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)));
    } else if (VL_LIKELY((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
    } else {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",0,
                      8,vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
        VL_WRITEF_NX("[%0t] %%Fatal: flash.v:44: Assertion failed in %NysyxSoCFull.flash\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("../ysyxSoC/perip/flash/flash.v", 44, "");
    }
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data 
                = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                     ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                     : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                   << 1U);
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd 
                = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd) 
                             << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
        }
        if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr 
                = ((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                 << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
        }
    }
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__9(VysyxSoCFull___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__9\n"); );
    // Init
    IData/*31:0*/ __Vtask_flash_read__5__data;
    __Vtask_flash_read__5__data = 0;
    // Body
    if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
         & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))) {
        if (VL_LIKELY((3U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd)))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                           ((0xfffffeU 
                                                                             & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                                                                << 1U)) 
                                                                            | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi)), __Vtask_flash_read__5__data);
            vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                = __Vtask_flash_read__5__data;
        } else {
            VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",0,
                          8,vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF_NX("[%0t] %%Fatal: flash.v:98: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("../ysyxSoC/perip/flash/flash.v", 98, "");
        }
    }
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap 
        = ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
            << 0x18U) | ((0xff0000U & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                       << 8U)) | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 0x18U))));
    if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
                >> 7U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss))))) {
        vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_7 
            = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    }
    if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
                >> 6U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss))))) {
        vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_6 
            = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    }
    if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
                >> 5U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss))))) {
        vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_5 
            = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    }
    if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
                >> 4U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss))))) {
        vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_4 
            = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    }
    if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
                >> 3U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss))))) {
        vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_3 
            = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    }
    if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
                >> 2U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss))))) {
        vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_2 
            = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    }
    if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
                >> 1U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss))))) {
        vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_1 
            = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    }
    if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__sel) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__io_ss))))) {
        vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data_0 
            = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    }
}
