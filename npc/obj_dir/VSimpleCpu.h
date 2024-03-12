// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSIMPLECPU_H_
#define VERILATED_VSIMPLECPU_H_  // guard

#include "verilated.h"

class VSimpleCpu__Syms;
class VSimpleCpu___024root;
class VerilatedVcdC;
class VSimpleCpu_SelectorBundle;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VSimpleCpu VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VSimpleCpu__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&Memory_MemWrite,0,0);
    VL_OUT8(&Memory_MemRead,0,0);
    VL_OUT8(&Memory_MemAddr,1,0);
    VL_OUT8(&Memory_MemWriteStrb,3,0);
    VL_IN(&Memory_MemReadData,31,0);
    VL_OUT(&Memory_MemWriteData,31,0);
    VL_OUT(&Fetch_PC,31,0);
    VL_IN(&Fetch_Inst,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VSimpleCpu_SelectorBundle* const __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0;
    VSimpleCpu_SelectorBundle* const __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1;
    VSimpleCpu_SelectorBundle* const __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2;
    VSimpleCpu_SelectorBundle* const __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3;
    VSimpleCpu_SelectorBundle* const __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VSimpleCpu___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VSimpleCpu(VerilatedContext* contextp, const char* name = "TOP");
    explicit VSimpleCpu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VSimpleCpu();
  private:
    VL_UNCOPYABLE(VSimpleCpu);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
