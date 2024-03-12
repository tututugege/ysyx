// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimpleCpu.h for the primary calling header

#ifndef VERILATED_VSIMPLECPU___024ROOT_H_
#define VERILATED_VSIMPLECPU___024ROOT_H_  // guard

#include "verilated.h"
class VSimpleCpu_SelectorBundle;


class VSimpleCpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSimpleCpu___024root final : public VerilatedModule {
  public:
    // CELLS
    VSimpleCpu_SelectorBundle* __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0;
    VSimpleCpu_SelectorBundle* __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1;
    VSimpleCpu_SelectorBundle* __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2;
    VSimpleCpu_SelectorBundle* __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3;
    VSimpleCpu_SelectorBundle* __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(Memory_MemWrite,0,0);
        VL_OUT8(Memory_MemRead,0,0);
        VL_OUT8(Memory_MemAddr,1,0);
        VL_OUT8(Memory_MemWriteStrb,3,0);
        CData/*3:0*/ SimpleCpu__DOT__DecoderModule_io_AluOp;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule_io_AluSrc1;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule_io_AluSrc2;
        CData/*3:0*/ SimpleCpu__DOT__Memory_MemWriteStrb_plaInput;
        CData/*1:0*/ SimpleCpu__DOT___Memory_MemWriteStrb_T_6;
        CData/*2:0*/ SimpleCpu__DOT___Memory_MemWriteStrb_orMatrixOutputs_T_3;
        CData/*1:0*/ SimpleCpu__DOT___Memory_MemWriteStrb_orMatrixOutputs_T_5;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_2;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_8;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_27;
        CData/*3:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_36;
        CData/*6:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_9;
        CData/*5:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_11;
        CData/*3:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15;
        CData/*3:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_18;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_21;
        CData/*3:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_24;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_26;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_28;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT__Type;
        CData/*5:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0;
        CData/*3:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T;
        CData/*3:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_2;
        CData/*3:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_4;
        CData/*2:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_8;
        CData/*1:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_10;
        CData/*1:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_12;
        CData/*2:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_14;
        CData/*1:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_16;
        CData/*1:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_18;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_0;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_0_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_1_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_2_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_3_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_4_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_5_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_6_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_7_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_8_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_9_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_10_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_11_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_12_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_13_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_14_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_15_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_16_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_17_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_18_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_19_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_20_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_21_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_22_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_23_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_24_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_25_1;
    };
    struct {
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_26_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_27_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_28_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_29_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_30_1;
        CData/*0:0*/ SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0_io_din_31_1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_7;
        VL_IN(Memory_MemReadData,31,0);
        VL_OUT(Memory_MemWriteData,31,0);
        VL_OUT(Fetch_PC,31,0);
        VL_IN(Fetch_Inst,31,0);
        IData/*31:0*/ SimpleCpu__DOT__DecoderModule_io_Imm;
        IData/*31:0*/ SimpleCpu__DOT__RF_io_wdata;
        IData/*31:0*/ SimpleCpu__DOT__Alu_io_B;
        IData/*31:0*/ SimpleCpu__DOT__Alu_io_Result;
        IData/*31:0*/ SimpleCpu__DOT__PcReg;
        IData/*31:0*/ SimpleCpu__DOT__PcInc;
        IData/*31:0*/ SimpleCpu__DOT__PcBr;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_0;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_1;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_2;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_3;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_4;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_5;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_6;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_7;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_8;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_9;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_10;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_11;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_12;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_13;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_14;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_15;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_16;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_17;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_18;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_19;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_20;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_21;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_22;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_23;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_24;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_25;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_26;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_27;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_28;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_29;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_30;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_31;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_58;
        IData/*31:0*/ SimpleCpu__DOT__Alu__DOT__Shifter_io_din;
        IData/*31:0*/ SimpleCpu__DOT__Alu__DOT__AdderB;
        IData/*31:0*/ __VactIterCount;
        QData/*33:0*/ SimpleCpu__DOT__Alu__DOT___AdderOut_T_1;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSimpleCpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSimpleCpu___024root(VSimpleCpu__Syms* symsp, const char* v__name);
    ~VSimpleCpu___024root();
    VL_UNCOPYABLE(VSimpleCpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
