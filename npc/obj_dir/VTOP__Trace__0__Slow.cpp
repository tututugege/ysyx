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
    tracep->declBit(c+124,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"ps2_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"ps2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"seg0n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+130,0,"seg1n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"seg2n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"seg3n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"seg4n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+134,0,"seg5n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+135,0,"seg6n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+136,0,"seg7n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+137,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("TOP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"ps2_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"ps2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"seg0n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+130,0,"seg1n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"seg2n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"seg3n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"seg4n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+134,0,"seg5n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+135,0,"seg6n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+136,0,"seg7n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+137,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("seg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+10,0,"data0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"data3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("switch", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+14+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ps2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"clrn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"ps2_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"ps2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"nextdata_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+137,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+23+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+31,0,"w_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"r_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"ps2_clk_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+35,0,"sampling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("seg7[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mySeg7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+38,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("seg7[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mySeg7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+49,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+57,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("seg7[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mySeg7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+59,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+60,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+68,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("seg7[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mySeg7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+70,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+71,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+79,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("seg7[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mySeg7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+82,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+90,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("seg7[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mySeg7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+92,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+93,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("seg7[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mySeg7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+103,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+104,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+112,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("seg7[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mySeg7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+115,0,"outReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"outReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"outReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"outReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"outReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"outReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"outReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"io_out_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+123,0,"io_out_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
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

VL_ATTR_COLD void VTOP___024root__trace_const_0_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTOP___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_const_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTOP___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTOP___024root__trace_const_0_sub_0(VTOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+140,(0U));
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
    bufp->fullCData(oldp+1,(vlSelf->TOP__DOT__ps2__DOT__fifo
                            [vlSelf->TOP__DOT__ps2__DOT__r_ptr]),8);
    bufp->fullCData(oldp+2,(vlSelf->TOP__DOT__seg[0]),8);
    bufp->fullCData(oldp+3,(vlSelf->TOP__DOT__seg[1]),8);
    bufp->fullCData(oldp+4,(vlSelf->TOP__DOT__seg[2]),8);
    bufp->fullCData(oldp+5,(vlSelf->TOP__DOT__seg[3]),8);
    bufp->fullCData(oldp+6,(vlSelf->TOP__DOT__seg[4]),8);
    bufp->fullCData(oldp+7,(vlSelf->TOP__DOT__seg[5]),8);
    bufp->fullCData(oldp+8,(vlSelf->TOP__DOT__seg[6]),8);
    bufp->fullCData(oldp+9,(vlSelf->TOP__DOT__seg[7]),8);
    bufp->fullCData(oldp+10,(vlSelf->TOP__DOT__data0),8);
    bufp->fullCData(oldp+11,(vlSelf->TOP__DOT__data1),8);
    bufp->fullCData(oldp+12,(vlSelf->TOP__DOT__data2),8);
    bufp->fullCData(oldp+13,(vlSelf->TOP__DOT__data3),8);
    bufp->fullCData(oldp+14,(vlSelf->TOP__DOT__switch[0]),4);
    bufp->fullCData(oldp+15,(vlSelf->TOP__DOT__switch[1]),4);
    bufp->fullCData(oldp+16,(vlSelf->TOP__DOT__switch[2]),4);
    bufp->fullCData(oldp+17,(vlSelf->TOP__DOT__switch[3]),4);
    bufp->fullCData(oldp+18,(vlSelf->TOP__DOT__switch[4]),4);
    bufp->fullCData(oldp+19,(vlSelf->TOP__DOT__switch[5]),4);
    bufp->fullCData(oldp+20,(vlSelf->TOP__DOT__switch[6]),4);
    bufp->fullCData(oldp+21,(vlSelf->TOP__DOT__switch[7]),4);
    bufp->fullSData(oldp+22,(vlSelf->TOP__DOT__ps2__DOT__buffer),10);
    bufp->fullCData(oldp+23,(vlSelf->TOP__DOT__ps2__DOT__fifo[0]),8);
    bufp->fullCData(oldp+24,(vlSelf->TOP__DOT__ps2__DOT__fifo[1]),8);
    bufp->fullCData(oldp+25,(vlSelf->TOP__DOT__ps2__DOT__fifo[2]),8);
    bufp->fullCData(oldp+26,(vlSelf->TOP__DOT__ps2__DOT__fifo[3]),8);
    bufp->fullCData(oldp+27,(vlSelf->TOP__DOT__ps2__DOT__fifo[4]),8);
    bufp->fullCData(oldp+28,(vlSelf->TOP__DOT__ps2__DOT__fifo[5]),8);
    bufp->fullCData(oldp+29,(vlSelf->TOP__DOT__ps2__DOT__fifo[6]),8);
    bufp->fullCData(oldp+30,(vlSelf->TOP__DOT__ps2__DOT__fifo[7]),8);
    bufp->fullCData(oldp+31,(vlSelf->TOP__DOT__ps2__DOT__w_ptr),3);
    bufp->fullCData(oldp+32,(vlSelf->TOP__DOT__ps2__DOT__r_ptr),3);
    bufp->fullCData(oldp+33,(vlSelf->TOP__DOT__ps2__DOT__count),4);
    bufp->fullCData(oldp+34,(vlSelf->TOP__DOT__ps2__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+35,((IData)((4U == (6U & (IData)(vlSelf->TOP__DOT__ps2__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+36,((0xfU & (IData)(vlSelf->TOP__DOT__data3))),4);
    bufp->fullCData(oldp+37,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_6) 
                                << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_4) 
                                            << 4U) 
                                           | ((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_3) 
                                              << 3U)))) 
                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_0))))),7);
    bufp->fullBit(oldp+38,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_0));
    bufp->fullBit(oldp+39,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_1));
    bufp->fullBit(oldp+40,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_2));
    bufp->fullBit(oldp+41,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_3));
    bufp->fullBit(oldp+42,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_4));
    bufp->fullBit(oldp+43,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_5));
    bufp->fullBit(oldp+44,(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_6));
    bufp->fullCData(oldp+45,((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_2) 
                               << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_1) 
                                          << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+46,((((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_6) 
                               << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_5) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_4) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__0__KET____DOT__mySeg7__DOT__outReg_3))))),4);
    bufp->fullCData(oldp+47,((0xfU & ((IData)(vlSelf->TOP__DOT__data3) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+48,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_6) 
                                << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_4) 
                                            << 4U) 
                                           | ((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_3) 
                                              << 3U)))) 
                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_0))))),7);
    bufp->fullBit(oldp+49,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_0));
    bufp->fullBit(oldp+50,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_1));
    bufp->fullBit(oldp+51,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_2));
    bufp->fullBit(oldp+52,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_3));
    bufp->fullBit(oldp+53,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_4));
    bufp->fullBit(oldp+54,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_5));
    bufp->fullBit(oldp+55,(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_6));
    bufp->fullCData(oldp+56,((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_2) 
                               << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_1) 
                                          << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+57,((((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_6) 
                               << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_5) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_4) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__1__KET____DOT__mySeg7__DOT__outReg_3))))),4);
    bufp->fullCData(oldp+58,((0xfU & (IData)(vlSelf->TOP__DOT__data2))),4);
    bufp->fullCData(oldp+59,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_6) 
                                << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_4) 
                                            << 4U) 
                                           | ((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_3) 
                                              << 3U)))) 
                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_0))))),7);
    bufp->fullBit(oldp+60,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_0));
    bufp->fullBit(oldp+61,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_1));
    bufp->fullBit(oldp+62,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_2));
    bufp->fullBit(oldp+63,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_3));
    bufp->fullBit(oldp+64,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_4));
    bufp->fullBit(oldp+65,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_5));
    bufp->fullBit(oldp+66,(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_6));
    bufp->fullCData(oldp+67,((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_2) 
                               << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_1) 
                                          << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+68,((((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_6) 
                               << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_5) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_4) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__2__KET____DOT__mySeg7__DOT__outReg_3))))),4);
    bufp->fullCData(oldp+69,((0xfU & ((IData)(vlSelf->TOP__DOT__data2) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+70,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_6) 
                                << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_4) 
                                            << 4U) 
                                           | ((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_3) 
                                              << 3U)))) 
                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_0))))),7);
    bufp->fullBit(oldp+71,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_0));
    bufp->fullBit(oldp+72,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_1));
    bufp->fullBit(oldp+73,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_2));
    bufp->fullBit(oldp+74,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_3));
    bufp->fullBit(oldp+75,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_4));
    bufp->fullBit(oldp+76,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_5));
    bufp->fullBit(oldp+77,(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_6));
    bufp->fullCData(oldp+78,((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_2) 
                               << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_1) 
                                          << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+79,((((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_6) 
                               << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_5) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_4) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__3__KET____DOT__mySeg7__DOT__outReg_3))))),4);
    bufp->fullCData(oldp+80,((0xfU & (IData)(vlSelf->TOP__DOT__data1))),4);
    bufp->fullCData(oldp+81,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_6) 
                                << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_4) 
                                            << 4U) 
                                           | ((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_3) 
                                              << 3U)))) 
                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_0))))),7);
    bufp->fullBit(oldp+82,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_0));
    bufp->fullBit(oldp+83,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_1));
    bufp->fullBit(oldp+84,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_2));
    bufp->fullBit(oldp+85,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_3));
    bufp->fullBit(oldp+86,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_4));
    bufp->fullBit(oldp+87,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_5));
    bufp->fullBit(oldp+88,(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_6));
    bufp->fullCData(oldp+89,((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_2) 
                               << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_1) 
                                          << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+90,((((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_6) 
                               << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_5) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_4) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__4__KET____DOT__mySeg7__DOT__outReg_3))))),4);
    bufp->fullCData(oldp+91,((0xfU & ((IData)(vlSelf->TOP__DOT__data1) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+92,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_6) 
                                << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_5) 
                                           << 5U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_4) 
                                            << 4U) 
                                           | ((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_3) 
                                              << 3U)))) 
                              | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_2) 
                                  << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_0))))),7);
    bufp->fullBit(oldp+93,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_0));
    bufp->fullBit(oldp+94,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_1));
    bufp->fullBit(oldp+95,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_2));
    bufp->fullBit(oldp+96,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_3));
    bufp->fullBit(oldp+97,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_4));
    bufp->fullBit(oldp+98,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_5));
    bufp->fullBit(oldp+99,(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_6));
    bufp->fullCData(oldp+100,((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_2) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_1) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+101,((((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_6) 
                                << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_5) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_4) 
                                            << 1U) 
                                           | (IData)(vlSelf->TOP__DOT__seg7__BRA__5__KET____DOT__mySeg7__DOT__outReg_3))))),4);
    bufp->fullCData(oldp+102,((0xfU & (IData)(vlSelf->TOP__DOT__data0))),4);
    bufp->fullCData(oldp+103,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_6) 
                                 << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_5) 
                                            << 5U) 
                                           | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_4) 
                                               << 4U) 
                                              | ((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_3) 
                                                 << 3U)))) 
                               | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_2) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_1) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_0))))),7);
    bufp->fullBit(oldp+104,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_0));
    bufp->fullBit(oldp+105,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_1));
    bufp->fullBit(oldp+106,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_2));
    bufp->fullBit(oldp+107,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_3));
    bufp->fullBit(oldp+108,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_4));
    bufp->fullBit(oldp+109,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_5));
    bufp->fullBit(oldp+110,(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_6));
    bufp->fullCData(oldp+111,((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_2) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_1) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+112,((((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_6) 
                                << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_5) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_4) 
                                            << 1U) 
                                           | (IData)(vlSelf->TOP__DOT__seg7__BRA__6__KET____DOT__mySeg7__DOT__outReg_3))))),4);
    bufp->fullCData(oldp+113,((0xfU & ((IData)(vlSelf->TOP__DOT__data0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+114,(((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_6) 
                                 << 6U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_5) 
                                            << 5U) 
                                           | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_4) 
                                               << 4U) 
                                              | ((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_3) 
                                                 << 3U)))) 
                               | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_2) 
                                   << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_1) 
                                              << 1U) 
                                             | (IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_0))))),7);
    bufp->fullBit(oldp+115,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_0));
    bufp->fullBit(oldp+116,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_1));
    bufp->fullBit(oldp+117,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_2));
    bufp->fullBit(oldp+118,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_3));
    bufp->fullBit(oldp+119,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_4));
    bufp->fullBit(oldp+120,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_5));
    bufp->fullBit(oldp+121,(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_6));
    bufp->fullCData(oldp+122,((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_2) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_1) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_0)))),3);
    bufp->fullCData(oldp+123,((((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_6) 
                                << 3U) | (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_5) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_4) 
                                            << 1U) 
                                           | (IData)(vlSelf->TOP__DOT__seg7__BRA__7__KET____DOT__mySeg7__DOT__outReg_3))))),4);
    bufp->fullBit(oldp+124,(vlSelf->clock));
    bufp->fullBit(oldp+125,(vlSelf->reset));
    bufp->fullBit(oldp+126,(vlSelf->clr));
    bufp->fullBit(oldp+127,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+128,(vlSelf->ps2_data));
    bufp->fullCData(oldp+129,(vlSelf->seg0n),8);
    bufp->fullCData(oldp+130,(vlSelf->seg1n),8);
    bufp->fullCData(oldp+131,(vlSelf->seg2n),8);
    bufp->fullCData(oldp+132,(vlSelf->seg3n),8);
    bufp->fullCData(oldp+133,(vlSelf->seg4n),8);
    bufp->fullCData(oldp+134,(vlSelf->seg5n),8);
    bufp->fullCData(oldp+135,(vlSelf->seg6n),8);
    bufp->fullCData(oldp+136,(vlSelf->seg7n),8);
    bufp->fullBit(oldp+137,(vlSelf->ready));
    bufp->fullBit(oldp+138,(vlSelf->overflow));
    bufp->fullBit(oldp+139,((1U & (~ (IData)(vlSelf->clr)))));
}
