// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSimpleCpu__pch.h"
#include "VSimpleCpu.h"
#include "VSimpleCpu___024root.h"
#include "VSimpleCpu_SelectorBundle.h"

// FUNCTIONS
VSimpleCpu__Syms::~VSimpleCpu__Syms()
{
}

VSimpleCpu__Syms::VSimpleCpu__Syms(VerilatedContext* contextp, const char* namep, VSimpleCpu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0{this, Verilated::catName(namep, "SimpleCpu.Alu.Shifter.SelectorNet_0")}
    , TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1{this, Verilated::catName(namep, "SimpleCpu.Alu.Shifter.SelectorNet_1")}
    , TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2{this, Verilated::catName(namep, "SimpleCpu.Alu.Shifter.SelectorNet_2")}
    , TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3{this, Verilated::catName(namep, "SimpleCpu.Alu.Shifter.SelectorNet_3")}
    , TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4{this, Verilated::catName(namep, "SimpleCpu.Alu.Shifter.SelectorNet_4")}
{
        // Check resources
        Verilated::stackCheck(209);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0 = &TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0;
    TOP.__PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1 = &TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1;
    TOP.__PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2 = &TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2;
    TOP.__PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3 = &TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3;
    TOP.__PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4 = &TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0.__Vconfigure(true);
    TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1.__Vconfigure(false);
    TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2.__Vconfigure(false);
    TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3.__Vconfigure(false);
    TOP__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4.__Vconfigure(false);
}
