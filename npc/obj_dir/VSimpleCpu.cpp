// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSimpleCpu__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSimpleCpu::VSimpleCpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSimpleCpu__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , Memory_MemWrite{vlSymsp->TOP.Memory_MemWrite}
    , Memory_MemRead{vlSymsp->TOP.Memory_MemRead}
    , Memory_MemAddr{vlSymsp->TOP.Memory_MemAddr}
    , Memory_MemWriteStrb{vlSymsp->TOP.Memory_MemWriteStrb}
    , Halt{vlSymsp->TOP.Halt}
    , Memory_MemReadData{vlSymsp->TOP.Memory_MemReadData}
    , Memory_MemWriteData{vlSymsp->TOP.Memory_MemWriteData}
    , Fetch_PC{vlSymsp->TOP.Fetch_PC}
    , Fetch_Inst{vlSymsp->TOP.Fetch_Inst}
    , Ret{vlSymsp->TOP.Ret}
    , __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0{vlSymsp->TOP.__PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0}
    , __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1{vlSymsp->TOP.__PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1}
    , __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2{vlSymsp->TOP.__PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2}
    , __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3{vlSymsp->TOP.__PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3}
    , __PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4{vlSymsp->TOP.__PVT__SimpleCpu__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSimpleCpu::VSimpleCpu(const char* _vcname__)
    : VSimpleCpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSimpleCpu::~VSimpleCpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSimpleCpu___024root___eval_debug_assertions(VSimpleCpu___024root* vlSelf);
#endif  // VL_DEBUG
void VSimpleCpu___024root___eval_static(VSimpleCpu___024root* vlSelf);
void VSimpleCpu___024root___eval_initial(VSimpleCpu___024root* vlSelf);
void VSimpleCpu___024root___eval_settle(VSimpleCpu___024root* vlSelf);
void VSimpleCpu___024root___eval(VSimpleCpu___024root* vlSelf);

void VSimpleCpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimpleCpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSimpleCpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSimpleCpu___024root___eval_static(&(vlSymsp->TOP));
        VSimpleCpu___024root___eval_initial(&(vlSymsp->TOP));
        VSimpleCpu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSimpleCpu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSimpleCpu::eventsPending() { return false; }

uint64_t VSimpleCpu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSimpleCpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSimpleCpu___024root___eval_final(VSimpleCpu___024root* vlSelf);

VL_ATTR_COLD void VSimpleCpu::final() {
    VSimpleCpu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSimpleCpu::hierName() const { return vlSymsp->name(); }
const char* VSimpleCpu::modelName() const { return "VSimpleCpu"; }
unsigned VSimpleCpu::threads() const { return 1; }
void VSimpleCpu::prepareClone() const { contextp()->prepareClone(); }
void VSimpleCpu::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VSimpleCpu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSimpleCpu___024root__trace_decl_types(VerilatedVcd* tracep);

void VSimpleCpu___024root__trace_init_top(VSimpleCpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimpleCpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimpleCpu___024root*>(voidSelf);
    VSimpleCpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VSimpleCpu___024root__trace_decl_types(tracep);
    VSimpleCpu___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VSimpleCpu___024root__trace_register(VSimpleCpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSimpleCpu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSimpleCpu::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSimpleCpu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
