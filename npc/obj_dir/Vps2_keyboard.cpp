// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vps2_keyboard__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vps2_keyboard::Vps2_keyboard(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vps2_keyboard__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , clrn{vlSymsp->TOP.clrn}
    , ps2_clk{vlSymsp->TOP.ps2_clk}
    , ps2_data{vlSymsp->TOP.ps2_data}
    , data{vlSymsp->TOP.data}
    , ready{vlSymsp->TOP.ready}
    , nextdata_n{vlSymsp->TOP.nextdata_n}
    , overflow{vlSymsp->TOP.overflow}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vps2_keyboard::Vps2_keyboard(const char* _vcname__)
    : Vps2_keyboard(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vps2_keyboard::~Vps2_keyboard() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vps2_keyboard___024root___eval_debug_assertions(Vps2_keyboard___024root* vlSelf);
#endif  // VL_DEBUG
void Vps2_keyboard___024root___eval_static(Vps2_keyboard___024root* vlSelf);
void Vps2_keyboard___024root___eval_initial(Vps2_keyboard___024root* vlSelf);
void Vps2_keyboard___024root___eval_settle(Vps2_keyboard___024root* vlSelf);
void Vps2_keyboard___024root___eval(Vps2_keyboard___024root* vlSelf);

void Vps2_keyboard::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vps2_keyboard::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vps2_keyboard___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vps2_keyboard___024root___eval_static(&(vlSymsp->TOP));
        Vps2_keyboard___024root___eval_initial(&(vlSymsp->TOP));
        Vps2_keyboard___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vps2_keyboard___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vps2_keyboard::eventsPending() { return false; }

uint64_t Vps2_keyboard::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vps2_keyboard::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vps2_keyboard___024root___eval_final(Vps2_keyboard___024root* vlSelf);

VL_ATTR_COLD void Vps2_keyboard::final() {
    Vps2_keyboard___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vps2_keyboard::hierName() const { return vlSymsp->name(); }
const char* Vps2_keyboard::modelName() const { return "Vps2_keyboard"; }
unsigned Vps2_keyboard::threads() const { return 1; }
void Vps2_keyboard::prepareClone() const { contextp()->prepareClone(); }
void Vps2_keyboard::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vps2_keyboard::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vps2_keyboard___024root__trace_decl_types(VerilatedVcd* tracep);

void Vps2_keyboard___024root__trace_init_top(Vps2_keyboard___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vps2_keyboard___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vps2_keyboard___024root*>(voidSelf);
    Vps2_keyboard__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vps2_keyboard___024root__trace_decl_types(tracep);
    Vps2_keyboard___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vps2_keyboard___024root__trace_register(Vps2_keyboard___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vps2_keyboard::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vps2_keyboard::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vps2_keyboard___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
