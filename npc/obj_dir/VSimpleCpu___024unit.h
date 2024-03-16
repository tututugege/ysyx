// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimpleCpu.h for the primary calling header

#ifndef VERILATED_VSIMPLECPU___024UNIT_H_
#define VERILATED_VSIMPLECPU___024UNIT_H_  // guard

#include "verilated.h"


class VSimpleCpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSimpleCpu___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VSimpleCpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSimpleCpu___024unit(VSimpleCpu__Syms* symsp, const char* v__name);
    ~VSimpleCpu___024unit();
    VL_UNCOPYABLE(VSimpleCpu___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
