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
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_A,3,0);
    VL_IN8(io_B,3,0);
    VL_IN8(io_aluOp,2,0);
    VL_OUT8(io_segRes,7,0);
    VL_OUT8(io_segZero,7,0);
    VL_OUT8(io_segCout,7,0);
    VL_OUT8(io_segOF,7,0);
    CData/*3:0*/ TOP__DOT__alu_io_Result;
    CData/*0:0*/ TOP__DOT__alu_io_Cout;
    CData/*0:0*/ TOP__DOT__alu_io_OF;
    CData/*3:0*/ TOP__DOT__alu__DOT__adderB;
    CData/*5:0*/ TOP__DOT__alu__DOT___adderOut_T_1;
    CData/*0:0*/ TOP__DOT__alu__DOT___sltRes_T_2;
    CData/*0:0*/ TOP__DOT__seg7Res__DOT__outReg_0;
    CData/*0:0*/ TOP__DOT__seg7Res__DOT__outReg_1;
    CData/*0:0*/ TOP__DOT__seg7Res__DOT__outReg_2;
    CData/*0:0*/ TOP__DOT__seg7Res__DOT__outReg_3;
    CData/*0:0*/ TOP__DOT__seg7Res__DOT__outReg_4;
    CData/*0:0*/ TOP__DOT__seg7Res__DOT__outReg_5;
    CData/*0:0*/ TOP__DOT__seg7Res__DOT__outReg_6;
    CData/*0:0*/ TOP__DOT__seg7Res__DOT___outReg_6_T_2;
    CData/*0:0*/ TOP__DOT__seg7Res__DOT___outReg_6_T_8;
    CData/*0:0*/ TOP__DOT__seg7Res__DOT___outReg_5_T_2;
    CData/*0:0*/ TOP__DOT__seg7Zero__DOT__outReg_0;
    CData/*0:0*/ TOP__DOT__seg7Zero__DOT__outReg_1;
    CData/*0:0*/ TOP__DOT__seg7Zero__DOT__outReg_2;
    CData/*0:0*/ TOP__DOT__seg7Zero__DOT__outReg_3;
    CData/*0:0*/ TOP__DOT__seg7Zero__DOT__outReg_4;
    CData/*0:0*/ TOP__DOT__seg7Zero__DOT__outReg_5;
    CData/*0:0*/ TOP__DOT__seg7Zero__DOT__outReg_6;
    CData/*0:0*/ TOP__DOT__seg7Cout__DOT__outReg_0;
    CData/*0:0*/ TOP__DOT__seg7Cout__DOT__outReg_1;
    CData/*0:0*/ TOP__DOT__seg7Cout__DOT__outReg_2;
    CData/*0:0*/ TOP__DOT__seg7Cout__DOT__outReg_3;
    CData/*0:0*/ TOP__DOT__seg7Cout__DOT__outReg_4;
    CData/*0:0*/ TOP__DOT__seg7Cout__DOT__outReg_5;
    CData/*0:0*/ TOP__DOT__seg7Cout__DOT__outReg_6;
    CData/*0:0*/ TOP__DOT__seg7OF__DOT__outReg_0;
    CData/*0:0*/ TOP__DOT__seg7OF__DOT__outReg_1;
    CData/*0:0*/ TOP__DOT__seg7OF__DOT__outReg_2;
    CData/*0:0*/ TOP__DOT__seg7OF__DOT__outReg_3;
    CData/*0:0*/ TOP__DOT__seg7OF__DOT__outReg_4;
    CData/*0:0*/ TOP__DOT__seg7OF__DOT__outReg_5;
    CData/*0:0*/ TOP__DOT__seg7OF__DOT__outReg_6;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
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
