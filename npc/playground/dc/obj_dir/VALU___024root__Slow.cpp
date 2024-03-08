// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU__pch.h"
#include "VALU__Syms.h"
#include "VALU___024root.h"

void VALU___024root___ctor_var_reset(VALU___024root* vlSelf);

VALU___024root::VALU___024root(VALU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALU___024root___ctor_var_reset(this);
}

void VALU___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VALU___024root::~VALU___024root() {
}
