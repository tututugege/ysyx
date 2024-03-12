// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimpleCpu.h for the primary calling header

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu_SelectorBundle.h"
#include "VSimpleCpu__Syms.h"

void VSimpleCpu_SelectorBundle___ctor_var_reset(VSimpleCpu_SelectorBundle* vlSelf);

VSimpleCpu_SelectorBundle::VSimpleCpu_SelectorBundle(VSimpleCpu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSimpleCpu_SelectorBundle___ctor_var_reset(this);
}

void VSimpleCpu_SelectorBundle::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VSimpleCpu_SelectorBundle::~VSimpleCpu_SelectorBundle() {
}
