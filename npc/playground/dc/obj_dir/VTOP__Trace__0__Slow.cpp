// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+53,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"io_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"io_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+57,0,"io_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+58,0,"io_segRes",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"io_segZero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"io_segCout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"io_segOF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("TOP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+53,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"io_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"io_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+57,0,"io_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+58,0,"io_segRes",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"io_segZero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"io_segCout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"io_segOF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"alu_io_aluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+55,0,"alu_io_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"alu_io_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"alu_io_Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"alu_io_Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"alu_io_Cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"alu_io_OF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"seg7Res_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"seg7Res_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"seg7Res_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"seg7Res_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+53,0,"seg7Zero_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"seg7Zero_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"seg7Zero_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"seg7Zero_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+53,0,"seg7Cout_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"seg7Cout_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"seg7Cout_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"seg7Cout_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+53,0,"seg7OF_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"seg7OF_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"seg7OF_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"seg7OF_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"io_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+55,0,"io_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"io_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"io_Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"io_Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"io_Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_OF",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"addOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"subOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"notOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"andOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"orOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"xorOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"equOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"sltOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"Cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"adderB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"adderOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"adderOutBundle_Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"adderOutBundle_Cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"notRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"andRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"orRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"xorRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"equRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"sltRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("seg7Cout", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+53,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+17,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("seg7OF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+53,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+26,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("seg7Res", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+53,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+35,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+43,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("seg7Zero", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+53,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+44,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTOP___024root__trace_init_top(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_top\n"); );
    // Body
    VTOP___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTOP___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTOP___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTOP___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTOP___024root__trace_register(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTOP___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTOP___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTOP___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTOP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTOP___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_const_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VTOP___024root__trace_full_0_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTOP___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTOP___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTOP___024root__trace_full_0_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->TOP__DOT__alu_io_Result),4);
    bufp->fullBit(oldp+2,((1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__alu_io_Result)))))));
    bufp->fullBit(oldp+3,(vlSelf->TOP__DOT__alu_io_Cout));
    bufp->fullBit(oldp+4,(vlSelf->TOP__DOT__alu_io_OF));
    bufp->fullCData(oldp+5,((1U & (~ (IData)((0U != (IData)(vlSelf->TOP__DOT__alu_io_Result)))))),4);
    bufp->fullCData(oldp+6,(vlSelf->TOP__DOT__alu_io_Cout),4);
    bufp->fullCData(oldp+7,(vlSelf->TOP__DOT__alu_io_OF),4);
    bufp->fullCData(oldp+8,(vlSelf->TOP__DOT__alu__DOT__adderB),4);
    bufp->fullCData(oldp+9,((0x1fU & (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1))),5);
    bufp->fullCData(oldp+10,((0xfU & (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1))),4);
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1) 
                                  >> 4U))));
    bufp->fullCData(oldp+12,((1U & (~ (IData)((0U != 
                                               (0xfU 
                                                & (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1))))))),4);
    bufp->fullCData(oldp+13,(((((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_6) 
                                << 6U) | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_4) 
                                            << 4U) 
                                           | ((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_3) 
                                              << 3U)))) 
                              | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_0))))),7);
    bufp->fullCData(oldp+14,(((((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_6) 
                                << 6U) | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_4) 
                                            << 4U) 
                                           | ((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_3) 
                                              << 3U)))) 
                              | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_0))))),7);
    bufp->fullCData(oldp+15,(((((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_6) 
                                << 6U) | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_4) 
                                            << 4U) 
                                           | ((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_3) 
                                              << 3U)))) 
                              | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_0))))),7);
    bufp->fullCData(oldp+16,(((((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_6) 
                                << 6U) | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_4) 
                                            << 4U) 
                                           | ((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_3) 
                                              << 3U)))) 
                              | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_0))))),7);
    bufp->fullBit(oldp+17,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_0));
    bufp->fullBit(oldp+18,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_1));
    bufp->fullBit(oldp+19,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_2));
    bufp->fullBit(oldp+20,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_3));
    bufp->fullBit(oldp+21,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_4));
    bufp->fullBit(oldp+22,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_5));
    bufp->fullBit(oldp+23,(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_6));
    bufp->fullCData(oldp+24,((((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_2) 
                               << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_1) 
                                          << 1U) | (IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+25,((((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_6) 
                               << 3U) | (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_5) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_4) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7Cout__DOT__outReg_3))))),4);
    bufp->fullBit(oldp+26,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_0));
    bufp->fullBit(oldp+27,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_1));
    bufp->fullBit(oldp+28,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_2));
    bufp->fullBit(oldp+29,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_3));
    bufp->fullBit(oldp+30,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_4));
    bufp->fullBit(oldp+31,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_5));
    bufp->fullBit(oldp+32,(vlSelf->TOP__DOT__seg7OF__DOT__outReg_6));
    bufp->fullCData(oldp+33,((((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_2) 
                               << 2U) | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_1) 
                                          << 1U) | (IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+34,((((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_6) 
                               << 3U) | (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_5) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_4) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7OF__DOT__outReg_3))))),4);
    bufp->fullBit(oldp+35,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_0));
    bufp->fullBit(oldp+36,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_1));
    bufp->fullBit(oldp+37,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_2));
    bufp->fullBit(oldp+38,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_3));
    bufp->fullBit(oldp+39,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_4));
    bufp->fullBit(oldp+40,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_5));
    bufp->fullBit(oldp+41,(vlSelf->TOP__DOT__seg7Res__DOT__outReg_6));
    bufp->fullCData(oldp+42,((((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_2) 
                               << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_1) 
                                          << 1U) | (IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+43,((((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_6) 
                               << 3U) | (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_5) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_4) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7Res__DOT__outReg_3))))),4);
    bufp->fullBit(oldp+44,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_0));
    bufp->fullBit(oldp+45,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_1));
    bufp->fullBit(oldp+46,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_2));
    bufp->fullBit(oldp+47,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_3));
    bufp->fullBit(oldp+48,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_4));
    bufp->fullBit(oldp+49,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_5));
    bufp->fullBit(oldp+50,(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_6));
    bufp->fullCData(oldp+51,((((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_2) 
                               << 2U) | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_1) 
                                          << 1U) | (IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+52,((((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_6) 
                               << 3U) | (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_5) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_4) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7Zero__DOT__outReg_3))))),4);
    bufp->fullBit(oldp+53,(vlSelf->clock));
    bufp->fullBit(oldp+54,(vlSelf->reset));
    bufp->fullCData(oldp+55,(vlSelf->io_A),4);
    bufp->fullCData(oldp+56,(vlSelf->io_B),4);
    bufp->fullCData(oldp+57,(vlSelf->io_aluOp),3);
    bufp->fullCData(oldp+58,(vlSelf->io_segRes),8);
    bufp->fullCData(oldp+59,(vlSelf->io_segZero),8);
    bufp->fullCData(oldp+60,(vlSelf->io_segCout),8);
    bufp->fullCData(oldp+61,(vlSelf->io_segOF),8);
    bufp->fullBit(oldp+62,((0U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+63,((1U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+64,((2U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+65,((3U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+66,((4U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+67,((5U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+68,((7U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+69,((6U == (IData)(vlSelf->io_aluOp))));
    bufp->fullBit(oldp+70,((0U != (IData)(vlSelf->io_aluOp))));
    bufp->fullCData(oldp+71,((0xfU & (~ (IData)(vlSelf->io_A)))),4);
    bufp->fullCData(oldp+72,(((IData)(vlSelf->io_A) 
                              & (IData)(vlSelf->io_B))),4);
    bufp->fullCData(oldp+73,(((IData)(vlSelf->io_A) 
                              | (IData)(vlSelf->io_B))),4);
    bufp->fullCData(oldp+74,(((IData)(vlSelf->io_A) 
                              ^ (IData)(vlSelf->io_B))),4);
    bufp->fullCData(oldp+75,((1U & ((IData)(vlSelf->TOP__DOT__alu__DOT___sltRes_T_2) 
                                    | ((((IData)(vlSelf->io_A) 
                                         ^ (IData)(vlSelf->TOP__DOT__alu__DOT__adderB)) 
                                        & (IData)(vlSelf->TOP__DOT__alu__DOT___adderOut_T_1)) 
                                       >> 3U)))),4);
}
