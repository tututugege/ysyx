// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMultiplier__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMultiplier::VMultiplier(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMultiplier__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_go{vlSymsp->TOP.io_go}
    , io_xSigned{vlSymsp->TOP.io_xSigned}
    , io_ySigned{vlSymsp->TOP.io_ySigned}
    , io_x{vlSymsp->TOP.io_x}
    , io_y{vlSymsp->TOP.io_y}
    , io_res{vlSymsp->TOP.io_res}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMultiplier::VMultiplier(const char* _vcname__)
    : VMultiplier(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMultiplier::~VMultiplier() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMultiplier___024root___eval_debug_assertions(VMultiplier___024root* vlSelf);
#endif  // VL_DEBUG
void VMultiplier___024root___eval_static(VMultiplier___024root* vlSelf);
void VMultiplier___024root___eval_initial(VMultiplier___024root* vlSelf);
void VMultiplier___024root___eval_settle(VMultiplier___024root* vlSelf);
void VMultiplier___024root___eval(VMultiplier___024root* vlSelf);

void VMultiplier::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMultiplier::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMultiplier___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMultiplier___024root___eval_static(&(vlSymsp->TOP));
        VMultiplier___024root___eval_initial(&(vlSymsp->TOP));
        VMultiplier___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMultiplier___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMultiplier::eventsPending() { return false; }

uint64_t VMultiplier::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMultiplier::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMultiplier___024root___eval_final(VMultiplier___024root* vlSelf);

VL_ATTR_COLD void VMultiplier::final() {
    VMultiplier___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMultiplier::hierName() const { return vlSymsp->name(); }
const char* VMultiplier::modelName() const { return "VMultiplier"; }
unsigned VMultiplier::threads() const { return 1; }
void VMultiplier::prepareClone() const { contextp()->prepareClone(); }
void VMultiplier::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VMultiplier::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VMultiplier___024root__trace_decl_types(VerilatedVcd* tracep);

void VMultiplier___024root__trace_init_top(VMultiplier___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMultiplier___024root*>(voidSelf);
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VMultiplier___024root__trace_decl_types(tracep);
    VMultiplier___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VMultiplier___024root__trace_register(VMultiplier___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMultiplier::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VMultiplier::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMultiplier___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
