// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiplier.h for the primary calling header

#include "VMultiplier__pch.h"
#include "VMultiplier__Syms.h"
#include "VMultiplier___024root.h"

void VMultiplier___024root___ctor_var_reset(VMultiplier___024root* vlSelf);

VMultiplier___024root::VMultiplier___024root(VMultiplier__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMultiplier___024root___ctor_var_reset(this);
}

void VMultiplier___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMultiplier___024root::~VMultiplier___024root() {
}
