// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vps2_keyboard.h for the primary calling header

#ifndef VERILATED_VPS2_KEYBOARD___024ROOT_H_
#define VERILATED_VPS2_KEYBOARD___024ROOT_H_  // guard

#include "verilated.h"


class Vps2_keyboard__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vps2_keyboard___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(clrn,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(data,7,0);
    VL_OUT8(ready,0,0);
    VL_IN8(nextdata_n,0,0);
    VL_OUT8(overflow,0,0);
    CData/*2:0*/ ps2_keyboard__DOT__w_ptr;
    CData/*2:0*/ ps2_keyboard__DOT__r_ptr;
    CData/*3:0*/ ps2_keyboard__DOT__count;
    CData/*2:0*/ ps2_keyboard__DOT__ps2_clk_sync;
    CData/*0:0*/ ps2_keyboard__DOT____Vlvbound_hae012186__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ ps2_keyboard__DOT__buffer;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> ps2_keyboard__DOT__fifo;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vps2_keyboard__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vps2_keyboard___024root(Vps2_keyboard__Syms* symsp, const char* v__name);
    ~Vps2_keyboard___024root();
    VL_UNCOPYABLE(Vps2_keyboard___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
