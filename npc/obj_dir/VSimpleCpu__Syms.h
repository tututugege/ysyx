// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMPLECPU__SYMS_H_
#define VERILATED_VSIMPLECPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSimpleCpu.h"

// INCLUDE MODULE CLASSES
#include "VSimpleCpu___024root.h"
#include "VSimpleCpu_SelectorBundle.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VSimpleCpu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSimpleCpu* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSimpleCpu___024root           TOP;
    VSimpleCpu_SelectorBundle      TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0;
    VSimpleCpu_SelectorBundle      TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1;
    VSimpleCpu_SelectorBundle      TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2;
    VSimpleCpu_SelectorBundle      TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3;
    VSimpleCpu_SelectorBundle      TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4;

    // CONSTRUCTORS
    VSimpleCpu__Syms(VerilatedContext* contextp, const char* namep, VSimpleCpu* modelp);
    ~VSimpleCpu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
