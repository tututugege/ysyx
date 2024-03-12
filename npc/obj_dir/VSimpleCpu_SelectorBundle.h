// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimpleCpu.h for the primary calling header

#ifndef VERILATED_VSIMPLECPU_SELECTORBUNDLE_H_
#define VERILATED_VSIMPLECPU_SELECTORBUNDLE_H_  // guard

#include "verilated.h"


class VSimpleCpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSimpleCpu_SelectorBundle final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(io_shamt,0,0);
        VL_IN8(io_left,0,0);
        VL_IN8(io_din_0_0,0,0);
        VL_IN8(io_din_0_1,0,0);
        VL_IN8(io_din_1_0,0,0);
        VL_IN8(io_din_1_1,0,0);
        VL_IN8(io_din_1_3,0,0);
        VL_IN8(io_din_2_0,0,0);
        VL_IN8(io_din_2_1,0,0);
        VL_IN8(io_din_2_3,0,0);
        VL_IN8(io_din_3_0,0,0);
        VL_IN8(io_din_3_1,0,0);
        VL_IN8(io_din_3_3,0,0);
        VL_IN8(io_din_4_0,0,0);
        VL_IN8(io_din_4_1,0,0);
        VL_IN8(io_din_4_3,0,0);
        VL_IN8(io_din_5_0,0,0);
        VL_IN8(io_din_5_1,0,0);
        VL_IN8(io_din_5_3,0,0);
        VL_IN8(io_din_6_0,0,0);
        VL_IN8(io_din_6_1,0,0);
        VL_IN8(io_din_6_3,0,0);
        VL_IN8(io_din_7_0,0,0);
        VL_IN8(io_din_7_1,0,0);
        VL_IN8(io_din_7_3,0,0);
        VL_IN8(io_din_8_0,0,0);
        VL_IN8(io_din_8_1,0,0);
        VL_IN8(io_din_8_3,0,0);
        VL_IN8(io_din_9_0,0,0);
        VL_IN8(io_din_9_1,0,0);
        VL_IN8(io_din_9_3,0,0);
        VL_IN8(io_din_10_0,0,0);
        VL_IN8(io_din_10_1,0,0);
        VL_IN8(io_din_10_3,0,0);
        VL_IN8(io_din_11_0,0,0);
        VL_IN8(io_din_11_1,0,0);
        VL_IN8(io_din_11_3,0,0);
        VL_IN8(io_din_12_0,0,0);
        VL_IN8(io_din_12_1,0,0);
        VL_IN8(io_din_12_3,0,0);
        VL_IN8(io_din_13_0,0,0);
        VL_IN8(io_din_13_1,0,0);
        VL_IN8(io_din_13_3,0,0);
        VL_IN8(io_din_14_0,0,0);
        VL_IN8(io_din_14_1,0,0);
        VL_IN8(io_din_14_3,0,0);
        VL_IN8(io_din_15_0,0,0);
        VL_IN8(io_din_15_1,0,0);
        VL_IN8(io_din_15_3,0,0);
        VL_IN8(io_din_16_0,0,0);
        VL_IN8(io_din_16_1,0,0);
        VL_IN8(io_din_16_3,0,0);
        VL_IN8(io_din_17_0,0,0);
        VL_IN8(io_din_17_1,0,0);
        VL_IN8(io_din_17_3,0,0);
        VL_IN8(io_din_18_0,0,0);
        VL_IN8(io_din_18_1,0,0);
        VL_IN8(io_din_18_3,0,0);
        VL_IN8(io_din_19_0,0,0);
        VL_IN8(io_din_19_1,0,0);
        VL_IN8(io_din_19_3,0,0);
        VL_IN8(io_din_20_0,0,0);
        VL_IN8(io_din_20_1,0,0);
        VL_IN8(io_din_20_3,0,0);
    };
    struct {
        VL_IN8(io_din_21_0,0,0);
        VL_IN8(io_din_21_1,0,0);
        VL_IN8(io_din_21_3,0,0);
        VL_IN8(io_din_22_0,0,0);
        VL_IN8(io_din_22_1,0,0);
        VL_IN8(io_din_22_3,0,0);
        VL_IN8(io_din_23_0,0,0);
        VL_IN8(io_din_23_1,0,0);
        VL_IN8(io_din_23_3,0,0);
        VL_IN8(io_din_24_0,0,0);
        VL_IN8(io_din_24_1,0,0);
        VL_IN8(io_din_24_3,0,0);
        VL_IN8(io_din_25_0,0,0);
        VL_IN8(io_din_25_1,0,0);
        VL_IN8(io_din_25_3,0,0);
        VL_IN8(io_din_26_0,0,0);
        VL_IN8(io_din_26_1,0,0);
        VL_IN8(io_din_26_3,0,0);
        VL_IN8(io_din_27_0,0,0);
        VL_IN8(io_din_27_1,0,0);
        VL_IN8(io_din_27_3,0,0);
        VL_IN8(io_din_28_0,0,0);
        VL_IN8(io_din_28_1,0,0);
        VL_IN8(io_din_28_3,0,0);
        VL_IN8(io_din_29_0,0,0);
        VL_IN8(io_din_29_1,0,0);
        VL_IN8(io_din_29_3,0,0);
        VL_IN8(io_din_30_0,0,0);
        VL_IN8(io_din_30_1,0,0);
        VL_IN8(io_din_30_3,0,0);
        VL_IN8(io_din_31_0,0,0);
        VL_IN8(io_din_31_1,0,0);
        VL_IN8(io_din_31_3,0,0);
        CData/*7:0*/ __PVT__io_dout_lo_lo;
        CData/*7:0*/ __PVT__io_dout_hi_lo;
        CData/*0:0*/ __PVT__sel_10__DOT__ShiftL;
        CData/*0:0*/ __PVT__sel_10__DOT__ShiftR;
        SData/*15:0*/ __PVT__io_dout_lo;
        SData/*15:0*/ __PVT__io_dout_hi;
        VL_OUT(io_dout,31,0);
    };

    // INTERNAL VARIABLES
    VSimpleCpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSimpleCpu_SelectorBundle(VSimpleCpu__Syms* symsp, const char* v__name);
    ~VSimpleCpu_SelectorBundle();
    VL_UNCOPYABLE(VSimpleCpu_SelectorBundle);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
