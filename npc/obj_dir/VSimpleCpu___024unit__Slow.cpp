// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu__Syms.h"
#include "VSimpleCpu___024unit.h"

void VSimpleCpu___024unit___ctor_var_reset(VSimpleCpu___024unit* vlSelf);

VSimpleCpu___024unit::VSimpleCpu___024unit(VSimpleCpu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSimpleCpu___024unit___ctor_var_reset(this);
}

void VSimpleCpu___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VSimpleCpu___024unit::~VSimpleCpu___024unit() {
}
