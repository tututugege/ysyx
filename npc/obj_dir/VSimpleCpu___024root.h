// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimpleCpu.h for the primary calling header

#ifndef VERILATED_VSIMPLECPU___024ROOT_H_
#define VERILATED_VSIMPLECPU___024ROOT_H_  // guard

#include "verilated.h"
class VSimpleCpu_SelectorBundle;
class VSimpleCpu___024unit;


class VSimpleCpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSimpleCpu___024root final : public VerilatedModule {
  public:
    // CELLS
    VSimpleCpu___024unit* __PVT____024unit;
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
        VL_OUT8(Halt,0,0);
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule_io_AluSrc1;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule_io_AluSrc2;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule_io_PcSrc;
        CData/*3:0*/ SimpleCpu__DOT__Memory_MemWriteStrb_plaInput;
        CData/*1:0*/ SimpleCpu__DOT___Memory_MemWriteStrb_T_6;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T;
        CData/*7:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_3;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_7;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_9;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_20;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_26;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_28;
        CData/*3:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_35;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_48;
        CData/*4:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_56;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_6;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_10;
        CData/*5:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_13;
        CData/*3:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_15;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_17;
        CData/*3:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_20;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_22;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_24;
        CData/*4:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_27;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_29;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_31;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT__Type;
        CData/*2:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h9d8c627f__0;
        CData/*5:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hc8e17380__0;
        CData/*6:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h48959834__0;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h47bee7ff__0;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5ba46ba8__0;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_h5eee8f44__0;
        CData/*1:0*/ SimpleCpu__DOT__DecoderModule__DOT____VdfgTmp_hdc0fb08b__0;
        CData/*0:0*/ SimpleCpu__DOT__RF__DOT__Wen;
        CData/*3:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T;
        CData/*3:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_2;
        CData/*3:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_4;
        CData/*2:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_8;
        CData/*1:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_10;
        CData/*1:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_12;
        CData/*2:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_14;
        CData/*1:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_16;
        CData/*1:0*/ SimpleCpu__DOT__Alu__DOT___Operation_T_18;
        CData/*2:0*/ SimpleCpu__DOT__Alu__DOT____VdfgTmp_hf12cf007__0;
        CData/*1:0*/ SimpleCpu__DOT__Alu__DOT____VdfgTmp_h61253848__0;
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
    };
    struct {
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
        SData/*8:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_T_5;
        SData/*9:0*/ SimpleCpu__DOT__DecoderModule__DOT___DecoderOut_orMatrixOutputs_T_8;
        IData/*31:0*/ SimpleCpu__DOT__DecoderModule_io_Imm;
        IData/*31:0*/ SimpleCpu__DOT__RF_io_wdata;
        IData/*31:0*/ SimpleCpu__DOT__RF_io_rdata1;
        IData/*31:0*/ SimpleCpu__DOT__Alu_io_B;
        IData/*31:0*/ SimpleCpu__DOT__Alu_io_Result;
        IData/*31:0*/ SimpleCpu__DOT__PcReg;
        IData/*31:0*/ SimpleCpu__DOT__PcInc;
        IData/*31:0*/ SimpleCpu__DOT__PcBr;
        IData/*31:0*/ SimpleCpu__DOT___Alu_io_A_T_3;
        IData/*19:0*/ SimpleCpu__DOT__DecoderModule__DOT__DecoderOut_orMatrixOutputs;
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
    };
    struct {
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_30;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT__gprSeq_31;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_45;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_58;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_77;
        IData/*31:0*/ SimpleCpu__DOT__RF__DOT___GEN_90;
        IData/*31:0*/ SimpleCpu__DOT__Alu__DOT__Shifter_io_din;
        IData/*31:0*/ SimpleCpu__DOT__Alu__DOT__AdderB;
        IData/*31:0*/ SimpleCpu__DOT__MemoryAccess__DOT__InstReg;
        IData/*31:0*/ SimpleCpu__DOT__MemoryAccess__DOT__ReadDataReg;
        IData/*31:0*/ __Vfunc_pmem_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_pmem_read__1__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*33:0*/ SimpleCpu__DOT__Alu__DOT___AdderOut_T_1;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
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
