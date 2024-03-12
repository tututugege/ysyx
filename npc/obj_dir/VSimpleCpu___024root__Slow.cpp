// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu__Syms.h"
#include "VSimpleCpu___024root.h"

void VSimpleCpu___024root___ctor_var_reset(VSimpleCpu___024root* vlSelf);

VSimpleCpu___024root::VSimpleCpu___024root(VSimpleCpu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSimpleCpu___024root___ctor_var_reset(this);
}

void VSimpleCpu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VSimpleCpu___024root::~VSimpleCpu___024root() {
}
