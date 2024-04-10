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
    tracep->declBit(c+1001,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1003,0,"io_commit_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"io_commit_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"io_commit_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1006,0,"io_commit_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1007,0,"io_commit_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1008,0,"io_commit_commit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1009,0,"io_commit_halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("TOP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1001,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1003,0,"io_commit_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"io_commit_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"io_commit_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1006,0,"io_commit_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1007,0,"io_commit_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1008,0,"io_commit_commit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1009,0,"io_commit_halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"IF_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"IF_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"IF_io_inValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"IF_io_Pre2IF_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1010,0,"IF_io_Pre2IF_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"IF_io_IF2ID_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"IF_io_IF2ID_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"IF_io_IF2ID_bits_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"IF_io_IF2ID_bits_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"IF_io_r_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"IF_io_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"IF_io_r_bits_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"IF_io_arFireReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"IF_io_brTaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"IF_io_pcBr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"IF_io_pcNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"IF_io_pcBrEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"IF_io_pcBrRecord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"ID_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"ID_io_inValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"ID_io_IF2ID_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ID_io_IF2ID_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"ID_io_IF2ID_bits_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"ID_io_IF2ID_bits_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"ID_io_ID2EX_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"ID_io_ID2EX_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"ID_io_ID2EX_bits_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"ID_io_ID2EX_bits_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"ID_io_ID2EX_bits_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+21,0,"ID_io_ID2EX_bits_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"ID_io_ID2EX_bits_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"ID_io_ID2EX_bits_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"ID_io_ID2EX_bits_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"ID_io_ID2EX_bits_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1011,0,"ID_io_ID2EX_bits_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"ID_io_ID2EX_bits_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"ID_io_ID2EX_bits_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"ID_io_ID2EX_bits_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"ID_io_ID2EX_bits_aluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"ID_io_ID2EX_bits_aluSrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+30,0,"ID_io_ID2EX_bits_aluSrc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+31,0,"ID_io_ID2EX_bits_pcSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+32,0,"ID_io_ID2EX_bits_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"ID_io_ID2EX_bits_csrRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"ID_io_ID2EX_bits_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"ID_io_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1007,0,"ID_io_regWdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"ID_io_regWaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1001,0,"EX_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"EX_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"EX_io_inValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"EX_io_ID2EX_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"EX_io_ID2EX_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"EX_io_ID2EX_bits_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"EX_io_ID2EX_bits_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"EX_io_ID2EX_bits_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+39,0,"EX_io_ID2EX_bits_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"EX_io_ID2EX_bits_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"EX_io_ID2EX_bits_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"EX_io_ID2EX_bits_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"EX_io_ID2EX_bits_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"EX_io_ID2EX_bits_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"EX_io_ID2EX_bits_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"EX_io_ID2EX_bits_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"EX_io_ID2EX_bits_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"EX_io_ID2EX_bits_aluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"EX_io_ID2EX_bits_aluSrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"EX_io_ID2EX_bits_aluSrc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"EX_io_ID2EX_bits_pcSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+52,0,"EX_io_ID2EX_bits_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"EX_io_ID2EX_bits_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"EX_io_EX2MEM_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"EX_io_EX2MEM_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"EX_io_EX2MEM_bits_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"EX_io_EX2MEM_bits_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"EX_io_EX2MEM_bits_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+39,0,"EX_io_EX2MEM_bits_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"EX_io_EX2MEM_bits_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"EX_io_EX2MEM_bits_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"EX_io_EX2MEM_bits_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"EX_io_EX2MEM_bits_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"EX_io_EX2MEM_bits_aluOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"EX_io_EX2MEM_bits_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"EX_io_pcBr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"EX_io_brTaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"EX_io_bypassMEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1007,0,"EX_io_bypassWB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"EX_io_hazard1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"EX_io_hazard2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"EX_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"MEM_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"MEM_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"MEM_io_inValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"MEM_io_EX2MEM_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"MEM_io_EX2MEM_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"MEM_io_EX2MEM_bits_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"MEM_io_EX2MEM_bits_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"MEM_io_EX2MEM_bits_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+66,0,"MEM_io_EX2MEM_bits_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"MEM_io_EX2MEM_bits_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"MEM_io_EX2MEM_bits_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"MEM_io_EX2MEM_bits_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"MEM_io_EX2MEM_bits_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"MEM_io_EX2MEM_bits_aluOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"MEM_io_EX2MEM_bits_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"MEM_io_MEM2WB_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"MEM_io_MEM2WB_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"MEM_io_MEM2WB_bits_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"MEM_io_MEM2WB_bits_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"MEM_io_MEM2WB_bits_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+67,0,"MEM_io_MEM2WB_bits_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"MEM_io_MEM2WB_bits_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"MEM_io_MEM2WB_bits_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+70,0,"MEM_io_MEM2WB_bits_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"MEM_io_MEM2WB_bits_aluOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"MEM_io_MEM2WB_bits_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"MEM_io_ar_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"MEM_io_ar_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"MEM_io_ar_bits_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1015,0,"MEM_io_aw_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"MEM_io_aw_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"MEM_io_aw_bits_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"MEM_io_aw_bits_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"MEM_io_w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"MEM_io_w_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"MEM_io_w_bits_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"MEM_io_w_bits_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1001,0,"WB_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"WB_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"WB_io_inValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"WB_io_MEM2WB_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"WB_io_MEM2WB_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1003,0,"WB_io_MEM2WB_bits_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"WB_io_MEM2WB_bits_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"WB_io_MEM2WB_bits_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+80,0,"WB_io_MEM2WB_bits_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"WB_io_MEM2WB_bits_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1005,0,"WB_io_MEM2WB_bits_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+82,0,"WB_io_MEM2WB_bits_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"WB_io_MEM2WB_bits_aluOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"WB_io_MEM2WB_bits_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"WB_io_WBout_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"WB_io_WBout_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1003,0,"WB_io_WBout_bits_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"WB_io_WBout_bits_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"WB_io_WBout_bits_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1006,0,"WB_io_WBout_bits_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1007,0,"WB_io_WBout_bits_regWdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1009,0,"WB_io_WBout_bits_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"WB_io_r_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"WB_io_r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"WB_io_r_bits_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1015,0,"WB_io_b_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"WB_io_b_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"InstRam_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"InstRam_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"InstRam_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"InstRam_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"InstRam_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1018,0,"InstRam_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1017,0,"InstRam_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1017,0,"InstRam_awprot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"InstRam_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"InstRam_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1018,0,"InstRam_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1019,0,"InstRam_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1016,0,"InstRam_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"InstRam_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"InstRam_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"InstRam_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"InstRam_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"InstRam_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"InstRam_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1020,0,"InstRam_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1017,0,"InstRam_arprot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"InstRam_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"InstRam_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"InstRam_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"InstRam_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1001,0,"DataRam_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"DataRam_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"DataRam_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"DataRam_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"DataRam_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"DataRam_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"DataRam_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1017,0,"DataRam_awprot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"DataRam_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"DataRam_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"DataRam_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"DataRam_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1015,0,"DataRam_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"DataRam_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"DataRam_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"DataRam_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"DataRam_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"DataRam_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"DataRam_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1020,0,"DataRam_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1017,0,"DataRam_arprot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"DataRam_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"DataRam_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"DataRam_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+87,0,"DataRam_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+90,0,"Pre2IFValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"IF2IDValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"ID2EXValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"EX2MEMValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"MEM2WBValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"arFireReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"instAxiLite_ar_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"instAxiLite_ar_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"brTaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"IFoutValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"ID_io_IF2ID_bits_r_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"ID_io_IF2ID_bits_r_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"IDoutValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"EX_io_ID2EX_bits_r_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"EX_io_ID2EX_bits_r_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"EX_io_ID2EX_bits_r_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+39,0,"EX_io_ID2EX_bits_r_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"EX_io_ID2EX_bits_r_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"EX_io_ID2EX_bits_r_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"EX_io_ID2EX_bits_r_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"EX_io_ID2EX_bits_r_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"EX_io_ID2EX_bits_r_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"EX_io_ID2EX_bits_r_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"EX_io_ID2EX_bits_r_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"EX_io_ID2EX_bits_r_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"EX_io_ID2EX_bits_r_aluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"EX_io_ID2EX_bits_r_aluSrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"EX_io_ID2EX_bits_r_aluSrc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"EX_io_ID2EX_bits_r_pcSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+52,0,"EX_io_ID2EX_bits_r_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"EX_io_ID2EX_bits_r_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"MEMRegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"WBRegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"hazard1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"hazard2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"hazard1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"hazard2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"EXoutValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"MEM_io_EX2MEM_bits_r_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"MEM_io_EX2MEM_bits_r_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"MEM_io_EX2MEM_bits_r_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+66,0,"MEM_io_EX2MEM_bits_r_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"MEM_io_EX2MEM_bits_r_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"MEM_io_EX2MEM_bits_r_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"MEM_io_EX2MEM_bits_r_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"MEM_io_EX2MEM_bits_r_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"MEM_io_EX2MEM_bits_r_aluOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"MEM_io_EX2MEM_bits_r_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"MEMoutValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"WB_io_MEM2WB_bits_r_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"WB_io_MEM2WB_bits_r_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"WB_io_MEM2WB_bits_r_func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+80,0,"WB_io_MEM2WB_bits_r_memRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"WB_io_MEM2WB_bits_r_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"WB_io_MEM2WB_bits_r_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+82,0,"WB_io_MEM2WB_bits_r_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"WB_io_MEM2WB_bits_r_aluOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"WB_io_MEM2WB_bits_r_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DataRam", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1001,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1017,0,"awprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1015,0,"bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1020,0,"arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1017,0,"arprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+87,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1021,0,"READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1020,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1022,0,"VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+104,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"awstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+106,0,"wstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+107,0,"nxt_rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1023,0,"nxt_awstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+108,0,"nxt_wstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+87,0,"ReadDataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("EX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1001,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"io_inValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_ID2EX_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"io_ID2EX_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"io_ID2EX_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"io_ID2EX_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"io_ID2EX_bits_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+39,0,"io_ID2EX_bits_memWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"io_ID2EX_bits_memRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"io_ID2EX_bits_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"io_ID2EX_bits_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"io_ID2EX_bits_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"io_ID2EX_bits_rdata1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"io_ID2EX_bits_rdata2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"io_ID2EX_bits_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_ID2EX_bits_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_ID2EX_bits_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"io_ID2EX_bits_aluSrc1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+50,0,"io_ID2EX_bits_aluSrc2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"io_ID2EX_bits_pcSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+52,0,"io_ID2EX_bits_jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"io_ID2EX_bits_halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_EX2MEM_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"io_EX2MEM_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"io_EX2MEM_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"io_EX2MEM_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"io_EX2MEM_bits_func3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+39,0,"io_EX2MEM_bits_memWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"io_EX2MEM_bits_memRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"io_EX2MEM_bits_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+56,0,"io_EX2MEM_bits_rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"io_EX2MEM_bits_regWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"io_EX2MEM_bits_aluOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"io_EX2MEM_bits_halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"io_pcBr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"io_brTaken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_bypassMEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1007,0,"io_bypassWB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"io_hazard1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"io_hazard2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"Alu_io_AluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"Alu_io_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"Alu_io_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"Alu_io_Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"Alu_io_Zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"Alu_io_Cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"bypassReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"hazard1Reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"hazard2Reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"pcBrImm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+118,0,"brEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"brCondTaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"brTaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"io_AluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"io_A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"io_B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"io_Result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"io_Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"io_Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"Shifter_io_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"Shifter_io_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"Shifter_io_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"Shifter_io_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"Shifter_io_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"Operation_invInputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+126,0,"Operation_andMatrixInput_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"Operation_andMatrixInput_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"Operation_andMatrixInput_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"Operation_andMatrixInput_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"Operation_andMatrixInput_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"Operation_andMatrixInput_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"Operation_andMatrixInput_2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"Operation_andMatrixInput_2_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"Operation_orMatrixOutputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+134,0,"Operation_invMatrixOutputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+135,0,"AddOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"SubOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"SltOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"SltuOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"XorOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"OrOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"AndOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"SllOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"SrlOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"SraOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"Cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"AdderB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+145,0,"AdderOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+147,0,"AdderOutBundle_Result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+148,0,"AdderOutBundle_Cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"XorRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"OrRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"AndRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"SltRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"SltuRes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"ShifterOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Shifter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"io_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_signed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"io_shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"io_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"io_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+154,0,"SelectorNet_0_io_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"SelectorNet_0_io_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"SelectorNet_0_io_din_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+156,0,"SelectorNet_0_io_din_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+157,0,"SelectorNet_0_io_din_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+158,0,"SelectorNet_0_io_din_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+159,0,"SelectorNet_0_io_din_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+160,0,"SelectorNet_0_io_din_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+161,0,"SelectorNet_0_io_din_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+162,0,"SelectorNet_0_io_din_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+163,0,"SelectorNet_0_io_din_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"SelectorNet_0_io_din_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+165,0,"SelectorNet_0_io_din_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+166,0,"SelectorNet_0_io_din_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"SelectorNet_0_io_din_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+168,0,"SelectorNet_0_io_din_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"SelectorNet_0_io_din_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+170,0,"SelectorNet_0_io_din_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+171,0,"SelectorNet_0_io_din_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+172,0,"SelectorNet_0_io_din_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+173,0,"SelectorNet_0_io_din_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+174,0,"SelectorNet_0_io_din_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+175,0,"SelectorNet_0_io_din_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+176,0,"SelectorNet_0_io_din_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+177,0,"SelectorNet_0_io_din_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+178,0,"SelectorNet_0_io_din_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"SelectorNet_0_io_din_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+180,0,"SelectorNet_0_io_din_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+181,0,"SelectorNet_0_io_din_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+182,0,"SelectorNet_0_io_din_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"SelectorNet_0_io_din_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"SelectorNet_0_io_din_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"SelectorNet_0_io_din_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+186,0,"SelectorNet_0_io_din_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+187,0,"SelectorNet_0_io_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"SelectorNet_1_io_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"SelectorNet_1_io_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"SelectorNet_1_io_din_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+190,0,"SelectorNet_1_io_din_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"SelectorNet_1_io_din_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"SelectorNet_1_io_din_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"SelectorNet_1_io_din_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"SelectorNet_1_io_din_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+195,0,"SelectorNet_1_io_din_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"SelectorNet_1_io_din_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+197,0,"SelectorNet_1_io_din_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+198,0,"SelectorNet_1_io_din_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+199,0,"SelectorNet_1_io_din_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+200,0,"SelectorNet_1_io_din_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"SelectorNet_1_io_din_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+202,0,"SelectorNet_1_io_din_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+203,0,"SelectorNet_1_io_din_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+204,0,"SelectorNet_1_io_din_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+205,0,"SelectorNet_1_io_din_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+206,0,"SelectorNet_1_io_din_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+207,0,"SelectorNet_1_io_din_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+208,0,"SelectorNet_1_io_din_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+209,0,"SelectorNet_1_io_din_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+210,0,"SelectorNet_1_io_din_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+211,0,"SelectorNet_1_io_din_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"SelectorNet_1_io_din_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+213,0,"SelectorNet_1_io_din_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+214,0,"SelectorNet_1_io_din_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+215,0,"SelectorNet_1_io_din_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+216,0,"SelectorNet_1_io_din_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+217,0,"SelectorNet_1_io_din_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+218,0,"SelectorNet_1_io_din_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,0,"SelectorNet_1_io_din_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+220,0,"SelectorNet_1_io_din_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+221,0,"SelectorNet_1_io_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,0,"SelectorNet_2_io_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"SelectorNet_2_io_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"SelectorNet_2_io_din_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+224,0,"SelectorNet_2_io_din_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"SelectorNet_2_io_din_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,0,"SelectorNet_2_io_din_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"SelectorNet_2_io_din_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+228,0,"SelectorNet_2_io_din_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+229,0,"SelectorNet_2_io_din_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+230,0,"SelectorNet_2_io_din_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"SelectorNet_2_io_din_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+232,0,"SelectorNet_2_io_din_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+233,0,"SelectorNet_2_io_din_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+234,0,"SelectorNet_2_io_din_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+235,0,"SelectorNet_2_io_din_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+236,0,"SelectorNet_2_io_din_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+237,0,"SelectorNet_2_io_din_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+238,0,"SelectorNet_2_io_din_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"SelectorNet_2_io_din_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,0,"SelectorNet_2_io_din_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+241,0,"SelectorNet_2_io_din_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+242,0,"SelectorNet_2_io_din_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+243,0,"SelectorNet_2_io_din_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+244,0,"SelectorNet_2_io_din_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+245,0,"SelectorNet_2_io_din_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+246,0,"SelectorNet_2_io_din_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+247,0,"SelectorNet_2_io_din_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+248,0,"SelectorNet_2_io_din_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+249,0,"SelectorNet_2_io_din_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+250,0,"SelectorNet_2_io_din_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+251,0,"SelectorNet_2_io_din_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+252,0,"SelectorNet_2_io_din_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+253,0,"SelectorNet_2_io_din_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+254,0,"SelectorNet_2_io_din_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+255,0,"SelectorNet_2_io_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+256,0,"SelectorNet_3_io_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"SelectorNet_3_io_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"SelectorNet_3_io_din_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+258,0,"SelectorNet_3_io_din_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+259,0,"SelectorNet_3_io_din_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+260,0,"SelectorNet_3_io_din_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+261,0,"SelectorNet_3_io_din_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+262,0,"SelectorNet_3_io_din_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+263,0,"SelectorNet_3_io_din_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+264,0,"SelectorNet_3_io_din_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+265,0,"SelectorNet_3_io_din_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+266,0,"SelectorNet_3_io_din_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+267,0,"SelectorNet_3_io_din_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+268,0,"SelectorNet_3_io_din_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+269,0,"SelectorNet_3_io_din_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+270,0,"SelectorNet_3_io_din_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+271,0,"SelectorNet_3_io_din_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+272,0,"SelectorNet_3_io_din_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+273,0,"SelectorNet_3_io_din_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+274,0,"SelectorNet_3_io_din_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"SelectorNet_3_io_din_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+276,0,"SelectorNet_3_io_din_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+277,0,"SelectorNet_3_io_din_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+278,0,"SelectorNet_3_io_din_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"SelectorNet_3_io_din_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+280,0,"SelectorNet_3_io_din_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+281,0,"SelectorNet_3_io_din_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+282,0,"SelectorNet_3_io_din_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+283,0,"SelectorNet_3_io_din_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"SelectorNet_3_io_din_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+285,0,"SelectorNet_3_io_din_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+286,0,"SelectorNet_3_io_din_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+287,0,"SelectorNet_3_io_din_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+288,0,"SelectorNet_3_io_din_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+289,0,"SelectorNet_3_io_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+290,0,"SelectorNet_4_io_shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"SelectorNet_4_io_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"SelectorNet_4_io_din_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+292,0,"SelectorNet_4_io_din_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+293,0,"SelectorNet_4_io_din_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+294,0,"SelectorNet_4_io_din_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"SelectorNet_4_io_din_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+296,0,"SelectorNet_4_io_din_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+297,0,"SelectorNet_4_io_din_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+298,0,"SelectorNet_4_io_din_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+299,0,"SelectorNet_4_io_din_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+300,0,"SelectorNet_4_io_din_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+301,0,"SelectorNet_4_io_din_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+302,0,"SelectorNet_4_io_din_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+303,0,"SelectorNet_4_io_din_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+304,0,"SelectorNet_4_io_din_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+305,0,"SelectorNet_4_io_din_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+306,0,"SelectorNet_4_io_din_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+307,0,"SelectorNet_4_io_din_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+308,0,"SelectorNet_4_io_din_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+309,0,"SelectorNet_4_io_din_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+310,0,"SelectorNet_4_io_din_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+311,0,"SelectorNet_4_io_din_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+312,0,"SelectorNet_4_io_din_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+313,0,"SelectorNet_4_io_din_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+314,0,"SelectorNet_4_io_din_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+315,0,"SelectorNet_4_io_din_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+316,0,"SelectorNet_4_io_din_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+317,0,"SelectorNet_4_io_din_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+318,0,"SelectorNet_4_io_din_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+319,0,"SelectorNet_4_io_din_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+320,0,"SelectorNet_4_io_din_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+321,0,"SelectorNet_4_io_din_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+322,0,"SelectorNet_4_io_din_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"SelectorNet_4_io_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+323,0,"FillBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"switch_0_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"switch_0_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"switch_0_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"switch_0_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"switch_0_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"switch_0_4_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"switch_0_5_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"switch_0_6_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"switch_0_7_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"switch_0_8_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"switch_0_9_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"switch_0_10_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"switch_0_11_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"switch_0_12_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"switch_0_13_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"switch_0_14_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"switch_0_15_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"switch_0_16_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"switch_0_17_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"switch_0_18_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"switch_0_19_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"switch_0_20_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"switch_0_21_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+347,0,"switch_0_22_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"switch_0_23_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"switch_0_24_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"switch_0_25_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"switch_0_26_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"switch_0_27_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"switch_0_28_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"switch_0_29_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"SelectorNet_0_io_din_0_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+356,0,"SelectorNet_0_io_din_0_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+357,0,"SelectorNet_0_io_din_1_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+358,0,"SelectorNet_0_io_din_1_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+359,0,"SelectorNet_0_io_din_2_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+360,0,"SelectorNet_0_io_din_2_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+361,0,"SelectorNet_0_io_din_3_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+362,0,"SelectorNet_0_io_din_3_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+363,0,"SelectorNet_0_io_din_4_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+364,0,"SelectorNet_0_io_din_4_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+365,0,"SelectorNet_0_io_din_5_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+366,0,"SelectorNet_0_io_din_5_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+367,0,"SelectorNet_0_io_din_6_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+368,0,"SelectorNet_0_io_din_6_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+369,0,"SelectorNet_0_io_din_7_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+370,0,"SelectorNet_0_io_din_7_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+371,0,"SelectorNet_0_io_din_8_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+372,0,"SelectorNet_0_io_din_8_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+373,0,"SelectorNet_0_io_din_9_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+374,0,"SelectorNet_0_io_din_9_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+375,0,"SelectorNet_0_io_din_10_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+376,0,"SelectorNet_0_io_din_10_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+377,0,"SelectorNet_0_io_din_11_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+378,0,"SelectorNet_0_io_din_11_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+379,0,"SelectorNet_0_io_din_12_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+380,0,"SelectorNet_0_io_din_12_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+381,0,"SelectorNet_0_io_din_13_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+382,0,"SelectorNet_0_io_din_13_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+383,0,"SelectorNet_0_io_din_14_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+384,0,"SelectorNet_0_io_din_14_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+385,0,"SelectorNet_0_io_din_15_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+386,0,"SelectorNet_0_io_din_15_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+387,0,"SelectorNet_0_io_din_16_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+388,0,"SelectorNet_0_io_din_16_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+389,0,"SelectorNet_0_io_din_17_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+390,0,"SelectorNet_0_io_din_17_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+391,0,"SelectorNet_0_io_din_18_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+392,0,"SelectorNet_0_io_din_18_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+393,0,"SelectorNet_0_io_din_19_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+394,0,"SelectorNet_0_io_din_19_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+395,0,"SelectorNet_0_io_din_20_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+396,0,"SelectorNet_0_io_din_20_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+397,0,"SelectorNet_0_io_din_21_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+398,0,"SelectorNet_0_io_din_21_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+399,0,"SelectorNet_0_io_din_22_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+400,0,"SelectorNet_0_io_din_22_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+401,0,"SelectorNet_0_io_din_23_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+402,0,"SelectorNet_0_io_din_23_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+403,0,"SelectorNet_0_io_din_24_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+404,0,"SelectorNet_0_io_din_24_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+405,0,"SelectorNet_0_io_din_25_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+406,0,"SelectorNet_0_io_din_25_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+407,0,"SelectorNet_0_io_din_26_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+408,0,"SelectorNet_0_io_din_26_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+409,0,"SelectorNet_0_io_din_27_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+410,0,"SelectorNet_0_io_din_27_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+411,0,"SelectorNet_0_io_din_28_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+412,0,"SelectorNet_0_io_din_28_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+413,0,"SelectorNet_0_io_din_29_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+414,0,"SelectorNet_0_io_din_29_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+415,0,"SelectorNet_0_io_din_30_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+416,0,"SelectorNet_0_io_din_30_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+417,0,"SelectorNet_0_io_din_31_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+418,0,"SelectorNet_0_io_din_31_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+419,0,"switch_1_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"switch_1_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"switch_1_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"switch_1_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"switch_1_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"switch_1_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"switch_1_4_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"switch_1_5_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"switch_1_6_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"switch_1_7_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"switch_1_8_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"switch_1_9_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"switch_1_10_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"switch_1_11_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"switch_1_12_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"switch_1_13_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"switch_1_14_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"switch_1_15_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"switch_1_16_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"switch_1_17_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"switch_1_18_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"switch_1_19_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"switch_1_20_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"switch_1_21_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"switch_1_22_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"switch_1_23_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"switch_1_24_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"switch_1_25_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"switch_1_26_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"switch_1_27_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"switch_1_28_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"switch_1_29_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+451,0,"SelectorNet_1_io_din_0_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+452,0,"SelectorNet_1_io_din_0_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+453,0,"SelectorNet_1_io_din_1_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+454,0,"SelectorNet_1_io_din_1_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+455,0,"SelectorNet_1_io_din_2_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+456,0,"SelectorNet_1_io_din_2_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+457,0,"SelectorNet_1_io_din_3_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+458,0,"SelectorNet_1_io_din_3_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+459,0,"SelectorNet_1_io_din_4_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+460,0,"SelectorNet_1_io_din_4_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+461,0,"SelectorNet_1_io_din_5_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+462,0,"SelectorNet_1_io_din_5_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+463,0,"SelectorNet_1_io_din_6_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+464,0,"SelectorNet_1_io_din_6_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+465,0,"SelectorNet_1_io_din_7_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+466,0,"SelectorNet_1_io_din_7_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+467,0,"SelectorNet_1_io_din_8_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+468,0,"SelectorNet_1_io_din_8_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+469,0,"SelectorNet_1_io_din_9_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+470,0,"SelectorNet_1_io_din_9_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+471,0,"SelectorNet_1_io_din_10_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+472,0,"SelectorNet_1_io_din_10_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+473,0,"SelectorNet_1_io_din_11_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+474,0,"SelectorNet_1_io_din_11_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+475,0,"SelectorNet_1_io_din_12_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+476,0,"SelectorNet_1_io_din_12_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+477,0,"SelectorNet_1_io_din_13_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+478,0,"SelectorNet_1_io_din_13_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+479,0,"SelectorNet_1_io_din_14_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+480,0,"SelectorNet_1_io_din_14_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+481,0,"SelectorNet_1_io_din_15_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+482,0,"SelectorNet_1_io_din_15_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+483,0,"SelectorNet_1_io_din_16_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+484,0,"SelectorNet_1_io_din_16_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+485,0,"SelectorNet_1_io_din_17_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+486,0,"SelectorNet_1_io_din_17_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+487,0,"SelectorNet_1_io_din_18_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+488,0,"SelectorNet_1_io_din_18_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+489,0,"SelectorNet_1_io_din_19_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+490,0,"SelectorNet_1_io_din_19_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+491,0,"SelectorNet_1_io_din_20_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+492,0,"SelectorNet_1_io_din_20_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+493,0,"SelectorNet_1_io_din_21_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+494,0,"SelectorNet_1_io_din_21_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+495,0,"SelectorNet_1_io_din_22_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+496,0,"SelectorNet_1_io_din_22_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+497,0,"SelectorNet_1_io_din_23_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+498,0,"SelectorNet_1_io_din_23_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+499,0,"SelectorNet_1_io_din_24_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+500,0,"SelectorNet_1_io_din_24_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+501,0,"SelectorNet_1_io_din_25_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+502,0,"SelectorNet_1_io_din_25_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+503,0,"SelectorNet_1_io_din_26_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+504,0,"SelectorNet_1_io_din_26_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+505,0,"SelectorNet_1_io_din_27_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+506,0,"SelectorNet_1_io_din_27_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+507,0,"SelectorNet_1_io_din_28_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+508,0,"SelectorNet_1_io_din_28_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+509,0,"SelectorNet_1_io_din_29_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+510,0,"SelectorNet_1_io_din_29_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+511,0,"SelectorNet_1_io_din_30_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+512,0,"SelectorNet_1_io_din_30_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+513,0,"SelectorNet_1_io_din_31_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+514,0,"SelectorNet_1_io_din_31_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+515,0,"switch_2_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"switch_2_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"switch_2_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"switch_2_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"switch_2_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"switch_2_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"switch_2_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"switch_2_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"switch_2_4_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"switch_2_5_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"switch_2_6_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"switch_2_7_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"switch_2_8_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"switch_2_9_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"switch_2_10_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"switch_2_11_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"switch_2_12_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"switch_2_13_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"switch_2_14_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"switch_2_15_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"switch_2_16_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"switch_2_17_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"switch_2_18_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"switch_2_19_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"switch_2_20_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"switch_2_21_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"switch_2_22_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"switch_2_23_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"switch_2_24_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"switch_2_25_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"switch_2_26_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"switch_2_27_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+547,0,"SelectorNet_2_io_din_0_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+548,0,"SelectorNet_2_io_din_0_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+549,0,"SelectorNet_2_io_din_1_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+550,0,"SelectorNet_2_io_din_1_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+551,0,"SelectorNet_2_io_din_2_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+552,0,"SelectorNet_2_io_din_2_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+553,0,"SelectorNet_2_io_din_3_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+554,0,"SelectorNet_2_io_din_3_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+555,0,"SelectorNet_2_io_din_4_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+556,0,"SelectorNet_2_io_din_4_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+557,0,"SelectorNet_2_io_din_5_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+558,0,"SelectorNet_2_io_din_5_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+559,0,"SelectorNet_2_io_din_6_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+560,0,"SelectorNet_2_io_din_6_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+561,0,"SelectorNet_2_io_din_7_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+562,0,"SelectorNet_2_io_din_7_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+563,0,"SelectorNet_2_io_din_8_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+564,0,"SelectorNet_2_io_din_8_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+565,0,"SelectorNet_2_io_din_9_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+566,0,"SelectorNet_2_io_din_9_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+567,0,"SelectorNet_2_io_din_10_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+568,0,"SelectorNet_2_io_din_10_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+569,0,"SelectorNet_2_io_din_11_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+570,0,"SelectorNet_2_io_din_11_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+571,0,"SelectorNet_2_io_din_12_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+572,0,"SelectorNet_2_io_din_12_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+573,0,"SelectorNet_2_io_din_13_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+574,0,"SelectorNet_2_io_din_13_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+575,0,"SelectorNet_2_io_din_14_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+576,0,"SelectorNet_2_io_din_14_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+577,0,"SelectorNet_2_io_din_15_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+578,0,"SelectorNet_2_io_din_15_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+579,0,"SelectorNet_2_io_din_16_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+580,0,"SelectorNet_2_io_din_16_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+581,0,"SelectorNet_2_io_din_17_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+582,0,"SelectorNet_2_io_din_17_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+583,0,"SelectorNet_2_io_din_18_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+584,0,"SelectorNet_2_io_din_18_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+585,0,"SelectorNet_2_io_din_19_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+586,0,"SelectorNet_2_io_din_19_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+587,0,"SelectorNet_2_io_din_20_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+588,0,"SelectorNet_2_io_din_20_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+589,0,"SelectorNet_2_io_din_21_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+590,0,"SelectorNet_2_io_din_21_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+591,0,"SelectorNet_2_io_din_22_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+592,0,"SelectorNet_2_io_din_22_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+593,0,"SelectorNet_2_io_din_23_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+594,0,"SelectorNet_2_io_din_23_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+595,0,"SelectorNet_2_io_din_24_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+596,0,"SelectorNet_2_io_din_24_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+597,0,"SelectorNet_2_io_din_25_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+598,0,"SelectorNet_2_io_din_25_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+599,0,"SelectorNet_2_io_din_26_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+600,0,"SelectorNet_2_io_din_26_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+601,0,"SelectorNet_2_io_din_27_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+602,0,"SelectorNet_2_io_din_27_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+603,0,"SelectorNet_2_io_din_28_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+604,0,"SelectorNet_2_io_din_28_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+605,0,"SelectorNet_2_io_din_29_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+606,0,"SelectorNet_2_io_din_29_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+607,0,"SelectorNet_2_io_din_30_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+608,0,"SelectorNet_2_io_din_30_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+609,0,"SelectorNet_2_io_din_31_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+610,0,"SelectorNet_2_io_din_31_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+611,0,"switch_3_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"switch_3_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+613,0,"switch_3_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"switch_3_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"switch_3_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"switch_3_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"switch_3_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"switch_3_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"switch_3_4_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"switch_3_4_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"switch_3_5_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"switch_3_5_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"switch_3_6_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,0,"switch_3_6_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"switch_3_7_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"switch_3_7_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"switch_3_8_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"switch_3_9_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"switch_3_10_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"switch_3_11_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+631,0,"switch_3_12_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"switch_3_13_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"switch_3_14_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"switch_3_15_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"switch_3_16_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"switch_3_17_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"switch_3_18_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"switch_3_19_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,0,"switch_3_20_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+640,0,"switch_3_21_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"switch_3_22_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+642,0,"switch_3_23_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+643,0,"SelectorNet_3_io_din_0_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+644,0,"SelectorNet_3_io_din_0_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+645,0,"SelectorNet_3_io_din_1_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+646,0,"SelectorNet_3_io_din_1_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+647,0,"SelectorNet_3_io_din_2_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+648,0,"SelectorNet_3_io_din_2_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+649,0,"SelectorNet_3_io_din_3_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+650,0,"SelectorNet_3_io_din_3_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+651,0,"SelectorNet_3_io_din_4_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+652,0,"SelectorNet_3_io_din_4_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+653,0,"SelectorNet_3_io_din_5_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+654,0,"SelectorNet_3_io_din_5_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+655,0,"SelectorNet_3_io_din_6_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+656,0,"SelectorNet_3_io_din_6_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+657,0,"SelectorNet_3_io_din_7_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+658,0,"SelectorNet_3_io_din_7_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+659,0,"SelectorNet_3_io_din_8_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+660,0,"SelectorNet_3_io_din_8_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+661,0,"SelectorNet_3_io_din_9_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+662,0,"SelectorNet_3_io_din_9_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+663,0,"SelectorNet_3_io_din_10_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+664,0,"SelectorNet_3_io_din_10_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+665,0,"SelectorNet_3_io_din_11_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+666,0,"SelectorNet_3_io_din_11_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+667,0,"SelectorNet_3_io_din_12_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+668,0,"SelectorNet_3_io_din_12_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+669,0,"SelectorNet_3_io_din_13_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+670,0,"SelectorNet_3_io_din_13_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+671,0,"SelectorNet_3_io_din_14_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+672,0,"SelectorNet_3_io_din_14_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+673,0,"SelectorNet_3_io_din_15_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+674,0,"SelectorNet_3_io_din_15_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+675,0,"SelectorNet_3_io_din_16_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+676,0,"SelectorNet_3_io_din_16_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+677,0,"SelectorNet_3_io_din_17_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+678,0,"SelectorNet_3_io_din_17_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+679,0,"SelectorNet_3_io_din_18_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+680,0,"SelectorNet_3_io_din_18_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+681,0,"SelectorNet_3_io_din_19_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+682,0,"SelectorNet_3_io_din_19_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+683,0,"SelectorNet_3_io_din_20_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+684,0,"SelectorNet_3_io_din_20_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+685,0,"SelectorNet_3_io_din_21_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+686,0,"SelectorNet_3_io_din_21_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+687,0,"SelectorNet_3_io_din_22_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+688,0,"SelectorNet_3_io_din_22_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+689,0,"SelectorNet_3_io_din_23_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+690,0,"SelectorNet_3_io_din_23_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+691,0,"SelectorNet_3_io_din_24_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+692,0,"SelectorNet_3_io_din_24_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+693,0,"SelectorNet_3_io_din_25_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+694,0,"SelectorNet_3_io_din_25_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+695,0,"SelectorNet_3_io_din_26_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+696,0,"SelectorNet_3_io_din_26_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+697,0,"SelectorNet_3_io_din_27_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+698,0,"SelectorNet_3_io_din_27_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+699,0,"SelectorNet_3_io_din_28_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+700,0,"SelectorNet_3_io_din_28_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+701,0,"SelectorNet_3_io_din_29_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+702,0,"SelectorNet_3_io_din_29_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+703,0,"SelectorNet_3_io_din_30_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+704,0,"SelectorNet_3_io_din_30_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+705,0,"SelectorNet_3_io_din_31_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+706,0,"SelectorNet_3_io_din_31_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+707,0,"switch_4_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"switch_4_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+709,0,"switch_4_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+710,0,"switch_4_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+711,0,"switch_4_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+712,0,"switch_4_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"switch_4_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+714,0,"switch_4_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+715,0,"switch_4_4_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"switch_4_4_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+717,0,"switch_4_5_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+718,0,"switch_4_5_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+719,0,"switch_4_6_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"switch_4_6_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+721,0,"switch_4_7_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"switch_4_7_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+723,0,"switch_4_8_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+724,0,"switch_4_8_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+725,0,"switch_4_9_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+726,0,"switch_4_9_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+727,0,"switch_4_10_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"switch_4_10_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+729,0,"switch_4_11_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+730,0,"switch_4_11_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"switch_4_12_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"switch_4_12_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"switch_4_13_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"switch_4_13_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"switch_4_14_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+736,0,"switch_4_14_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"switch_4_15_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+738,0,"switch_4_15_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+739,0,"SelectorNet_4_io_din_0_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+740,0,"SelectorNet_4_io_din_0_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+741,0,"SelectorNet_4_io_din_1_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+742,0,"SelectorNet_4_io_din_1_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+743,0,"SelectorNet_4_io_din_2_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+744,0,"SelectorNet_4_io_din_2_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+745,0,"SelectorNet_4_io_din_3_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+746,0,"SelectorNet_4_io_din_3_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+747,0,"SelectorNet_4_io_din_4_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+748,0,"SelectorNet_4_io_din_4_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+749,0,"SelectorNet_4_io_din_5_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+750,0,"SelectorNet_4_io_din_5_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+751,0,"SelectorNet_4_io_din_6_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+752,0,"SelectorNet_4_io_din_6_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+753,0,"SelectorNet_4_io_din_7_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+754,0,"SelectorNet_4_io_din_7_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+755,0,"SelectorNet_4_io_din_8_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+756,0,"SelectorNet_4_io_din_8_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+757,0,"SelectorNet_4_io_din_9_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+758,0,"SelectorNet_4_io_din_9_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+759,0,"SelectorNet_4_io_din_10_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+760,0,"SelectorNet_4_io_din_10_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+761,0,"SelectorNet_4_io_din_11_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+762,0,"SelectorNet_4_io_din_11_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+763,0,"SelectorNet_4_io_din_12_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+764,0,"SelectorNet_4_io_din_12_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+765,0,"SelectorNet_4_io_din_13_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+766,0,"SelectorNet_4_io_din_13_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+767,0,"SelectorNet_4_io_din_14_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+768,0,"SelectorNet_4_io_din_14_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+769,0,"SelectorNet_4_io_din_15_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+770,0,"SelectorNet_4_io_din_15_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+771,0,"SelectorNet_4_io_din_16_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+772,0,"SelectorNet_4_io_din_16_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+773,0,"SelectorNet_4_io_din_17_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+774,0,"SelectorNet_4_io_din_17_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+775,0,"SelectorNet_4_io_din_18_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+776,0,"SelectorNet_4_io_din_18_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+777,0,"SelectorNet_4_io_din_19_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+778,0,"SelectorNet_4_io_din_19_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+779,0,"SelectorNet_4_io_din_20_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+780,0,"SelectorNet_4_io_din_20_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+781,0,"SelectorNet_4_io_din_21_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+782,0,"SelectorNet_4_io_din_21_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+783,0,"SelectorNet_4_io_din_22_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+784,0,"SelectorNet_4_io_din_22_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+785,0,"SelectorNet_4_io_din_23_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+786,0,"SelectorNet_4_io_din_23_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+787,0,"SelectorNet_4_io_din_24_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+788,0,"SelectorNet_4_io_din_24_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+789,0,"SelectorNet_4_io_din_25_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+790,0,"SelectorNet_4_io_din_25_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+791,0,"SelectorNet_4_io_din_26_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+792,0,"SelectorNet_4_io_din_26_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+793,0,"SelectorNet_4_io_din_27_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+794,0,"SelectorNet_4_io_din_27_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+795,0,"SelectorNet_4_io_din_28_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+796,0,"SelectorNet_4_io_din_28_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+797,0,"SelectorNet_4_io_din_29_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+798,0,"SelectorNet_4_io_din_29_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+799,0,"SelectorNet_4_io_din_30_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+800,0,"SelectorNet_4_io_din_30_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+801,0,"SelectorNet_4_io_din_31_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+802,0,"SelectorNet_4_io_din_31_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("SelectorNet_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+154,0,"io_shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"io_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"io_din_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+156,0,"io_din_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+157,0,"io_din_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+158,0,"io_din_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+159,0,"io_din_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+160,0,"io_din_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+161,0,"io_din_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+162,0,"io_din_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+163,0,"io_din_8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"io_din_9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+165,0,"io_din_10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+166,0,"io_din_11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"io_din_12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+168,0,"io_din_13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"io_din_14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+170,0,"io_din_15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+171,0,"io_din_16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+172,0,"io_din_17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+173,0,"io_din_18",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+174,0,"io_din_19",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+175,0,"io_din_20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+176,0,"io_din_21",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+177,0,"io_din_22",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+178,0,"io_din_23",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"io_din_24",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+180,0,"io_din_25",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+181,0,"io_din_26",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+182,0,"io_din_27",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"io_din_28",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"io_din_29",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"io_din_30",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+186,0,"io_din_31",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+187,0,"io_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+803,0,"ShiftL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"ShiftR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"ShiftN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"switch_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"switch_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"switch_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"switch_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"switch_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"switch_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"switch_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"switch_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"switch_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"switch_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"switch_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"switch_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"switch_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"switch_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"switch_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"switch_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"switch_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"switch_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"switch_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"switch_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"switch_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"switch_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"switch_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"switch_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"switch_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"switch_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"switch_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"switch_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"switch_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"switch_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"switch_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"switch_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+806,0,"io_dout_lo_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+807,0,"io_dout_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+808,0,"io_dout_hi_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+809,0,"io_dout_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("SelectorNet_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+188,0,"io_shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"io_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"io_din_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+190,0,"io_din_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"io_din_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"io_din_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+193,0,"io_din_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"io_din_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+195,0,"io_din_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"io_din_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+197,0,"io_din_8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+198,0,"io_din_9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+199,0,"io_din_10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+200,0,"io_din_11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"io_din_12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+202,0,"io_din_13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+203,0,"io_din_14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+204,0,"io_din_15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+205,0,"io_din_16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+206,0,"io_din_17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+207,0,"io_din_18",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+208,0,"io_din_19",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+209,0,"io_din_20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+210,0,"io_din_21",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+211,0,"io_din_22",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"io_din_23",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+213,0,"io_din_24",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+214,0,"io_din_25",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+215,0,"io_din_26",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+216,0,"io_din_27",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+217,0,"io_din_28",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+218,0,"io_din_29",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,0,"io_din_30",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+220,0,"io_din_31",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+221,0,"io_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+810,0,"ShiftL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"ShiftR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"ShiftN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"switch_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"switch_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"switch_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"switch_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"switch_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"switch_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"switch_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"switch_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"switch_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"switch_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"switch_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"switch_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"switch_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"switch_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"switch_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"switch_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"switch_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"switch_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"switch_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"switch_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"switch_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"switch_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"switch_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"switch_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"switch_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"switch_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"switch_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"switch_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"switch_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"switch_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"switch_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"switch_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+813,0,"io_dout_lo_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+814,0,"io_dout_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+815,0,"io_dout_hi_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+816,0,"io_dout_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("SelectorNet_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+222,0,"io_shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"io_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"io_din_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+224,0,"io_din_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"io_din_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,0,"io_din_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"io_din_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+228,0,"io_din_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+229,0,"io_din_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+230,0,"io_din_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"io_din_8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+232,0,"io_din_9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+233,0,"io_din_10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+234,0,"io_din_11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+235,0,"io_din_12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+236,0,"io_din_13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+237,0,"io_din_14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+238,0,"io_din_15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,0,"io_din_16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,0,"io_din_17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+241,0,"io_din_18",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+242,0,"io_din_19",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+243,0,"io_din_20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+244,0,"io_din_21",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+245,0,"io_din_22",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+246,0,"io_din_23",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+247,0,"io_din_24",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+248,0,"io_din_25",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+249,0,"io_din_26",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+250,0,"io_din_27",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+251,0,"io_din_28",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+252,0,"io_din_29",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+253,0,"io_din_30",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+254,0,"io_din_31",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+255,0,"io_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+817,0,"ShiftL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"ShiftR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+819,0,"ShiftN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"switch_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+613,0,"switch_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"switch_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"switch_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"switch_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"switch_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"switch_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"switch_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"switch_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"switch_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"switch_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"switch_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"switch_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"switch_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,0,"switch_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"switch_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"switch_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"switch_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+629,0,"switch_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"switch_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+631,0,"switch_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"switch_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"switch_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"switch_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"switch_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"switch_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"switch_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"switch_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,0,"switch_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+640,0,"switch_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"switch_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+642,0,"switch_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+820,0,"io_dout_lo_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+821,0,"io_dout_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+822,0,"io_dout_hi_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+823,0,"io_dout_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("SelectorNet_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+256,0,"io_shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"io_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+257,0,"io_din_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+258,0,"io_din_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+259,0,"io_din_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+260,0,"io_din_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+261,0,"io_din_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+262,0,"io_din_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+263,0,"io_din_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+264,0,"io_din_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+265,0,"io_din_8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+266,0,"io_din_9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+267,0,"io_din_10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+268,0,"io_din_11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+269,0,"io_din_12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+270,0,"io_din_13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+271,0,"io_din_14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+272,0,"io_din_15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+273,0,"io_din_16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+274,0,"io_din_17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"io_din_18",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+276,0,"io_din_19",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+277,0,"io_din_20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+278,0,"io_din_21",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"io_din_22",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+280,0,"io_din_23",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+281,0,"io_din_24",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+282,0,"io_din_25",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+283,0,"io_din_26",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+284,0,"io_din_27",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+285,0,"io_din_28",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+286,0,"io_din_29",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+287,0,"io_din_30",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+288,0,"io_din_31",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+289,0,"io_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+824,0,"ShiftL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"ShiftR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+826,0,"ShiftN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"switch_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+709,0,"switch_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+711,0,"switch_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"switch_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+715,0,"switch_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+717,0,"switch_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+719,0,"switch_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+721,0,"switch_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+723,0,"switch_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+725,0,"switch_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+727,0,"switch_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+729,0,"switch_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"switch_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"switch_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"switch_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"switch_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"switch_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+710,0,"switch_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+712,0,"switch_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+714,0,"switch_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"switch_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+718,0,"switch_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"switch_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"switch_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+724,0,"switch_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+726,0,"switch_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"switch_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+730,0,"switch_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"switch_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"switch_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+736,0,"switch_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+738,0,"switch_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+827,0,"io_dout_lo_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+828,0,"io_dout_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+829,0,"io_dout_hi_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+830,0,"io_dout_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("SelectorNet_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+290,0,"io_shamt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"io_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"io_din_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+292,0,"io_din_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+293,0,"io_din_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+294,0,"io_din_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"io_din_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+296,0,"io_din_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+297,0,"io_din_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+298,0,"io_din_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+299,0,"io_din_8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+300,0,"io_din_9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+301,0,"io_din_10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+302,0,"io_din_11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+303,0,"io_din_12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+304,0,"io_din_13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+305,0,"io_din_14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+306,0,"io_din_15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+307,0,"io_din_16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+308,0,"io_din_17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+309,0,"io_din_18",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+310,0,"io_din_19",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+311,0,"io_din_20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+312,0,"io_din_21",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+313,0,"io_din_22",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+314,0,"io_din_23",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+315,0,"io_din_24",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+316,0,"io_din_25",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+317,0,"io_din_26",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+318,0,"io_din_27",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+319,0,"io_din_28",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+320,0,"io_din_29",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+321,0,"io_din_30",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+322,0,"io_din_31",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"io_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"ShiftL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"ShiftR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+833,0,"ShiftN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+834,0,"switch_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"switch_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+836,0,"switch_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+837,0,"switch_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"switch_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"switch_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+840,0,"switch_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+841,0,"switch_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+842,0,"switch_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+843,0,"switch_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+844,0,"switch_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+845,0,"switch_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"switch_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"switch_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+848,0,"switch_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+849,0,"switch_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"switch_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"switch_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+852,0,"switch_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+853,0,"switch_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+854,0,"switch_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+855,0,"switch_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"switch_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"switch_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+858,0,"switch_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+859,0,"switch_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+860,0,"switch_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+861,0,"switch_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+862,0,"switch_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+863,0,"switch_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+864,0,"switch_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+865,0,"switch_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+866,0,"io_dout_lo_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+867,0,"io_dout_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+868,0,"io_dout_hi_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+869,0,"io_dout_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ID", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1001,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"io_inValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"io_IF2ID_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_IF2ID_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"io_IF2ID_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"io_IF2ID_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"io_ID2EX_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"io_ID2EX_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"io_ID2EX_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"io_ID2EX_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"io_ID2EX_bits_func3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+21,0,"io_ID2EX_bits_memWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"io_ID2EX_bits_memRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"io_ID2EX_bits_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"io_ID2EX_bits_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"io_ID2EX_bits_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1011,0,"io_ID2EX_bits_rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"io_ID2EX_bits_rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"io_ID2EX_bits_regWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"io_ID2EX_bits_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"io_ID2EX_bits_aluOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"io_ID2EX_bits_aluSrc1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+30,0,"io_ID2EX_bits_aluSrc2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+31,0,"io_ID2EX_bits_pcSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+32,0,"io_ID2EX_bits_jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_ID2EX_bits_csrRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"io_ID2EX_bits_halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"io_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1007,0,"io_regWdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"io_regWaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1001,0,"Rf_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"Rf_io_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"Rf_io_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1007,0,"Rf_io_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"Rf_io_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1006,0,"Rf_io_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1011,0,"Rf_io_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"Rf_io_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,0,"DecoderOut_invInputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+871,0,"DecoderOut_andMatrixInput_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"DecoderOut_andMatrixInput_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+873,0,"DecoderOut_andMatrixInput_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"DecoderOut_andMatrixInput_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"DecoderOut_andMatrixInput_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"DecoderOut_andMatrixInput_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+877,0,"DecoderOut_andMatrixInput_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+878,0,"DecoderOut_andMatrixInput_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+879,0,"DecoderOut_andMatrixInput_7_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+880,0,"DecoderOut_andMatrixInput_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+881,0,"DecoderOut_andMatrixInput_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"DecoderOut_andMatrixInput_0_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"DecoderOut_andMatrixInput_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+884,0,"DecoderOut_andMatrixInput_8_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"DecoderOut_andMatrixInput_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"DecoderOut_andMatrixInput_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+887,0,"DecoderOut_andMatrixInput_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+888,0,"DecoderOut_andMatrixInput_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"DecoderOut_andMatrixInput_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+890,0,"DecoderOut_lo_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+891,0,"DecoderOut_andMatrixInput_10_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+892,0,"DecoderOut_lo_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+893,0,"DecoderOut_andMatrixInput_1_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"DecoderOut_andMatrixInput_0_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+895,0,"DecoderOut_andMatrixInput_7_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"DecoderOut_andMatrixInput_8_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"DecoderOut_andMatrixInput_9_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"DecoderOut_andMatrixInput_10_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"DecoderOut_andMatrixInput_11_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"DecoderOut_andMatrixInput_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"DecoderOut_andMatrixInput_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"DecoderOut_andMatrixInput_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"DecoderOut_andMatrixInput_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"DecoderOut_andMatrixInput_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"DecoderOut_andMatrixInput_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"DecoderOut_andMatrixInput_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"DecoderOut_andMatrixInput_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"DecoderOut_andMatrixInput_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+909,0,"DecoderOut_andMatrixInput_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+910,0,"DecoderOut_lo_lo_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+911,0,"DecoderOut_lo_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+912,0,"DecoderOut_hi_lo_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+913,0,"DecoderOut_andMatrixInput_2_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"DecoderOut_andMatrixInput_2_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"DecoderOut_andMatrixInput_3_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+916,0,"DecoderOut_lo_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+917,0,"DecoderOut_andMatrixInput_20_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+918,0,"DecoderOut_lo_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+919,0,"DecoderOut_andMatrixInput_21_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"DecoderOut_andMatrixInput_28_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"DecoderOut_andMatrixInput_29_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+922,0,"DecoderOut_lo_lo_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+923,0,"DecoderOut_lo_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+924,0,"DecoderOut_andMatrixInput_4_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+925,0,"DecoderOut_orMatrixOutputs_lo_lo_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+926,0,"DecoderOut_orMatrixOutputs_lo_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+927,0,"DecoderOut_orMatrixOutputs_hi_lo_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+928,0,"DecoderOut_orMatrixOutputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+925,0,"DecoderOut_invMatrixOutputs_lo_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+926,0,"DecoderOut_invMatrixOutputs_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+927,0,"DecoderOut_invMatrixOutputs_hi_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+928,0,"DecoderOut_invMatrixOutputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+929,0,"Type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("Rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1001,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"io_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"io_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1007,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"io_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1006,0,"io_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1011,0,"io_rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"io_rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+930,0,"Wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+931,0,"gprSeq_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+932,0,"gprSeq_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"gprSeq_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+934,0,"gprSeq_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+935,0,"gprSeq_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+936,0,"gprSeq_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+937,0,"gprSeq_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+938,0,"gprSeq_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+939,0,"gprSeq_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+940,0,"gprSeq_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+941,0,"gprSeq_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+942,0,"gprSeq_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"gprSeq_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+944,0,"gprSeq_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+945,0,"gprSeq_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+946,0,"gprSeq_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+947,0,"gprSeq_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+948,0,"gprSeq_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+949,0,"gprSeq_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+950,0,"gprSeq_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+951,0,"gprSeq_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+952,0,"gprSeq_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+953,0,"gprSeq_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+954,0,"gprSeq_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+955,0,"gprSeq_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+956,0,"gprSeq_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+957,0,"gprSeq_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+958,0,"gprSeq_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+959,0,"gprSeq_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+960,0,"gprSeq_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+961,0,"gprSeq_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+962,0,"gprSeq_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("IF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1001,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"io_inValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_Pre2IF_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1010,0,"io_Pre2IF_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"io_IF2ID_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_IF2ID_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_IF2ID_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"io_IF2ID_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"io_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"io_r_bits_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"io_arFireReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"io_brTaken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"io_pcBr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"io_pcNext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"io_pcBrEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"io_pcBrRecord",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"pcReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+963,0,"pcBrEnableReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+964,0,"pcBrRecordReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+965,0,"brBuffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+966,0,"brBufferValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+967,0,"pcInc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+968,0,"pcNormal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+969,0,"rFireReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+970,0,"rdataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("InstRam", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1001,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1018,0,"awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1017,0,"awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1017,0,"awprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1018,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1019,0,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1016,0,"bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1020,0,"arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1017,0,"arprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+7,0,"rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1017,0,"rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1021,0,"READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1020,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1022,0,"VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+971,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+972,0,"awstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+973,0,"wstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1014,0,"nxt_rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1024,0,"nxt_awstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+974,0,"nxt_wstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"ReadDataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("MEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1001,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"io_inValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_EX2MEM_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"io_EX2MEM_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"io_EX2MEM_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"io_EX2MEM_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_EX2MEM_bits_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+66,0,"io_EX2MEM_bits_memWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"io_EX2MEM_bits_memRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"io_EX2MEM_bits_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+69,0,"io_EX2MEM_bits_rdata2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+70,0,"io_EX2MEM_bits_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_EX2MEM_bits_aluOut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"io_EX2MEM_bits_halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_MEM2WB_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"io_MEM2WB_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"io_MEM2WB_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"io_MEM2WB_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_MEM2WB_bits_func3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+67,0,"io_MEM2WB_bits_memRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_MEM2WB_bits_memWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"io_MEM2WB_bits_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+70,0,"io_MEM2WB_bits_regWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_MEM2WB_bits_aluOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"io_MEM2WB_bits_halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"io_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"io_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"io_ar_bits_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1015,0,"io_aw_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"io_aw_bits_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"io_aw_bits_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1015,0,"io_w_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"io_w_bits_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"io_w_bits_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+975,0,"memSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+976,0,"shiftWdata0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"io_w_bits_wstrb_plaInput",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+978,0,"io_w_bits_wstrb_invInputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+979,0,"io_w_bits_wstrb_andMatrixInput_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"io_w_bits_wstrb_andMatrixInput_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+981,0,"io_w_bits_wstrb_andMatrixInput_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+982,0,"io_w_bits_wstrb_andMatrixInput_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+983,0,"io_w_bits_wstrb_andMatrixInput_1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+984,0,"io_w_bits_wstrb_andMatrixInput_0_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"io_w_bits_wstrb_orMatrixOutputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+985,0,"io_w_bits_wstrb_invMatrixOutputs_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+986,0,"io_w_bits_wstrb_invMatrixOutputs_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+987,0,"arDataFireReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+988,0,"awFireReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+989,0,"wFireReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"arDataFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"awFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+992,0,"wFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("WB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1001,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"io_inValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_MEM2WB_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"io_MEM2WB_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1003,0,"io_MEM2WB_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"io_MEM2WB_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"io_MEM2WB_bits_func3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+80,0,"io_MEM2WB_bits_memRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_MEM2WB_bits_memWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1005,0,"io_MEM2WB_bits_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+82,0,"io_MEM2WB_bits_regWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"io_MEM2WB_bits_aluOut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"io_MEM2WB_bits_halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"io_WBout_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"io_WBout_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1003,0,"io_WBout_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"io_WBout_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"io_WBout_bits_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1006,0,"io_WBout_bits_regWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1007,0,"io_WBout_bits_regWdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1009,0,"io_WBout_bits_halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"io_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"io_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"io_r_bits_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1015,0,"io_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"io_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+993,0,"rdataShift0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"rdataShift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+995,0,"rdataSignal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+996,0,"ReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+997,0,"rDataFireReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+998,0,"bFireReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+999,0,"rDataFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"bFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    bufp->fullBit(oldp+1015,(1U));
    bufp->fullBit(oldp+1016,(0U));
    bufp->fullCData(oldp+1017,(0U),3);
    bufp->fullIData(oldp+1018,(0U),32);
    bufp->fullCData(oldp+1019,(0U),4);
    bufp->fullCData(oldp+1020,(2U),3);
    bufp->fullCData(oldp+1021,(1U),3);
    bufp->fullCData(oldp+1022,(4U),3);
    bufp->fullCData(oldp+1023,(vlSelf->TOP__DOT__DataRam__DOT__nxt_awstate),3);
    bufp->fullCData(oldp+1024,(vlSelf->TOP__DOT__InstRam__DOT__nxt_awstate),3);
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
    bufp->fullBit(oldp+1,(((IData)(vlSelf->TOP__DOT__Pre2IFValid) 
                           & (IData)(vlSelf->TOP__DOT___Pre2IFValid_T_2))));
    bufp->fullBit(oldp+2,((1U & ((~ ((IData)(vlSelf->TOP__DOT__Pre2IFValid) 
                                     & (IData)(vlSelf->TOP__DOT___Pre2IFValid_T_2))) 
                                 | (IData)(vlSelf->TOP__DOT__IF__DOT___pcBrRecordReg_T)))));
    bufp->fullBit(oldp+3,(vlSelf->TOP__DOT__IF_io_IF2ID_ready));
    bufp->fullBit(oldp+4,(vlSelf->TOP__DOT__IF_io_IF2ID_valid));
    bufp->fullIData(oldp+5,(vlSelf->TOP__DOT__IF__DOT__pcReg),32);
    bufp->fullIData(oldp+6,(((IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg)
                              ? vlSelf->TOP__DOT__IF__DOT__rdataReg
                              : vlSelf->TOP__DOT__InstRam__DOT__ReadDataReg)),32);
    bufp->fullBit(oldp+7,((1U & (~ (IData)(vlSelf->TOP__DOT__IF__DOT__rFireReg)))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->TOP__DOT__InstRam__DOT__rstate) 
                                 >> 2U))));
    bufp->fullIData(oldp+9,(vlSelf->TOP__DOT__InstRam__DOT__ReadDataReg),32);
    bufp->fullBit(oldp+10,(vlSelf->TOP__DOT__arFireReg));
    bufp->fullBit(oldp+11,(vlSelf->TOP__DOT__IF_io_brTaken));
    bufp->fullIData(oldp+12,(vlSelf->TOP__DOT__IF_io_pcBr),32);
    bufp->fullIData(oldp+13,(vlSelf->TOP__DOT__IF_io_pcNext),32);
    bufp->fullBit(oldp+14,(vlSelf->TOP__DOT__IF_io_pcBrEnable));
    bufp->fullBit(oldp+15,(vlSelf->TOP__DOT__IF_io_pcBrRecord));
    bufp->fullBit(oldp+16,(vlSelf->TOP__DOT__IF2IDValid));
    bufp->fullIData(oldp+17,(vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_pc),32);
    bufp->fullIData(oldp+18,(vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst),32);
    bufp->fullBit(oldp+19,(vlSelf->TOP__DOT__ID_io_ID2EX_ready));
    bufp->fullCData(oldp+20,((7U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+21,((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1))));
    bufp->fullBit(oldp+22,((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3))));
    bufp->fullCData(oldp+23,((0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+25,((0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+26,(((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5)) 
                            | ((~ (IData)((0x1000U 
                                           == (0x3f80U 
                                               & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)))) 
                               & (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26))))));
    bufp->fullIData(oldp+27,(((((((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                   ? (((- (IData)((vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x1fU))) 
                                       << 0xdU) | (
                                                   (0x1000U 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x13U)) 
                                                   | (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0x14U)))
                                   : 0U) | ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                             ? (((- (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0x1fU))) 
                                                 << 0xdU) 
                                                | ((0x1000U 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x13U)) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                            >> 7U)))))
                                             : 0U)) 
                                | ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                    ? (((- (IData)(
                                                   (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       ((0x1000U & 
                                         (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                    >> 7U))))))
                                    : 0U)) | ((5U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                               ? ((
                                                   (- (IData)(
                                                              (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 0x1fU))) 
                                                   << 0x15U) 
                                                  | ((0x100000U 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst) 
                                                        | ((0x800U 
                                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                 >> 0x14U))))))
                                               : 0U)) 
                              | ((4U == (IData)(vlSelf->TOP__DOT__ID__DOT__Type))
                                  ? (0xfffff000U & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)
                                  : 0U))),32);
    bufp->fullCData(oldp+28,((((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36))) 
                               << 3U) | (((IData)((0U 
                                                   != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16))) 
                                          << 2U) | 
                                         (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14))) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12)))))),4);
    bufp->fullCData(oldp+29,((((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))) 
                               << 1U) | (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23)))),2);
    bufp->fullCData(oldp+30,(vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2),2);
    bufp->fullCData(oldp+31,((((IData)((7U == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6))) 
                               << 1U) | (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7)))),2);
    bufp->fullBit(oldp+32,((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10))));
    bufp->fullBit(oldp+33,(((~ (IData)((0x1000U == 
                                        (0x3f80U & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)))) 
                            & (0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26)))));
    bufp->fullBit(oldp+34,((0xffffffffU == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62)));
    bufp->fullBit(oldp+35,(vlSelf->TOP__DOT__ID2EXValid));
    bufp->fullIData(oldp+36,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc),32);
    bufp->fullIData(oldp+37,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_inst),32);
    bufp->fullCData(oldp+38,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3),3);
    bufp->fullBit(oldp+39,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memWrite));
    bufp->fullBit(oldp+40,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_memRead));
    bufp->fullCData(oldp+41,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs1),5);
    bufp->fullCData(oldp+42,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rs2),5);
    bufp->fullCData(oldp+43,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rd),5);
    bufp->fullIData(oldp+44,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata1),32);
    bufp->fullIData(oldp+45,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_rdata2),32);
    bufp->fullBit(oldp+46,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_regWrite));
    bufp->fullIData(oldp+47,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm),32);
    bufp->fullCData(oldp+48,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp),4);
    bufp->fullCData(oldp+49,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc1),2);
    bufp->fullCData(oldp+50,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluSrc2),2);
    bufp->fullCData(oldp+51,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pcSrc),2);
    bufp->fullBit(oldp+52,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_jump));
    bufp->fullBit(oldp+53,(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_halt));
    bufp->fullBit(oldp+54,((1U & ((~ (IData)(vlSelf->TOP__DOT__EX2MEMValid)) 
                                  | (IData)(vlSelf->TOP__DOT__MEM__DOT___arDataFireReg_T)))));
    bufp->fullBit(oldp+55,((1U & (~ (IData)(vlSelf->TOP__DOT__EX_io_stall)))));
    bufp->fullIData(oldp+56,(vlSelf->TOP__DOT__EX__DOT__data2),32);
    bufp->fullIData(oldp+57,(vlSelf->TOP__DOT__EX__DOT__Alu_io_Result),32);
    bufp->fullIData(oldp+58,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut),32);
    bufp->fullCData(oldp+59,(vlSelf->TOP__DOT__EX_io_hazard1),2);
    bufp->fullCData(oldp+60,(vlSelf->TOP__DOT__EX_io_hazard2),2);
    bufp->fullBit(oldp+61,(vlSelf->TOP__DOT__EX_io_stall));
    bufp->fullBit(oldp+62,(vlSelf->TOP__DOT__EX2MEMValid));
    bufp->fullIData(oldp+63,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_pc),32);
    bufp->fullIData(oldp+64,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_inst),32);
    bufp->fullCData(oldp+65,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3),3);
    bufp->fullBit(oldp+66,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite));
    bufp->fullBit(oldp+67,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead));
    bufp->fullCData(oldp+68,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rd),5);
    bufp->fullIData(oldp+69,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2),32);
    bufp->fullBit(oldp+70,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_regWrite));
    bufp->fullBit(oldp+71,(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_halt));
    bufp->fullBit(oldp+72,(vlSelf->TOP__DOT__MEM_io_MEM2WB_ready));
    bufp->fullBit(oldp+73,(vlSelf->TOP__DOT__MEM_io_MEM2WB_valid));
    bufp->fullIData(oldp+74,((0xfffffffcU & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)),32);
    bufp->fullCData(oldp+75,((3U & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))),3);
    bufp->fullIData(oldp+76,(((2U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)
                               ? VL_SHIFTL_III(32,32,32, 
                                               ((1U 
                                                 & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)
                                                 ? 
                                                VL_SHIFTL_III(32,32,32, vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2, 8U)
                                                 : vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2), 0x10U)
                               : ((1U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)
                                   ? VL_SHIFTL_III(32,32,32, vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2, 8U)
                                   : vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2))),32);
    bufp->fullCData(oldp+77,(((8U & (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                       << 3U) & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                                 << 2U)) 
                                     | (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          << 2U) & 
                                         ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                          << 3U)) | 
                                        ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                         << 2U)))) 
                              | ((4U & ((0xfffffffcU 
                                         & (((~ (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)) 
                                             << 2U) 
                                            & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                               << 1U))) 
                                        | (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                             & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                            << 2U) 
                                           | (0xfffffffcU 
                                              & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                                 << 1U))))) 
                                 | ((2U & (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                             & (~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                                   >> 1U))) 
                                            << 1U) 
                                           | ((((~ 
                                                 ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                                  >> 1U)) 
                                                & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))))) 
                                    | (IData)((0U == 
                                               (3U 
                                                & (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))))))),4);
    bufp->fullBit(oldp+78,(vlSelf->TOP__DOT__MEM2WBValid));
    bufp->fullCData(oldp+79,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3),3);
    bufp->fullBit(oldp+80,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memRead));
    bufp->fullBit(oldp+81,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_memWrite));
    bufp->fullBit(oldp+82,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_regWrite));
    bufp->fullIData(oldp+83,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_aluOut),32);
    bufp->fullBit(oldp+84,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_halt));
    bufp->fullBit(oldp+85,(vlSelf->TOP__DOT__WB_io_WBout_valid));
    bufp->fullBit(oldp+86,((1U & ((IData)(vlSelf->TOP__DOT__DataRam__DOT__rstate) 
                                  >> 2U))));
    bufp->fullIData(oldp+87,(vlSelf->TOP__DOT__DataRam__DOT__ReadDataReg),32);
    bufp->fullBit(oldp+88,((1U & ((IData)(vlSelf->TOP__DOT__DataRam__DOT__wstate) 
                                  >> 2U))));
    bufp->fullBit(oldp+89,((1U & ((IData)(vlSelf->TOP__DOT__InstRam__DOT__wstate) 
                                  >> 2U))));
    bufp->fullBit(oldp+90,(vlSelf->TOP__DOT__Pre2IFValid));
    bufp->fullBit(oldp+91,(vlSelf->TOP__DOT__IFoutValid));
    bufp->fullBit(oldp+92,(vlSelf->TOP__DOT__IDoutValid));
    bufp->fullBit(oldp+93,(vlSelf->TOP__DOT__MEMRegWrite));
    bufp->fullBit(oldp+94,(vlSelf->TOP__DOT__WBRegWrite));
    bufp->fullBit(oldp+95,(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_hc327c5e2__0));
    bufp->fullBit(oldp+96,(vlSelf->TOP__DOT__EX__DOT____VdfgTmp_h09a5d97f__0));
    bufp->fullBit(oldp+97,(vlSelf->TOP__DOT__hazard1_1));
    bufp->fullBit(oldp+98,(vlSelf->TOP__DOT__hazard2_1));
    bufp->fullBit(oldp+99,(vlSelf->TOP__DOT__EXoutValid));
    bufp->fullBit(oldp+100,(vlSelf->TOP__DOT__MEMoutValid));
    bufp->fullIData(oldp+101,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_pc),32);
    bufp->fullIData(oldp+102,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_inst),32);
    bufp->fullCData(oldp+103,(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd),5);
    bufp->fullCData(oldp+104,(vlSelf->TOP__DOT__DataRam__DOT__rstate),3);
    bufp->fullCData(oldp+105,(vlSelf->TOP__DOT__DataRam__DOT__awstate),3);
    bufp->fullCData(oldp+106,(vlSelf->TOP__DOT__DataRam__DOT__wstate),3);
    bufp->fullCData(oldp+107,(vlSelf->TOP__DOT__DataRam__DOT__nxt_rstate),3);
    bufp->fullCData(oldp+108,(vlSelf->TOP__DOT__DataRam__DOT__nxt_wstate),3);
    bufp->fullIData(oldp+109,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din),32);
    bufp->fullIData(oldp+110,(vlSelf->TOP__DOT__EX__DOT__Alu_io_B),32);
    bufp->fullBit(oldp+111,((1U & (~ (IData)((0U != vlSelf->TOP__DOT__EX__DOT__Alu_io_Result))))));
    bufp->fullBit(oldp+112,((1U & ((~ (IData)((0xfU 
                                               == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))) 
                                   ^ (IData)((vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                              >> 0x20U))))));
    bufp->fullIData(oldp+113,(vlSelf->TOP__DOT__EX__DOT__bypassReg),32);
    bufp->fullBit(oldp+114,(vlSelf->TOP__DOT__EX__DOT__hazard1Reg));
    bufp->fullBit(oldp+115,(vlSelf->TOP__DOT__EX__DOT__hazard2Reg));
    bufp->fullIData(oldp+116,(vlSelf->TOP__DOT__EX__DOT__data1),32);
    bufp->fullIData(oldp+117,((vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_imm 
                               + vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_pc)),32);
    bufp->fullBit(oldp+118,(vlSelf->TOP__DOT__EX__DOT__brEnable));
    bufp->fullBit(oldp+119,(((IData)(((0U == (6U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3))) 
                                      & ((~ (IData)(
                                                    (0U 
                                                     != vlSelf->TOP__DOT__EX__DOT__Alu_io_Result))) 
                                         ^ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3)))) 
                             | (((2U == (3U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3) 
                                               >> 1U))) 
                                 | (3U == (3U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3) 
                                                 >> 1U)))) 
                                & (vlSelf->TOP__DOT__EX__DOT__Alu_io_Result 
                                   ^ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_func3))))));
    bufp->fullBit(oldp+120,(vlSelf->TOP__DOT__EX__DOT__brTaken));
    bufp->fullBit(oldp+121,((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14))));
    bufp->fullBit(oldp+122,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18))));
    bufp->fullCData(oldp+123,((0x1fU & vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),5);
    bufp->fullIData(oldp+124,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4_io_dout),32);
    bufp->fullCData(oldp+125,((0xfU & (~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)))),4);
    bufp->fullBit(oldp+126,((1U & (~ (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp)))));
    bufp->fullBit(oldp+127,((1U & (~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 1U)))));
    bufp->fullBit(oldp+128,((1U & (~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 2U)))));
    bufp->fullBit(oldp+129,((1U & (~ ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                      >> 3U)))));
    bufp->fullBit(oldp+130,((1U & (IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp))));
    bufp->fullBit(oldp+131,((1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                   >> 1U))));
    bufp->fullBit(oldp+132,((1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                   >> 2U))));
    bufp->fullBit(oldp+133,((1U & ((IData)(vlSelf->TOP__DOT__EX_io_ID2EX_bits_r_aluOp) 
                                   >> 3U))));
    bufp->fullSData(oldp+134,((((IData)((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_18))) 
                                << 9U) | (((IData)(
                                                   (3U 
                                                    == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_16))) 
                                           << 8U) | 
                                          (((IData)(
                                                    (7U 
                                                     == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_14))) 
                                            << 7U) 
                                           | (((IData)(
                                                       (3U 
                                                        == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_12))) 
                                               << 6U) 
                                              | (((IData)(
                                                          (3U 
                                                           == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_10))) 
                                                  << 5U) 
                                                 | (((IData)(
                                                             (7U 
                                                              == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_8))) 
                                                     << 4U) 
                                                    | (((IData)(
                                                                (3U 
                                                                 == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_6))) 
                                                        << 3U) 
                                                       | (((IData)(
                                                                   (0xfU 
                                                                    == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_4))) 
                                                           << 2U) 
                                                          | (((IData)(
                                                                      (0xfU 
                                                                       == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_2))) 
                                                              << 1U) 
                                                             | (0xfU 
                                                                == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))))))))))),10);
    bufp->fullBit(oldp+135,((0xfU == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T))));
    bufp->fullBit(oldp+136,((0xfU == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_2))));
    bufp->fullBit(oldp+137,((0xfU == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_4))));
    bufp->fullBit(oldp+138,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_6))));
    bufp->fullBit(oldp+139,((7U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_8))));
    bufp->fullBit(oldp+140,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_10))));
    bufp->fullBit(oldp+141,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_12))));
    bufp->fullBit(oldp+142,((3U == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T_16))));
    bufp->fullBit(oldp+143,((1U & (~ (IData)((0xfU 
                                              == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))))));
    bufp->fullIData(oldp+144,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB),32);
    bufp->fullQData(oldp+145,((0x1ffffffffULL & vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)),33);
    bufp->fullIData(oldp+147,((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1)),32);
    bufp->fullBit(oldp+148,((1U & (IData)((vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                           >> 0x20U)))));
    bufp->fullIData(oldp+149,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                               ^ vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),32);
    bufp->fullIData(oldp+150,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                               | vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),32);
    bufp->fullIData(oldp+151,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                               & vlSelf->TOP__DOT__EX__DOT__Alu_io_B)),32);
    bufp->fullIData(oldp+152,((1U & (((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB) 
                                      >> 0x1fU) | (
                                                   ((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     ^ vlSelf->TOP__DOT__EX__DOT__Alu__DOT__AdderB) 
                                                    >> 0x1fU) 
                                                   & (IData)(
                                                             (vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                              >> 0x1fU)))))),32);
    bufp->fullIData(oldp+153,((1U & ((~ (IData)((0xfU 
                                                 == (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT___Operation_T)))) 
                                     ^ (IData)((vlSelf->TOP__DOT__EX__DOT__Alu__DOT___AdderOut_T_1 
                                                >> 0x20U))))),32);
    bufp->fullBit(oldp+154,((1U & vlSelf->TOP__DOT__EX__DOT__Alu_io_B)));
    bufp->fullCData(oldp+155,(((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      << 2U)) | (3U 
                                                 & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din))),4);
    bufp->fullCData(oldp+156,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      << 3U)) | ((4U 
                                                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     << 1U)) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 1U))))),4);
    bufp->fullCData(oldp+157,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      << 2U)) | ((4U 
                                                  & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 2U))))),4);
    bufp->fullCData(oldp+158,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      << 1U)) | ((4U 
                                                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     >> 1U)) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 3U))))),4);
    bufp->fullCData(oldp+159,(((8U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                               | ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 2U)) | 
                                  (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                         >> 4U))))),4);
    bufp->fullCData(oldp+160,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 1U)) | ((4U 
                                                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     >> 3U)) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 5U))))),4);
    bufp->fullCData(oldp+161,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 2U)) | ((4U 
                                                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     >> 4U)) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 6U))))),4);
    bufp->fullCData(oldp+162,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 3U)) | ((4U 
                                                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     >> 5U)) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 7U))))),4);
    bufp->fullCData(oldp+163,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 4U)) | ((4U 
                                                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     >> 6U)) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 8U))))),4);
    bufp->fullCData(oldp+164,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 5U)) | ((4U 
                                                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     >> 7U)) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 9U))))),4);
    bufp->fullCData(oldp+165,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 6U)) | ((4U 
                                                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     >> 8U)) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 0xaU))))),4);
    bufp->fullCData(oldp+166,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 7U)) | ((4U 
                                                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     >> 9U)) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 0xbU))))),4);
    bufp->fullCData(oldp+167,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 8U)) | ((4U 
                                                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     >> 0xaU)) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 0xcU))))),4);
    bufp->fullCData(oldp+168,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 9U)) | ((4U 
                                                  & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                     >> 0xbU)) 
                                                 | (3U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 0xdU))))),4);
    bufp->fullCData(oldp+169,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xaU)) | (
                                                   (4U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 0xcU)) 
                                                   | (3U 
                                                      & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                         >> 0xeU))))),4);
    bufp->fullCData(oldp+170,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xbU)) | (
                                                   (4U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 0xdU)) 
                                                   | (3U 
                                                      & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                         >> 0xfU))))),4);
    bufp->fullCData(oldp+171,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xcU)) | (
                                                   (4U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 0xeU)) 
                                                   | (3U 
                                                      & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                         >> 0x10U))))),4);
    bufp->fullCData(oldp+172,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xdU)) | (
                                                   (4U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 0xfU)) 
                                                   | (3U 
                                                      & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                         >> 0x11U))))),4);
    bufp->fullCData(oldp+173,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xeU)) | (
                                                   (4U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 0x10U)) 
                                                   | (3U 
                                                      & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                         >> 0x12U))))),4);
    bufp->fullCData(oldp+174,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xfU)) | (
                                                   (4U 
                                                    & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                       >> 0x11U)) 
                                                   | (3U 
                                                      & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                         >> 0x13U))))),4);
    bufp->fullCData(oldp+175,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x10U)) | 
                               ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x12U)) | 
                                (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x14U))))),4);
    bufp->fullCData(oldp+176,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x11U)) | 
                               ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x13U)) | 
                                (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x15U))))),4);
    bufp->fullCData(oldp+177,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x12U)) | 
                               ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x14U)) | 
                                (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x16U))))),4);
    bufp->fullCData(oldp+178,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x13U)) | 
                               ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x15U)) | 
                                (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x17U))))),4);
    bufp->fullCData(oldp+179,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x14U)) | 
                               ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x16U)) | 
                                (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x18U))))),4);
    bufp->fullCData(oldp+180,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x15U)) | 
                               ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x17U)) | 
                                (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x19U))))),4);
    bufp->fullCData(oldp+181,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x16U)) | 
                               ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x18U)) | 
                                (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1aU))))),4);
    bufp->fullCData(oldp+182,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x17U)) | 
                               ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x19U)) | 
                                (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1bU))))),4);
    bufp->fullCData(oldp+183,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x18U)) | 
                               ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1aU)) | 
                                (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1cU))))),4);
    bufp->fullCData(oldp+184,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x19U)) | 
                               ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1bU)) | 
                                (3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1dU))))),4);
    bufp->fullCData(oldp+185,(((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1aU)) | 
                               ((4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1cU)) | 
                                (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                 >> 0x1eU)))),4);
    bufp->fullCData(oldp+186,((((8U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1bU)) | 
                                (4U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                       >> 0x1dU))) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                             >> 0x1fU)))),4);
    bufp->fullIData(oldp+187,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                 << 0x1fU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0)))))))))))))))))),32);
    bufp->fullBit(oldp+188,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                   >> 1U))));
    bufp->fullCData(oldp+189,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0)))),4);
    bufp->fullCData(oldp+190,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1)))),4);
    bufp->fullCData(oldp+191,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2)))),4);
    bufp->fullCData(oldp+192,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3)))),4);
    bufp->fullCData(oldp+193,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4)))),4);
    bufp->fullCData(oldp+194,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5)))),4);
    bufp->fullCData(oldp+195,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6)))),4);
    bufp->fullCData(oldp+196,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7)))),4);
    bufp->fullCData(oldp+197,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8)))),4);
    bufp->fullCData(oldp+198,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9)))),4);
    bufp->fullCData(oldp+199,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10)))),4);
    bufp->fullCData(oldp+200,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11)))),4);
    bufp->fullCData(oldp+201,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12)))),4);
    bufp->fullCData(oldp+202,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13)))),4);
    bufp->fullCData(oldp+203,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14)))),4);
    bufp->fullCData(oldp+204,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15)))),4);
    bufp->fullCData(oldp+205,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16)))),4);
    bufp->fullCData(oldp+206,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17)))),4);
    bufp->fullCData(oldp+207,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18)))),4);
    bufp->fullCData(oldp+208,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19)))),4);
    bufp->fullCData(oldp+209,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20)))),4);
    bufp->fullCData(oldp+210,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21)))),4);
    bufp->fullCData(oldp+211,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22)))),4);
    bufp->fullCData(oldp+212,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23)))),4);
    bufp->fullCData(oldp+213,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24)))),4);
    bufp->fullCData(oldp+214,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25)))),4);
    bufp->fullCData(oldp+215,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26)))),4);
    bufp->fullCData(oldp+216,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27)))),4);
    bufp->fullCData(oldp+217,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28)))),4);
    bufp->fullCData(oldp+218,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29)))),4);
    bufp->fullCData(oldp+219,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30)))),4);
    bufp->fullCData(oldp+220,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31)))),4);
    bufp->fullIData(oldp+221,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                 << 0x1fU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0)))))))))))))))))),32);
    bufp->fullBit(oldp+222,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                   >> 2U))));
    bufp->fullCData(oldp+223,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0)))),4);
    bufp->fullCData(oldp+224,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1)))),4);
    bufp->fullCData(oldp+225,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2)))),4);
    bufp->fullCData(oldp+226,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3)))),4);
    bufp->fullCData(oldp+227,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4)))),4);
    bufp->fullCData(oldp+228,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5)))),4);
    bufp->fullCData(oldp+229,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6)))),4);
    bufp->fullCData(oldp+230,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7)))),4);
    bufp->fullCData(oldp+231,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8)))),4);
    bufp->fullCData(oldp+232,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9)))),4);
    bufp->fullCData(oldp+233,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10)))),4);
    bufp->fullCData(oldp+234,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11)))),4);
    bufp->fullCData(oldp+235,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12)))),4);
    bufp->fullCData(oldp+236,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13)))),4);
    bufp->fullCData(oldp+237,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14)))),4);
    bufp->fullCData(oldp+238,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15)))),4);
    bufp->fullCData(oldp+239,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16)))),4);
    bufp->fullCData(oldp+240,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17)))),4);
    bufp->fullCData(oldp+241,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18)))),4);
    bufp->fullCData(oldp+242,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19)))),4);
    bufp->fullCData(oldp+243,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20)))),4);
    bufp->fullCData(oldp+244,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21)))),4);
    bufp->fullCData(oldp+245,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22)))),4);
    bufp->fullCData(oldp+246,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23)))),4);
    bufp->fullCData(oldp+247,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24)))),4);
    bufp->fullCData(oldp+248,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25)))),4);
    bufp->fullCData(oldp+249,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26)))),4);
    bufp->fullCData(oldp+250,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27)))),4);
    bufp->fullCData(oldp+251,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28)))),4);
    bufp->fullCData(oldp+252,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29)))),4);
    bufp->fullCData(oldp+253,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30)))),4);
    bufp->fullCData(oldp+254,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31)))),4);
    bufp->fullIData(oldp+255,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                 << 0x1fU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0)))))))))))))))))),32);
    bufp->fullBit(oldp+256,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                   >> 3U))));
    bufp->fullCData(oldp+257,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0)))),4);
    bufp->fullCData(oldp+258,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1)))),4);
    bufp->fullCData(oldp+259,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2)))),4);
    bufp->fullCData(oldp+260,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3)))),4);
    bufp->fullCData(oldp+261,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4)))),4);
    bufp->fullCData(oldp+262,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5)))),4);
    bufp->fullCData(oldp+263,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6)))),4);
    bufp->fullCData(oldp+264,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7)))),4);
    bufp->fullCData(oldp+265,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8)))),4);
    bufp->fullCData(oldp+266,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9)))),4);
    bufp->fullCData(oldp+267,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10)))),4);
    bufp->fullCData(oldp+268,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11)))),4);
    bufp->fullCData(oldp+269,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12)))),4);
    bufp->fullCData(oldp+270,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13)))),4);
    bufp->fullCData(oldp+271,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14)))),4);
    bufp->fullCData(oldp+272,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15)))),4);
    bufp->fullCData(oldp+273,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16)))),4);
    bufp->fullCData(oldp+274,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17)))),4);
    bufp->fullCData(oldp+275,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18)))),4);
    bufp->fullCData(oldp+276,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19)))),4);
    bufp->fullCData(oldp+277,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20)))),4);
    bufp->fullCData(oldp+278,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21)))),4);
    bufp->fullCData(oldp+279,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22)))),4);
    bufp->fullCData(oldp+280,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23)))),4);
    bufp->fullCData(oldp+281,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24)))),4);
    bufp->fullCData(oldp+282,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25)))),4);
    bufp->fullCData(oldp+283,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26)))),4);
    bufp->fullCData(oldp+284,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27)))),4);
    bufp->fullCData(oldp+285,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28)))),4);
    bufp->fullCData(oldp+286,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29)))),4);
    bufp->fullCData(oldp+287,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30)))),4);
    bufp->fullCData(oldp+288,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31)))),4);
    bufp->fullIData(oldp+289,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                 << 0x1fU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                                                                << 0x10U)))))))))))))))) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                   << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))))))))))))))))),32);
    bufp->fullBit(oldp+290,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                   >> 4U))));
    bufp->fullCData(oldp+291,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))),4);
    bufp->fullCData(oldp+292,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))),4);
    bufp->fullCData(oldp+293,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))),4);
    bufp->fullCData(oldp+294,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))),4);
    bufp->fullCData(oldp+295,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))),4);
    bufp->fullCData(oldp+296,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))),4);
    bufp->fullCData(oldp+297,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))),4);
    bufp->fullCData(oldp+298,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))),4);
    bufp->fullCData(oldp+299,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)))),4);
    bufp->fullCData(oldp+300,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)))),4);
    bufp->fullCData(oldp+301,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)))),4);
    bufp->fullCData(oldp+302,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)))),4);
    bufp->fullCData(oldp+303,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)))),4);
    bufp->fullCData(oldp+304,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)))),4);
    bufp->fullCData(oldp+305,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)))),4);
    bufp->fullCData(oldp+306,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                << 2U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                           << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)))),4);
    bufp->fullCData(oldp+307,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)))),4);
    bufp->fullCData(oldp+308,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)))),4);
    bufp->fullCData(oldp+309,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)))),4);
    bufp->fullCData(oldp+310,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)))),4);
    bufp->fullCData(oldp+311,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)))),4);
    bufp->fullCData(oldp+312,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)))),4);
    bufp->fullCData(oldp+313,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)))),4);
    bufp->fullCData(oldp+314,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)))),4);
    bufp->fullCData(oldp+315,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)))),4);
    bufp->fullCData(oldp+316,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)))),4);
    bufp->fullCData(oldp+317,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)))),4);
    bufp->fullCData(oldp+318,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)))),4);
    bufp->fullCData(oldp+319,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)))),4);
    bufp->fullCData(oldp+320,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)))),4);
    bufp->fullCData(oldp+321,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)))),4);
    bufp->fullCData(oldp+322,(((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                 << 3U) | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                           << 2U)) 
                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                   << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)))),4);
    bufp->fullBit(oldp+323,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit));
    bufp->fullBit(oldp+324,((1U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din)));
    bufp->fullBit(oldp+325,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 1U))));
    bufp->fullBit(oldp+326,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 2U))));
    bufp->fullBit(oldp+327,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 3U))));
    bufp->fullBit(oldp+328,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 4U))));
    bufp->fullBit(oldp+329,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 5U))));
    bufp->fullBit(oldp+330,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 6U))));
    bufp->fullBit(oldp+331,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 7U))));
    bufp->fullBit(oldp+332,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 8U))));
    bufp->fullBit(oldp+333,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 9U))));
    bufp->fullBit(oldp+334,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0xaU))));
    bufp->fullBit(oldp+335,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0xbU))));
    bufp->fullBit(oldp+336,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0xcU))));
    bufp->fullBit(oldp+337,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0xdU))));
    bufp->fullBit(oldp+338,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0xeU))));
    bufp->fullBit(oldp+339,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0xfU))));
    bufp->fullBit(oldp+340,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x10U))));
    bufp->fullBit(oldp+341,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x11U))));
    bufp->fullBit(oldp+342,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x12U))));
    bufp->fullBit(oldp+343,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x13U))));
    bufp->fullBit(oldp+344,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x14U))));
    bufp->fullBit(oldp+345,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x15U))));
    bufp->fullBit(oldp+346,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x16U))));
    bufp->fullBit(oldp+347,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x17U))));
    bufp->fullBit(oldp+348,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x18U))));
    bufp->fullBit(oldp+349,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x19U))));
    bufp->fullBit(oldp+350,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+351,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+352,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+353,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+354,((1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+355,((3U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din)),2);
    bufp->fullCData(oldp+356,((1U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din)),2);
    bufp->fullCData(oldp+357,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 1U))),2);
    bufp->fullCData(oldp+358,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      << 1U)) | (1U 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 1U)))),2);
    bufp->fullCData(oldp+359,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 2U))),2);
    bufp->fullCData(oldp+360,(((2U & vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din) 
                               | (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                        >> 2U)))),2);
    bufp->fullCData(oldp+361,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 3U))),2);
    bufp->fullCData(oldp+362,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 1U)) | (1U 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 3U)))),2);
    bufp->fullCData(oldp+363,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 4U))),2);
    bufp->fullCData(oldp+364,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 2U)) | (1U 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 4U)))),2);
    bufp->fullCData(oldp+365,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 5U))),2);
    bufp->fullCData(oldp+366,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 3U)) | (1U 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 5U)))),2);
    bufp->fullCData(oldp+367,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 6U))),2);
    bufp->fullCData(oldp+368,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 4U)) | (1U 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 6U)))),2);
    bufp->fullCData(oldp+369,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 7U))),2);
    bufp->fullCData(oldp+370,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 5U)) | (1U 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 7U)))),2);
    bufp->fullCData(oldp+371,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 8U))),2);
    bufp->fullCData(oldp+372,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 6U)) | (1U 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 8U)))),2);
    bufp->fullCData(oldp+373,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 9U))),2);
    bufp->fullCData(oldp+374,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 7U)) | (1U 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 9U)))),2);
    bufp->fullCData(oldp+375,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+376,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 8U)) | (1U 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 0xaU)))),2);
    bufp->fullCData(oldp+377,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0xbU))),2);
    bufp->fullCData(oldp+378,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 9U)) | (1U 
                                                 & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                    >> 0xbU)))),2);
    bufp->fullCData(oldp+379,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0xcU))),2);
    bufp->fullCData(oldp+380,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xaU)) | (1U 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xcU)))),2);
    bufp->fullCData(oldp+381,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0xdU))),2);
    bufp->fullCData(oldp+382,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xbU)) | (1U 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xdU)))),2);
    bufp->fullCData(oldp+383,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0xeU))),2);
    bufp->fullCData(oldp+384,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xcU)) | (1U 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xeU)))),2);
    bufp->fullCData(oldp+385,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0xfU))),2);
    bufp->fullCData(oldp+386,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xdU)) | (1U 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0xfU)))),2);
    bufp->fullCData(oldp+387,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x10U))),2);
    bufp->fullCData(oldp+388,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xeU)) | (1U 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0x10U)))),2);
    bufp->fullCData(oldp+389,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x11U))),2);
    bufp->fullCData(oldp+390,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0xfU)) | (1U 
                                                   & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                                      >> 0x11U)))),2);
    bufp->fullCData(oldp+391,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x12U))),2);
    bufp->fullCData(oldp+392,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x10U)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x12U)))),2);
    bufp->fullCData(oldp+393,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x13U))),2);
    bufp->fullCData(oldp+394,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x11U)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x13U)))),2);
    bufp->fullCData(oldp+395,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x14U))),2);
    bufp->fullCData(oldp+396,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x12U)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x14U)))),2);
    bufp->fullCData(oldp+397,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x15U))),2);
    bufp->fullCData(oldp+398,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x13U)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x15U)))),2);
    bufp->fullCData(oldp+399,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x16U))),2);
    bufp->fullCData(oldp+400,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x14U)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x16U)))),2);
    bufp->fullCData(oldp+401,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x17U))),2);
    bufp->fullCData(oldp+402,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x15U)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x17U)))),2);
    bufp->fullCData(oldp+403,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x18U))),2);
    bufp->fullCData(oldp+404,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x16U)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x18U)))),2);
    bufp->fullCData(oldp+405,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x19U))),2);
    bufp->fullCData(oldp+406,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x17U)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x19U)))),2);
    bufp->fullCData(oldp+407,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x1aU))),2);
    bufp->fullCData(oldp+408,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x18U)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1aU)))),2);
    bufp->fullCData(oldp+409,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x1bU))),2);
    bufp->fullCData(oldp+410,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x19U)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1bU)))),2);
    bufp->fullCData(oldp+411,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x1cU))),2);
    bufp->fullCData(oldp+412,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1aU)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1cU)))),2);
    bufp->fullCData(oldp+413,((3U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                     >> 0x1dU))),2);
    bufp->fullCData(oldp+414,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1bU)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1dU)))),2);
    bufp->fullCData(oldp+415,((vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                               >> 0x1eU)),2);
    bufp->fullCData(oldp+416,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1cU)) | 
                               (1U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1eU)))),2);
    bufp->fullCData(oldp+417,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                          >> 0x1fU))),2);
    bufp->fullCData(oldp+418,(((2U & (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                      >> 0x1dU)) | 
                               (vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter_io_din 
                                >> 0x1fU))),2);
    bufp->fullBit(oldp+419,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0));
    bufp->fullBit(oldp+420,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2));
    bufp->fullBit(oldp+421,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1));
    bufp->fullBit(oldp+422,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3));
    bufp->fullBit(oldp+423,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4));
    bufp->fullBit(oldp+424,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5));
    bufp->fullBit(oldp+425,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6));
    bufp->fullBit(oldp+426,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7));
    bufp->fullBit(oldp+427,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8));
    bufp->fullBit(oldp+428,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9));
    bufp->fullBit(oldp+429,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10));
    bufp->fullBit(oldp+430,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11));
    bufp->fullBit(oldp+431,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12));
    bufp->fullBit(oldp+432,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13));
    bufp->fullBit(oldp+433,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14));
    bufp->fullBit(oldp+434,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15));
    bufp->fullBit(oldp+435,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16));
    bufp->fullBit(oldp+436,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17));
    bufp->fullBit(oldp+437,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18));
    bufp->fullBit(oldp+438,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19));
    bufp->fullBit(oldp+439,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20));
    bufp->fullBit(oldp+440,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21));
    bufp->fullBit(oldp+441,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22));
    bufp->fullBit(oldp+442,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23));
    bufp->fullBit(oldp+443,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24));
    bufp->fullBit(oldp+444,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25));
    bufp->fullBit(oldp+445,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26));
    bufp->fullBit(oldp+446,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27));
    bufp->fullBit(oldp+447,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28));
    bufp->fullBit(oldp+448,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29));
    bufp->fullBit(oldp+449,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30));
    bufp->fullBit(oldp+450,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31));
    bufp->fullCData(oldp+451,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))),2);
    bufp->fullCData(oldp+452,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0),2);
    bufp->fullCData(oldp+453,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1))),2);
    bufp->fullCData(oldp+454,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1),2);
    bufp->fullCData(oldp+455,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2))),2);
    bufp->fullCData(oldp+456,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2))),2);
    bufp->fullCData(oldp+457,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3))),2);
    bufp->fullCData(oldp+458,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3))),2);
    bufp->fullCData(oldp+459,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4))),2);
    bufp->fullCData(oldp+460,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4))),2);
    bufp->fullCData(oldp+461,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5))),2);
    bufp->fullCData(oldp+462,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5))),2);
    bufp->fullCData(oldp+463,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6))),2);
    bufp->fullCData(oldp+464,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6))),2);
    bufp->fullCData(oldp+465,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7))),2);
    bufp->fullCData(oldp+466,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7))),2);
    bufp->fullCData(oldp+467,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8))),2);
    bufp->fullCData(oldp+468,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8))),2);
    bufp->fullCData(oldp+469,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9))),2);
    bufp->fullCData(oldp+470,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9))),2);
    bufp->fullCData(oldp+471,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10))),2);
    bufp->fullCData(oldp+472,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10))),2);
    bufp->fullCData(oldp+473,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11))),2);
    bufp->fullCData(oldp+474,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11))),2);
    bufp->fullCData(oldp+475,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12))),2);
    bufp->fullCData(oldp+476,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12))),2);
    bufp->fullCData(oldp+477,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13))),2);
    bufp->fullCData(oldp+478,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13))),2);
    bufp->fullCData(oldp+479,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14))),2);
    bufp->fullCData(oldp+480,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14))),2);
    bufp->fullCData(oldp+481,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15))),2);
    bufp->fullCData(oldp+482,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15))),2);
    bufp->fullCData(oldp+483,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))),2);
    bufp->fullCData(oldp+484,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))),2);
    bufp->fullCData(oldp+485,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17))),2);
    bufp->fullCData(oldp+486,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17))),2);
    bufp->fullCData(oldp+487,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18))),2);
    bufp->fullCData(oldp+488,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18))),2);
    bufp->fullCData(oldp+489,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19))),2);
    bufp->fullCData(oldp+490,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19))),2);
    bufp->fullCData(oldp+491,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20))),2);
    bufp->fullCData(oldp+492,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20))),2);
    bufp->fullCData(oldp+493,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21))),2);
    bufp->fullCData(oldp+494,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21))),2);
    bufp->fullCData(oldp+495,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22))),2);
    bufp->fullCData(oldp+496,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22))),2);
    bufp->fullCData(oldp+497,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23))),2);
    bufp->fullCData(oldp+498,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23))),2);
    bufp->fullCData(oldp+499,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24))),2);
    bufp->fullCData(oldp+500,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24))),2);
    bufp->fullCData(oldp+501,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25))),2);
    bufp->fullCData(oldp+502,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25))),2);
    bufp->fullCData(oldp+503,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26))),2);
    bufp->fullCData(oldp+504,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26))),2);
    bufp->fullCData(oldp+505,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27))),2);
    bufp->fullCData(oldp+506,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27))),2);
    bufp->fullCData(oldp+507,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28))),2);
    bufp->fullCData(oldp+508,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28))),2);
    bufp->fullCData(oldp+509,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29))),2);
    bufp->fullCData(oldp+510,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29))),2);
    bufp->fullCData(oldp+511,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30))),2);
    bufp->fullCData(oldp+512,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30))),2);
    bufp->fullCData(oldp+513,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31))),2);
    bufp->fullCData(oldp+514,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31))),2);
    bufp->fullBit(oldp+515,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0));
    bufp->fullBit(oldp+516,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4));
    bufp->fullBit(oldp+517,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1));
    bufp->fullBit(oldp+518,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5));
    bufp->fullBit(oldp+519,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2));
    bufp->fullBit(oldp+520,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6));
    bufp->fullBit(oldp+521,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3));
    bufp->fullBit(oldp+522,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7));
    bufp->fullBit(oldp+523,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8));
    bufp->fullBit(oldp+524,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9));
    bufp->fullBit(oldp+525,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10));
    bufp->fullBit(oldp+526,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11));
    bufp->fullBit(oldp+527,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12));
    bufp->fullBit(oldp+528,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13));
    bufp->fullBit(oldp+529,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14));
    bufp->fullBit(oldp+530,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15));
    bufp->fullBit(oldp+531,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16));
    bufp->fullBit(oldp+532,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17));
    bufp->fullBit(oldp+533,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18));
    bufp->fullBit(oldp+534,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19));
    bufp->fullBit(oldp+535,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20));
    bufp->fullBit(oldp+536,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21));
    bufp->fullBit(oldp+537,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22));
    bufp->fullBit(oldp+538,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23));
    bufp->fullBit(oldp+539,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24));
    bufp->fullBit(oldp+540,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25));
    bufp->fullBit(oldp+541,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26));
    bufp->fullBit(oldp+542,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27));
    bufp->fullBit(oldp+543,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28));
    bufp->fullBit(oldp+544,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29));
    bufp->fullBit(oldp+545,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30));
    bufp->fullBit(oldp+546,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31));
    bufp->fullCData(oldp+547,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))),2);
    bufp->fullCData(oldp+548,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0),2);
    bufp->fullCData(oldp+549,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1))),2);
    bufp->fullCData(oldp+550,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1),2);
    bufp->fullCData(oldp+551,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2))),2);
    bufp->fullCData(oldp+552,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2),2);
    bufp->fullCData(oldp+553,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3))),2);
    bufp->fullCData(oldp+554,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3),2);
    bufp->fullCData(oldp+555,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4))),2);
    bufp->fullCData(oldp+556,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4))),2);
    bufp->fullCData(oldp+557,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5))),2);
    bufp->fullCData(oldp+558,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5))),2);
    bufp->fullCData(oldp+559,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6))),2);
    bufp->fullCData(oldp+560,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6))),2);
    bufp->fullCData(oldp+561,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7))),2);
    bufp->fullCData(oldp+562,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7))),2);
    bufp->fullCData(oldp+563,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8))),2);
    bufp->fullCData(oldp+564,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8))),2);
    bufp->fullCData(oldp+565,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9))),2);
    bufp->fullCData(oldp+566,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9))),2);
    bufp->fullCData(oldp+567,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10))),2);
    bufp->fullCData(oldp+568,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10))),2);
    bufp->fullCData(oldp+569,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11))),2);
    bufp->fullCData(oldp+570,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11))),2);
    bufp->fullCData(oldp+571,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12))),2);
    bufp->fullCData(oldp+572,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12))),2);
    bufp->fullCData(oldp+573,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13))),2);
    bufp->fullCData(oldp+574,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13))),2);
    bufp->fullCData(oldp+575,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14))),2);
    bufp->fullCData(oldp+576,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14))),2);
    bufp->fullCData(oldp+577,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15))),2);
    bufp->fullCData(oldp+578,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15))),2);
    bufp->fullCData(oldp+579,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))),2);
    bufp->fullCData(oldp+580,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))),2);
    bufp->fullCData(oldp+581,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17))),2);
    bufp->fullCData(oldp+582,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17))),2);
    bufp->fullCData(oldp+583,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18))),2);
    bufp->fullCData(oldp+584,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18))),2);
    bufp->fullCData(oldp+585,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19))),2);
    bufp->fullCData(oldp+586,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19))),2);
    bufp->fullCData(oldp+587,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20))),2);
    bufp->fullCData(oldp+588,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20))),2);
    bufp->fullCData(oldp+589,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21))),2);
    bufp->fullCData(oldp+590,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21))),2);
    bufp->fullCData(oldp+591,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22))),2);
    bufp->fullCData(oldp+592,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22))),2);
    bufp->fullCData(oldp+593,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23))),2);
    bufp->fullCData(oldp+594,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23))),2);
    bufp->fullCData(oldp+595,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24))),2);
    bufp->fullCData(oldp+596,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24))),2);
    bufp->fullCData(oldp+597,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25))),2);
    bufp->fullCData(oldp+598,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25))),2);
    bufp->fullCData(oldp+599,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26))),2);
    bufp->fullCData(oldp+600,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26))),2);
    bufp->fullCData(oldp+601,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27))),2);
    bufp->fullCData(oldp+602,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27))),2);
    bufp->fullCData(oldp+603,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28))),2);
    bufp->fullCData(oldp+604,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28))),2);
    bufp->fullCData(oldp+605,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29))),2);
    bufp->fullCData(oldp+606,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29))),2);
    bufp->fullCData(oldp+607,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30))),2);
    bufp->fullCData(oldp+608,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30))),2);
    bufp->fullCData(oldp+609,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31))),2);
    bufp->fullCData(oldp+610,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31))),2);
    bufp->fullBit(oldp+611,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0));
    bufp->fullBit(oldp+612,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8));
    bufp->fullBit(oldp+613,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1));
    bufp->fullBit(oldp+614,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9));
    bufp->fullBit(oldp+615,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2));
    bufp->fullBit(oldp+616,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10));
    bufp->fullBit(oldp+617,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3));
    bufp->fullBit(oldp+618,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11));
    bufp->fullBit(oldp+619,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4));
    bufp->fullBit(oldp+620,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12));
    bufp->fullBit(oldp+621,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5));
    bufp->fullBit(oldp+622,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13));
    bufp->fullBit(oldp+623,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6));
    bufp->fullBit(oldp+624,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14));
    bufp->fullBit(oldp+625,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7));
    bufp->fullBit(oldp+626,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15));
    bufp->fullBit(oldp+627,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16));
    bufp->fullBit(oldp+628,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17));
    bufp->fullBit(oldp+629,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18));
    bufp->fullBit(oldp+630,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19));
    bufp->fullBit(oldp+631,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20));
    bufp->fullBit(oldp+632,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21));
    bufp->fullBit(oldp+633,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22));
    bufp->fullBit(oldp+634,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23));
    bufp->fullBit(oldp+635,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24));
    bufp->fullBit(oldp+636,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25));
    bufp->fullBit(oldp+637,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26));
    bufp->fullBit(oldp+638,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27));
    bufp->fullBit(oldp+639,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28));
    bufp->fullBit(oldp+640,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29));
    bufp->fullBit(oldp+641,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30));
    bufp->fullBit(oldp+642,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31));
    bufp->fullCData(oldp+643,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))),2);
    bufp->fullCData(oldp+644,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0),2);
    bufp->fullCData(oldp+645,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1))),2);
    bufp->fullCData(oldp+646,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1),2);
    bufp->fullCData(oldp+647,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2))),2);
    bufp->fullCData(oldp+648,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2),2);
    bufp->fullCData(oldp+649,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3))),2);
    bufp->fullCData(oldp+650,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3),2);
    bufp->fullCData(oldp+651,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4))),2);
    bufp->fullCData(oldp+652,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4),2);
    bufp->fullCData(oldp+653,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5))),2);
    bufp->fullCData(oldp+654,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5),2);
    bufp->fullCData(oldp+655,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6))),2);
    bufp->fullCData(oldp+656,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6),2);
    bufp->fullCData(oldp+657,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7))),2);
    bufp->fullCData(oldp+658,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7),2);
    bufp->fullCData(oldp+659,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8))),2);
    bufp->fullCData(oldp+660,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8))),2);
    bufp->fullCData(oldp+661,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9))),2);
    bufp->fullCData(oldp+662,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9))),2);
    bufp->fullCData(oldp+663,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10))),2);
    bufp->fullCData(oldp+664,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10))),2);
    bufp->fullCData(oldp+665,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11))),2);
    bufp->fullCData(oldp+666,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11))),2);
    bufp->fullCData(oldp+667,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12))),2);
    bufp->fullCData(oldp+668,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12))),2);
    bufp->fullCData(oldp+669,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13))),2);
    bufp->fullCData(oldp+670,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13))),2);
    bufp->fullCData(oldp+671,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14))),2);
    bufp->fullCData(oldp+672,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14))),2);
    bufp->fullCData(oldp+673,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15))),2);
    bufp->fullCData(oldp+674,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15))),2);
    bufp->fullCData(oldp+675,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))),2);
    bufp->fullCData(oldp+676,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))),2);
    bufp->fullCData(oldp+677,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17))),2);
    bufp->fullCData(oldp+678,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17))),2);
    bufp->fullCData(oldp+679,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18))),2);
    bufp->fullCData(oldp+680,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18))),2);
    bufp->fullCData(oldp+681,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19))),2);
    bufp->fullCData(oldp+682,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19))),2);
    bufp->fullCData(oldp+683,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20))),2);
    bufp->fullCData(oldp+684,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20))),2);
    bufp->fullCData(oldp+685,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21))),2);
    bufp->fullCData(oldp+686,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21))),2);
    bufp->fullCData(oldp+687,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22))),2);
    bufp->fullCData(oldp+688,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22))),2);
    bufp->fullCData(oldp+689,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23))),2);
    bufp->fullCData(oldp+690,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23))),2);
    bufp->fullCData(oldp+691,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24))),2);
    bufp->fullCData(oldp+692,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24))),2);
    bufp->fullCData(oldp+693,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25))),2);
    bufp->fullCData(oldp+694,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25))),2);
    bufp->fullCData(oldp+695,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26))),2);
    bufp->fullCData(oldp+696,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26))),2);
    bufp->fullCData(oldp+697,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27))),2);
    bufp->fullCData(oldp+698,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27))),2);
    bufp->fullCData(oldp+699,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28))),2);
    bufp->fullCData(oldp+700,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28))),2);
    bufp->fullCData(oldp+701,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29))),2);
    bufp->fullCData(oldp+702,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29))),2);
    bufp->fullCData(oldp+703,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30))),2);
    bufp->fullCData(oldp+704,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30))),2);
    bufp->fullCData(oldp+705,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31))),2);
    bufp->fullCData(oldp+706,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31))),2);
    bufp->fullBit(oldp+707,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0));
    bufp->fullBit(oldp+708,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16));
    bufp->fullBit(oldp+709,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1));
    bufp->fullBit(oldp+710,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17));
    bufp->fullBit(oldp+711,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2));
    bufp->fullBit(oldp+712,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18));
    bufp->fullBit(oldp+713,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3));
    bufp->fullBit(oldp+714,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19));
    bufp->fullBit(oldp+715,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4));
    bufp->fullBit(oldp+716,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20));
    bufp->fullBit(oldp+717,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5));
    bufp->fullBit(oldp+718,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21));
    bufp->fullBit(oldp+719,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6));
    bufp->fullBit(oldp+720,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22));
    bufp->fullBit(oldp+721,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7));
    bufp->fullBit(oldp+722,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23));
    bufp->fullBit(oldp+723,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8));
    bufp->fullBit(oldp+724,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24));
    bufp->fullBit(oldp+725,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9));
    bufp->fullBit(oldp+726,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25));
    bufp->fullBit(oldp+727,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10));
    bufp->fullBit(oldp+728,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26));
    bufp->fullBit(oldp+729,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11));
    bufp->fullBit(oldp+730,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27));
    bufp->fullBit(oldp+731,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12));
    bufp->fullBit(oldp+732,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28));
    bufp->fullBit(oldp+733,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13));
    bufp->fullBit(oldp+734,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29));
    bufp->fullBit(oldp+735,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14));
    bufp->fullBit(oldp+736,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30));
    bufp->fullBit(oldp+737,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15));
    bufp->fullBit(oldp+738,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31));
    bufp->fullCData(oldp+739,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))),2);
    bufp->fullCData(oldp+740,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0),2);
    bufp->fullCData(oldp+741,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1))),2);
    bufp->fullCData(oldp+742,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1),2);
    bufp->fullCData(oldp+743,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2))),2);
    bufp->fullCData(oldp+744,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2),2);
    bufp->fullCData(oldp+745,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3))),2);
    bufp->fullCData(oldp+746,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3),2);
    bufp->fullCData(oldp+747,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4))),2);
    bufp->fullCData(oldp+748,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4),2);
    bufp->fullCData(oldp+749,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5))),2);
    bufp->fullCData(oldp+750,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5),2);
    bufp->fullCData(oldp+751,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6))),2);
    bufp->fullCData(oldp+752,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6),2);
    bufp->fullCData(oldp+753,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7))),2);
    bufp->fullCData(oldp+754,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7),2);
    bufp->fullCData(oldp+755,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8))),2);
    bufp->fullCData(oldp+756,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8),2);
    bufp->fullCData(oldp+757,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9))),2);
    bufp->fullCData(oldp+758,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9),2);
    bufp->fullCData(oldp+759,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10))),2);
    bufp->fullCData(oldp+760,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10),2);
    bufp->fullCData(oldp+761,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11))),2);
    bufp->fullCData(oldp+762,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11),2);
    bufp->fullCData(oldp+763,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12))),2);
    bufp->fullCData(oldp+764,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12),2);
    bufp->fullCData(oldp+765,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13))),2);
    bufp->fullCData(oldp+766,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13),2);
    bufp->fullCData(oldp+767,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14))),2);
    bufp->fullCData(oldp+768,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14),2);
    bufp->fullCData(oldp+769,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15))),2);
    bufp->fullCData(oldp+770,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15),2);
    bufp->fullCData(oldp+771,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))),2);
    bufp->fullCData(oldp+772,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))),2);
    bufp->fullCData(oldp+773,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))),2);
    bufp->fullCData(oldp+774,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))),2);
    bufp->fullCData(oldp+775,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))),2);
    bufp->fullCData(oldp+776,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))),2);
    bufp->fullCData(oldp+777,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))),2);
    bufp->fullCData(oldp+778,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))),2);
    bufp->fullCData(oldp+779,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))),2);
    bufp->fullCData(oldp+780,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))),2);
    bufp->fullCData(oldp+781,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))),2);
    bufp->fullCData(oldp+782,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))),2);
    bufp->fullCData(oldp+783,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))),2);
    bufp->fullCData(oldp+784,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))),2);
    bufp->fullCData(oldp+785,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))),2);
    bufp->fullCData(oldp+786,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))),2);
    bufp->fullCData(oldp+787,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))),2);
    bufp->fullCData(oldp+788,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))),2);
    bufp->fullCData(oldp+789,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))),2);
    bufp->fullCData(oldp+790,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))),2);
    bufp->fullCData(oldp+791,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))),2);
    bufp->fullCData(oldp+792,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))),2);
    bufp->fullCData(oldp+793,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))),2);
    bufp->fullCData(oldp+794,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))),2);
    bufp->fullCData(oldp+795,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))),2);
    bufp->fullCData(oldp+796,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))),2);
    bufp->fullCData(oldp+797,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))),2);
    bufp->fullCData(oldp+798,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))),2);
    bufp->fullCData(oldp+799,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))),2);
    bufp->fullCData(oldp+800,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))),2);
    bufp->fullCData(oldp+801,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__FillBit) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))),2);
    bufp->fullCData(oldp+802,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                << 1U) | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))),2);
    bufp->fullBit(oldp+803,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftL));
    bufp->fullBit(oldp+804,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__ShiftR));
    bufp->fullBit(oldp+805,((1U & (~ vlSelf->TOP__DOT__EX__DOT__Alu_io_B))));
    bufp->fullCData(oldp+806,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                           << 6U) | 
                                          (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                            << 5U) 
                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                               << 4U) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))))))))),8);
    bufp->fullSData(oldp+807,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_15) 
                                << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_14) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_13) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_0))))))))))))))))),16);
    bufp->fullCData(oldp+808,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                           << 6U) | 
                                          (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                            << 5U) 
                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                               << 4U) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))))))))),8);
    bufp->fullSData(oldp+809,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_31) 
                                << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_30) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_29) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_28) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_27) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_26) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_25) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_24) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_23) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_22) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_21) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_20) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_19) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_0__DOT__switch_16))))))))))))))))),16);
    bufp->fullBit(oldp+810,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftL));
    bufp->fullBit(oldp+811,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__ShiftR));
    bufp->fullBit(oldp+812,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 1U)))));
    bufp->fullCData(oldp+813,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                           << 6U) | 
                                          (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                            << 5U) 
                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                               << 4U) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))))))))),8);
    bufp->fullSData(oldp+814,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_15) 
                                << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_14) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_13) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_0))))))))))))))))),16);
    bufp->fullCData(oldp+815,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                           << 6U) | 
                                          (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                            << 5U) 
                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                               << 4U) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))))))))),8);
    bufp->fullSData(oldp+816,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_31) 
                                << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_30) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_29) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_28) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_27) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_26) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_25) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_24) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_23) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_22) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_21) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_20) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_19) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_1__DOT__switch_16))))))))))))))))),16);
    bufp->fullBit(oldp+817,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftL));
    bufp->fullBit(oldp+818,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__ShiftR));
    bufp->fullBit(oldp+819,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 2U)))));
    bufp->fullCData(oldp+820,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                           << 6U) | 
                                          (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                            << 5U) 
                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                               << 4U) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))))))))),8);
    bufp->fullSData(oldp+821,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_15) 
                                << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_14) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_13) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_0))))))))))))))))),16);
    bufp->fullCData(oldp+822,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                           << 6U) | 
                                          (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                            << 5U) 
                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                               << 4U) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))))))))),8);
    bufp->fullSData(oldp+823,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_31) 
                                << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_30) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_29) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_28) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_27) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_26) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_25) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_24) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_23) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_22) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_21) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_20) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_19) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_2__DOT__switch_16))))))))))))))))),16);
    bufp->fullBit(oldp+824,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftL));
    bufp->fullBit(oldp+825,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__ShiftR));
    bufp->fullBit(oldp+826,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 3U)))));
    bufp->fullCData(oldp+827,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                           << 6U) | 
                                          (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                            << 5U) 
                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                               << 4U) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))))))))),8);
    bufp->fullSData(oldp+828,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15) 
                                << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))))))))))))))))),16);
    bufp->fullCData(oldp+829,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                << 7U) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                           << 6U) | 
                                          (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                            << 5U) 
                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                               << 4U) 
                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))),8);
    bufp->fullSData(oldp+830,((((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31) 
                                << 0xfU) | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))))))))))),16);
    bufp->fullBit(oldp+831,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL));
    bufp->fullBit(oldp+832,(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR));
    bufp->fullBit(oldp+833,((1U & (~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)))));
    bufp->fullBit(oldp+834,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)))));
    bufp->fullBit(oldp+835,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)))));
    bufp->fullBit(oldp+836,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)))));
    bufp->fullBit(oldp+837,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)))));
    bufp->fullBit(oldp+838,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)))));
    bufp->fullBit(oldp+839,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)))));
    bufp->fullBit(oldp+840,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)))));
    bufp->fullBit(oldp+841,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)))));
    bufp->fullBit(oldp+842,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)))));
    bufp->fullBit(oldp+843,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)))));
    bufp->fullBit(oldp+844,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)))));
    bufp->fullBit(oldp+845,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)))));
    bufp->fullBit(oldp+846,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)))));
    bufp->fullBit(oldp+847,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)))));
    bufp->fullBit(oldp+848,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)))));
    bufp->fullBit(oldp+849,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)) 
                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)))));
    bufp->fullBit(oldp+850,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0))))));
    bufp->fullBit(oldp+851,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1))))));
    bufp->fullBit(oldp+852,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2))))));
    bufp->fullBit(oldp+853,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3))))));
    bufp->fullBit(oldp+854,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4))))));
    bufp->fullBit(oldp+855,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5))))));
    bufp->fullBit(oldp+856,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6))))));
    bufp->fullBit(oldp+857,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7))))));
    bufp->fullBit(oldp+858,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8))))));
    bufp->fullBit(oldp+859,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9))))));
    bufp->fullBit(oldp+860,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10))))));
    bufp->fullBit(oldp+861,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11))))));
    bufp->fullBit(oldp+862,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12))))));
    bufp->fullBit(oldp+863,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13))))));
    bufp->fullBit(oldp+864,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14))))));
    bufp->fullBit(oldp+865,((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                  >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)) 
                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15))))));
    bufp->fullCData(oldp+866,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)) 
                                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))) 
                                << 7U) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                 >> 4U)) 
                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)) 
                                            | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))) 
                                           << 6U) | 
                                          (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                  >> 4U)) 
                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)) 
                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))) 
                                            << 5U) 
                                           | (((((~ 
                                                  (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)) 
                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))) 
                                               << 4U) 
                                              | (((((~ 
                                                     (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                      >> 4U)) 
                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)) 
                                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))) 
                                                  << 3U) 
                                                 | (((((~ 
                                                        (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                         >> 4U)) 
                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)) 
                                                      | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))) 
                                                     << 2U) 
                                                    | (((((~ 
                                                           (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                            >> 4U)) 
                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)) 
                                                         | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))) 
                                                        << 1U) 
                                                       | (((~ 
                                                            (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                             >> 4U)) 
                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)) 
                                                          | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))))),8);
    bufp->fullSData(oldp+867,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)) 
                                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31))) 
                                << 0xfU) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                   >> 4U)) 
                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)) 
                                              | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30))) 
                                             << 0xeU) 
                                            | (((((~ 
                                                   (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                    >> 4U)) 
                                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)) 
                                                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29))) 
                                                << 0xdU) 
                                               | (((((~ 
                                                      (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                       >> 4U)) 
                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)) 
                                                    | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28))) 
                                                   << 0xcU) 
                                                  | (((((~ 
                                                         (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                          >> 4U)) 
                                                        & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)) 
                                                       | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27))) 
                                                      << 0xbU) 
                                                     | (((((~ 
                                                            (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                             >> 4U)) 
                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)) 
                                                          | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26))) 
                                                         << 0xaU) 
                                                        | (((((~ 
                                                               (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                >> 4U)) 
                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)) 
                                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25))) 
                                                            << 9U) 
                                                           | (((((~ 
                                                                  (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                   >> 4U)) 
                                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)) 
                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24))) 
                                                               << 8U) 
                                                              | (((((~ 
                                                                     (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                      >> 4U)) 
                                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)) 
                                                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23))) 
                                                                  << 7U) 
                                                                 | (((((~ 
                                                                        (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                         >> 4U)) 
                                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)) 
                                                                      | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22))) 
                                                                     << 6U) 
                                                                    | (((((~ 
                                                                           (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                            >> 4U)) 
                                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)) 
                                                                         | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21))) 
                                                                        << 5U) 
                                                                       | (((((~ 
                                                                              (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                               >> 4U)) 
                                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)) 
                                                                            | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20))) 
                                                                           << 4U) 
                                                                          | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)) 
                                                                               | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19))) 
                                                                              << 3U) 
                                                                             | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18))) 
                                                                                << 2U) 
                                                                                | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17))) 
                                                                                << 1U) 
                                                                                | (((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftR) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16))))))))))))))))))),16);
    bufp->fullCData(oldp+868,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                    | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))) 
                                << 7U) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                 >> 4U)) 
                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                            | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                               | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))) 
                                           << 6U) | 
                                          (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                  >> 4U)) 
                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))) 
                                            << 5U) 
                                           | (((((~ 
                                                  (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                   >> 4U)) 
                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))) 
                                               << 4U) 
                                              | (((((~ 
                                                     (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                      >> 4U)) 
                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                                   | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                      | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))) 
                                                  << 3U) 
                                                 | (((((~ 
                                                        (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                         >> 4U)) 
                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                                      | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                         | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))) 
                                                     << 2U) 
                                                    | (((((~ 
                                                           (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                            >> 4U)) 
                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                                         | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                            | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))) 
                                                        << 1U) 
                                                       | (((~ 
                                                            (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                             >> 4U)) 
                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                                          | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))))))))))),8);
    bufp->fullSData(oldp+869,((((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                      >> 4U)) & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_31)) 
                                 | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                    | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_15)))) 
                                << 0xfU) | (((((~ (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                   >> 4U)) 
                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_30)) 
                                              | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                 | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_14)))) 
                                             << 0xeU) 
                                            | (((((~ 
                                                   (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                    >> 4U)) 
                                                  & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_29)) 
                                                 | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                    | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_13)))) 
                                                << 0xdU) 
                                               | (((((~ 
                                                      (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                       >> 4U)) 
                                                     & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_28)) 
                                                    | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                       | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_12)))) 
                                                   << 0xcU) 
                                                  | (((((~ 
                                                         (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                          >> 4U)) 
                                                        & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_27)) 
                                                       | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                          | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_11)))) 
                                                      << 0xbU) 
                                                     | (((((~ 
                                                            (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                             >> 4U)) 
                                                           & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_26)) 
                                                          | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                             | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_10)))) 
                                                         << 0xaU) 
                                                        | (((((~ 
                                                               (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                >> 4U)) 
                                                              & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_25)) 
                                                             | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                   & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_9)))) 
                                                            << 9U) 
                                                           | (((((~ 
                                                                  (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                   >> 4U)) 
                                                                 & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_24)) 
                                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                   | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                      & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_8)))) 
                                                               << 8U) 
                                                              | (((((~ 
                                                                     (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                      >> 4U)) 
                                                                    & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_23)) 
                                                                   | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                      | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                         & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_7)))) 
                                                                  << 7U) 
                                                                 | (((((~ 
                                                                        (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                         >> 4U)) 
                                                                       & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_22)) 
                                                                      | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                         | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                            & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_6)))) 
                                                                     << 6U) 
                                                                    | (((((~ 
                                                                           (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                            >> 4U)) 
                                                                          & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_21)) 
                                                                         | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                            | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                               & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_5)))) 
                                                                        << 5U) 
                                                                       | (((((~ 
                                                                              (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                               >> 4U)) 
                                                                             & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_20)) 
                                                                            | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                               | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_4)))) 
                                                                           << 4U) 
                                                                          | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_19)) 
                                                                               | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_3)))) 
                                                                              << 3U) 
                                                                             | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_18)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_2)))) 
                                                                                << 2U) 
                                                                                | (((((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_17)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_1)))) 
                                                                                << 1U) 
                                                                                | (((~ 
                                                                                (vlSelf->TOP__DOT__EX__DOT__Alu_io_B 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_16)) 
                                                                                | ((IData)(vlSelf->__VdfgTmp_h4824211d__0) 
                                                                                | ((IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_4__DOT__ShiftL) 
                                                                                & (IData)(vlSelf->TOP__DOT__EX__DOT__Alu__DOT__Shifter__DOT__SelectorNet_3__DOT__switch_0)))))))))))))))))))),16);
    bufp->fullIData(oldp+870,((~ vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)),32);
    bufp->fullBit(oldp+871,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 2U)))));
    bufp->fullBit(oldp+872,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 5U)))));
    bufp->fullBit(oldp+873,((1U & vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst)));
    bufp->fullBit(oldp+874,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 1U))));
    bufp->fullBit(oldp+875,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 3U)))));
    bufp->fullBit(oldp+876,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 4U)))));
    bufp->fullBit(oldp+877,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 6U)))));
    bufp->fullBit(oldp+878,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+879,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+880,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+881,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 2U))));
    bufp->fullBit(oldp+882,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 3U))));
    bufp->fullBit(oldp+883,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 4U))));
    bufp->fullBit(oldp+884,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+885,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+886,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+887,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+888,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+889,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x1fU)))));
    bufp->fullCData(oldp+890,(((0x40U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                             >> 0xeU)) 
                                         << 6U)) | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0))),7);
    bufp->fullBit(oldp+891,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x1eU)))));
    bufp->fullCData(oldp+892,(((0x20U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                             >> 0x1aU)) 
                                         << 5U)) | 
                               ((0x10U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                              >> 0x1bU)) 
                                          << 4U)) | 
                                ((8U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                            >> 0x1cU)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0x1dU)) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0)))))),6);
    bufp->fullBit(oldp+893,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 5U))));
    bufp->fullBit(oldp+894,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 6U))));
    bufp->fullBit(oldp+895,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 7U)))));
    bufp->fullBit(oldp+896,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 8U)))));
    bufp->fullBit(oldp+897,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 9U)))));
    bufp->fullBit(oldp+898,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+899,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+900,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+901,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+902,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+903,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+904,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+905,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+906,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+907,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+908,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+909,((1U & (~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                      >> 0x18U)))));
    bufp->fullCData(oldp+910,(((0x80U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                             >> 0x18U)) 
                                         << 7U)) | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h35f65dd2__0))),8);
    bufp->fullSData(oldp+911,(((0x8000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 0x10U)) 
                                           << 0xfU)) 
                               | ((0x4000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x11U)) 
                                              << 0xeU)) 
                                  | ((0x2000U & ((~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x12U)) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                              >> 0x13U)) 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x14U)) 
                                               << 0xbU)) 
                                           | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0))))))),16);
    bufp->fullCData(oldp+912,(vlSelf->TOP__DOT__ID__DOT__DecoderOut_hi_lo_9),8);
    bufp->fullBit(oldp+913,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 0xcU))));
    bufp->fullBit(oldp+914,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 0xdU))));
    bufp->fullBit(oldp+915,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 0xeU))));
    bufp->fullCData(oldp+916,(((0x40U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                         >> 8U)) | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h77b1137a__0))),7);
    bufp->fullBit(oldp+917,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 0x14U))));
    bufp->fullSData(oldp+918,(((0x8000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 0x10U)) 
                                           << 0xfU)) 
                               | ((0x4000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x11U)) 
                                              << 0xeU)) 
                                  | ((0x2000U & ((~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x12U)) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                              >> 0x13U)) 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 9U)) 
                                           | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h6adb00ff__0))))))),16);
    bufp->fullBit(oldp+919,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 0x15U))));
    bufp->fullBit(oldp+920,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+921,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 0x1dU))));
    bufp->fullCData(oldp+922,(((0x80U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                             >> 0x18U)) 
                                         << 7U)) | 
                               ((0x40U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                              >> 0x19U)) 
                                          << 6U)) | 
                                ((0x20U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 0x1aU)) 
                                           << 5U)) 
                                 | ((0x10U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x1bU)) 
                                              << 4U)) 
                                    | ((8U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                              >> 0x19U)) 
                                       | ((4U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0x1bU)) 
                                          | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0)))))))),8);
    bufp->fullSData(oldp+923,(((0x8000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                               >> 0x10U)) 
                                           << 0xfU)) 
                               | ((0x4000U & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0x11U)) 
                                              << 0xeU)) 
                                  | ((0x2000U & ((~ 
                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x12U)) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                              >> 0x13U)) 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & ((~ (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                   >> 0x14U)) 
                                               << 0xbU)) 
                                           | ((0x400U 
                                               & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                  >> 0xbU)) 
                                              | ((0x200U 
                                                  & ((~ 
                                                      (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x16U)) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & ((~ 
                                                         (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                          >> 0x17U)) 
                                                        << 8U)) 
                                                    | ((0x80U 
                                                        & ((~ 
                                                            (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                             >> 0x18U)) 
                                                           << 7U)) 
                                                       | ((0x40U 
                                                           & ((~ 
                                                               (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                >> 0x19U)) 
                                                              << 6U)) 
                                                          | ((0x20U 
                                                              & ((~ 
                                                                  (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                   >> 0x1aU)) 
                                                                 << 5U)) 
                                                             | ((0x10U 
                                                                 & ((~ 
                                                                     (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                      >> 0x1bU)) 
                                                                    << 4U)) 
                                                                | ((8U 
                                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                       >> 0x19U)) 
                                                                   | ((4U 
                                                                       & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                                          >> 0x1bU)) 
                                                                      | (IData)(vlSelf->TOP__DOT__ID__DOT____VdfgTmp_h273547c4__0)))))))))))))))),16);
    bufp->fullBit(oldp+924,((1U & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+925,((((IData)((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7))) 
                                << 4U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5))) 
                                           << 3U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3))) 
                                            << 2U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1))) 
                                               << 1U) 
                                              | (0xffffffffU 
                                                 == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62)))))),5);
    bufp->fullSData(oldp+926,((((IData)((0xfU == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_36))) 
                                << 0xaU) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_16))) 
                                             << 9U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_14))) 
                                                << 8U) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_12))) 
                                                   << 7U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_10))) 
                                                      << 6U) 
                                                     | (((IData)(
                                                                 (7U 
                                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_6))) 
                                                         << 5U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_7))) 
                                                            << 4U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_5))) 
                                                               << 3U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_3))) 
                                                                  << 2U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_1))) 
                                                                     << 1U) 
                                                                    | (0xffffffffU 
                                                                       == vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_62)))))))))))),11);
    bufp->fullCData(oldp+927,((((IData)((0U != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_26))) 
                                << 4U) | (((IData)(
                                                   (7U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_T_25))) 
                                           << 3U) | 
                                          (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->TOP__DOT__ID__DOT___DecoderOut_orMatrixOutputs_T_23))) 
                                            << 2U) 
                                           | (IData)(vlSelf->TOP__DOT__ID_io_ID2EX_bits_aluSrc2))))),5);
    bufp->fullIData(oldp+928,(vlSelf->TOP__DOT__ID__DOT__DecoderOut_orMatrixOutputs),22);
    bufp->fullCData(oldp+929,(vlSelf->TOP__DOT__ID__DOT__Type),3);
    bufp->fullBit(oldp+930,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__Wen));
    bufp->fullIData(oldp+931,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_0),32);
    bufp->fullIData(oldp+932,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_1),32);
    bufp->fullIData(oldp+933,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_2),32);
    bufp->fullIData(oldp+934,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_3),32);
    bufp->fullIData(oldp+935,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_4),32);
    bufp->fullIData(oldp+936,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_5),32);
    bufp->fullIData(oldp+937,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_6),32);
    bufp->fullIData(oldp+938,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_7),32);
    bufp->fullIData(oldp+939,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_8),32);
    bufp->fullIData(oldp+940,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_9),32);
    bufp->fullIData(oldp+941,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_10),32);
    bufp->fullIData(oldp+942,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_11),32);
    bufp->fullIData(oldp+943,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_12),32);
    bufp->fullIData(oldp+944,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_13),32);
    bufp->fullIData(oldp+945,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_14),32);
    bufp->fullIData(oldp+946,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_15),32);
    bufp->fullIData(oldp+947,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_16),32);
    bufp->fullIData(oldp+948,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_17),32);
    bufp->fullIData(oldp+949,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_18),32);
    bufp->fullIData(oldp+950,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_19),32);
    bufp->fullIData(oldp+951,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_20),32);
    bufp->fullIData(oldp+952,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_21),32);
    bufp->fullIData(oldp+953,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_22),32);
    bufp->fullIData(oldp+954,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_23),32);
    bufp->fullIData(oldp+955,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_24),32);
    bufp->fullIData(oldp+956,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_25),32);
    bufp->fullIData(oldp+957,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_26),32);
    bufp->fullIData(oldp+958,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27),32);
    bufp->fullIData(oldp+959,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28),32);
    bufp->fullIData(oldp+960,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29),32);
    bufp->fullIData(oldp+961,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30),32);
    bufp->fullIData(oldp+962,(vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31),32);
    bufp->fullBit(oldp+963,(vlSelf->TOP__DOT__IF__DOT__pcBrEnableReg));
    bufp->fullBit(oldp+964,(vlSelf->TOP__DOT__IF__DOT__pcBrRecordReg));
    bufp->fullIData(oldp+965,(vlSelf->TOP__DOT__IF__DOT__brBuffer),32);
    bufp->fullBit(oldp+966,(vlSelf->TOP__DOT__IF__DOT__brBufferValid));
    bufp->fullIData(oldp+967,(((IData)(4U) + vlSelf->TOP__DOT__IF__DOT__pcReg)),32);
    bufp->fullIData(oldp+968,(((IData)(vlSelf->TOP__DOT__IF_io_pcBrEnable)
                                ? vlSelf->TOP__DOT__IF_io_pcBr
                                : ((IData)(4U) + vlSelf->TOP__DOT__IF__DOT__pcReg))),32);
    bufp->fullBit(oldp+969,(vlSelf->TOP__DOT__IF__DOT__rFireReg));
    bufp->fullIData(oldp+970,(vlSelf->TOP__DOT__IF__DOT__rdataReg),32);
    bufp->fullCData(oldp+971,(vlSelf->TOP__DOT__InstRam__DOT__rstate),3);
    bufp->fullCData(oldp+972,(vlSelf->TOP__DOT__InstRam__DOT__awstate),3);
    bufp->fullCData(oldp+973,(vlSelf->TOP__DOT__InstRam__DOT__wstate),3);
    bufp->fullCData(oldp+974,(vlSelf->TOP__DOT__InstRam__DOT__nxt_wstate),3);
    bufp->fullCData(oldp+975,((3U & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))),2);
    bufp->fullIData(oldp+976,(((1U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)
                                ? VL_SHIFTL_III(32,32,32, vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2, 8U)
                                : vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_rdata2)),32);
    bufp->fullCData(oldp+977,(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput),4);
    bufp->fullCData(oldp+978,((0xfU & (~ (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))),4);
    bufp->fullBit(oldp+979,((1U & (~ (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))));
    bufp->fullBit(oldp+980,((1U & (~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                      >> 1U)))));
    bufp->fullBit(oldp+981,((1U & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut)));
    bufp->fullBit(oldp+982,((1U & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                   >> 1U))));
    bufp->fullBit(oldp+983,((1U & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))));
    bufp->fullBit(oldp+984,((1U & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                   >> 1U))));
    bufp->fullCData(oldp+985,(((2U & (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                        & (~ ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                              >> 1U))) 
                                       << 1U) | (((
                                                   (~ 
                                                    ((IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput) 
                                                     >> 1U)) 
                                                   & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                                  << 1U) 
                                                 | (0xfffffffeU 
                                                    & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3))))) 
                               | (IData)((0U == (3U 
                                                 & (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)))))),2);
    bufp->fullCData(oldp+986,(((2U & (((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                        << 1U) & vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut) 
                                      | ((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                          & ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                             << 1U)) 
                                         | (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)))) 
                               | (1U & (((~ (IData)(vlSelf->TOP__DOT__MEM__DOT__io_w_bits_wstrb_plaInput)) 
                                         & (vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                            >> 1U)) 
                                        | ((vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_aluOut 
                                            & (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3)) 
                                           | ((IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_func3) 
                                              >> 1U)))))),2);
    bufp->fullBit(oldp+987,(vlSelf->TOP__DOT__MEM__DOT__arDataFireReg));
    bufp->fullBit(oldp+988,(vlSelf->TOP__DOT__MEM__DOT__awFireReg));
    bufp->fullBit(oldp+989,(vlSelf->TOP__DOT__MEM__DOT__wFireReg));
    bufp->fullBit(oldp+990,(((IData)(vlSelf->TOP__DOT__MEM__DOT__arDataFireReg) 
                             | (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memRead))));
    bufp->fullBit(oldp+991,(((IData)(vlSelf->TOP__DOT__MEM__DOT__awFireReg) 
                             | (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite))));
    bufp->fullBit(oldp+992,(((IData)(vlSelf->TOP__DOT__MEM__DOT__wFireReg) 
                             | (IData)(vlSelf->TOP__DOT__MEM_io_EX2MEM_bits_r_memWrite))));
    bufp->fullIData(oldp+993,(vlSelf->TOP__DOT__WB__DOT__rdataShift0),32);
    bufp->fullIData(oldp+994,(vlSelf->TOP__DOT__WB__DOT__rdataShift1),32);
    bufp->fullBit(oldp+995,(vlSelf->TOP__DOT__WB__DOT__rdataSignal));
    bufp->fullIData(oldp+996,(((1U == (3U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                ? ((((IData)(vlSelf->TOP__DOT__WB__DOT__rdataSignal)
                                      ? 0xffffU : 0U) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->TOP__DOT__WB__DOT__rdataShift1))
                                : ((0U == (3U & (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_func3)))
                                    ? ((((IData)(vlSelf->TOP__DOT__WB__DOT__rdataSignal)
                                          ? 0xffffffU
                                          : 0U) << 8U) 
                                       | (0xffU & vlSelf->TOP__DOT__WB__DOT__rdataShift1))
                                    : vlSelf->TOP__DOT__WB__DOT__rdataShift1))),32);
    bufp->fullBit(oldp+997,(vlSelf->TOP__DOT__WB__DOT__rDataFireReg));
    bufp->fullBit(oldp+998,(vlSelf->TOP__DOT__WB__DOT__bFireReg));
    bufp->fullBit(oldp+999,(((IData)(vlSelf->TOP__DOT__WB__DOT__rDataFireReg) 
                             | ((IData)(vlSelf->TOP__DOT__DataRam__DOT__rstate) 
                                >> 2U))));
    bufp->fullBit(oldp+1000,(((IData)(vlSelf->TOP__DOT__WB__DOT__bFireReg) 
                              | ((IData)(vlSelf->TOP__DOT__DataRam__DOT__wstate) 
                                 >> 2U))));
    bufp->fullBit(oldp+1001,(vlSelf->clock));
    bufp->fullBit(oldp+1002,(vlSelf->reset));
    bufp->fullIData(oldp+1003,(vlSelf->io_commit_pc),32);
    bufp->fullIData(oldp+1004,(vlSelf->io_commit_inst),32);
    bufp->fullCData(oldp+1005,(vlSelf->io_commit_rd),5);
    bufp->fullBit(oldp+1006,(vlSelf->io_commit_wen));
    bufp->fullIData(oldp+1007,(vlSelf->io_commit_wdata),32);
    bufp->fullBit(oldp+1008,(vlSelf->io_commit_commit));
    bufp->fullBit(oldp+1009,(vlSelf->io_commit_halt));
    bufp->fullBit(oldp+1010,(vlSelf->TOP__DOT__IF_io_Pre2IF_valid));
    bufp->fullIData(oldp+1011,(((0U == (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0xfU)))
                                 ? 0U : ((((0x1fU & 
                                            (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                             >> 0xfU)) 
                                           == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                          & (IData)(vlSelf->io_commit_wen))
                                          ? vlSelf->io_commit_wdata
                                          : ((0x1fU 
                                              == (0x1fU 
                                                  & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0xfU)))
                                              ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31
                                              : ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27
                                                     : vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_58)))))))),32);
    bufp->fullIData(oldp+1012,(((0U == (0x1fU & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                 >> 0x14U)))
                                 ? 0U : ((((0x1fU & 
                                            (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                             >> 0x14U)) 
                                           == (IData)(vlSelf->TOP__DOT__WB_io_MEM2WB_bits_r_rd)) 
                                          & (IData)(vlSelf->io_commit_wen))
                                          ? vlSelf->io_commit_wdata
                                          : ((0x1fU 
                                              == (0x1fU 
                                                  & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                     >> 0x14U)))
                                              ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_31
                                              : ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__ID_io_IF2ID_bits_r_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__ID__DOT__Rf__DOT__gprSeq_27
                                                     : vlSelf->TOP__DOT__ID__DOT__Rf__DOT___GEN_90)))))))),32);
    bufp->fullBit(oldp+1013,(vlSelf->TOP__DOT__InstRam_arvalid));
    bufp->fullCData(oldp+1014,(vlSelf->TOP__DOT__InstRam__DOT__nxt_rstate),3);
}
