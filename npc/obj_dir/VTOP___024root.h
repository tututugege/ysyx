// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class VTOP__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTOP___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(clr,0,0);
        VL_IN8(ps2_clk,0,0);
        VL_IN8(ps2_data,0,0);
        VL_OUT8(seg0n,7,0);
        VL_OUT8(seg1n,7,0);
        VL_OUT8(seg2n,7,0);
        VL_OUT8(seg3n,7,0);
        VL_OUT8(seg4n,7,0);
        VL_OUT8(seg5n,7,0);
        VL_OUT8(seg6n,7,0);
        VL_OUT8(seg7n,7,0);
        VL_OUT8(ready,0,0);
        VL_OUT8(overflow,0,0);
        CData/*7:0*/ TOP__DOT__data0;
        CData/*7:0*/ TOP__DOT__data1;
        CData/*7:0*/ TOP__DOT__data2;
        CData/*7:0*/ TOP__DOT__data3;
        CData/*2:0*/ TOP__DOT__ps2__DOT__w_ptr;
        CData/*2:0*/ TOP__DOT__ps2__DOT__r_ptr;
        CData/*3:0*/ TOP__DOT__ps2__DOT__count;
        CData/*2:0*/ TOP__DOT__ps2__DOT__ps2_clk_sync;
        CData/*0:0*/ TOP__DOT__ps2__DOT____Vlvbound_hae012186__0;
        CData/*0:0*/ TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_0;
        CData/*0:0*/ TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_1;
        CData/*0:0*/ TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_3;
        CData/*0:0*/ TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_4;
        CData/*0:0*/ TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_5;
        CData/*0:0*/ TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_6;
        CData/*0:0*/ TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_6_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_6_T_8;
        CData/*0:0*/ TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT___outReg_5_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_0;
        CData/*0:0*/ TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_1;
        CData/*0:0*/ TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_3;
        CData/*0:0*/ TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_4;
        CData/*0:0*/ TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_5;
        CData/*0:0*/ TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_6;
        CData/*0:0*/ TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_6_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_6_T_8;
        CData/*0:0*/ TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT___outReg_5_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_0;
        CData/*0:0*/ TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_1;
        CData/*0:0*/ TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_3;
        CData/*0:0*/ TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_4;
        CData/*0:0*/ TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_5;
        CData/*0:0*/ TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_6;
        CData/*0:0*/ TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_6_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_6_T_8;
        CData/*0:0*/ TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT___outReg_5_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_0;
        CData/*0:0*/ TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_1;
        CData/*0:0*/ TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_3;
        CData/*0:0*/ TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_4;
        CData/*0:0*/ TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_5;
        CData/*0:0*/ TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_6;
        CData/*0:0*/ TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_6_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_6_T_8;
        CData/*0:0*/ TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT___outReg_5_T_2;
    };
    struct {
        CData/*0:0*/ TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_0;
        CData/*0:0*/ TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_1;
        CData/*0:0*/ TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_3;
        CData/*0:0*/ TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_4;
        CData/*0:0*/ TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_5;
        CData/*0:0*/ TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_6;
        CData/*0:0*/ TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_6_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_6_T_8;
        CData/*0:0*/ TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT___outReg_5_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_0;
        CData/*0:0*/ TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_1;
        CData/*0:0*/ TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_3;
        CData/*0:0*/ TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_4;
        CData/*0:0*/ TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_5;
        CData/*0:0*/ TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_6;
        CData/*0:0*/ TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_6_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_6_T_8;
        CData/*0:0*/ TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT___outReg_5_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_0;
        CData/*0:0*/ TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_1;
        CData/*0:0*/ TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_3;
        CData/*0:0*/ TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_4;
        CData/*0:0*/ TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_5;
        CData/*0:0*/ TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_6;
        CData/*0:0*/ TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_6_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_6_T_8;
        CData/*0:0*/ TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT___outReg_5_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_0;
        CData/*0:0*/ TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_1;
        CData/*0:0*/ TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_3;
        CData/*0:0*/ TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_4;
        CData/*0:0*/ TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_5;
        CData/*0:0*/ TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_6;
        CData/*0:0*/ TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_6_T_2;
        CData/*0:0*/ TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_6_T_8;
        CData/*0:0*/ TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT___outReg_5_T_2;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ TOP__DOT__ps2__DOT__buffer;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 8> TOP__DOT__seg;
        VlUnpacked<CData/*3:0*/, 8> TOP__DOT__switch;
        VlUnpacked<CData/*7:0*/, 8> TOP__DOT__ps2__DOT__fifo;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP___024root(VTOP__Syms* symsp, const char* v__name);
    ~VTOP___024root();
    VL_UNCOPYABLE(VTOP___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
