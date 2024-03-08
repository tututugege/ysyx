#include <VALU.h>
#include <assert.h>
#include <cstdint>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define ADD 0b000
#define SUB 0b001
#define NOT 0b010
#define AND 0b011
#define OR 0b100
#define XOR 0b101
#define SLT 0b110
#define EQU 0b111

int sim_time = 0;

static VALU *dut;
static VerilatedVcdC *m_trace;

static void single_cycle() {
  dut->clock = 0;
  dut->eval();
  m_trace->dump(sim_time++);
  dut->clock = 1;
  dut->eval();
  m_trace->dump(sim_time++);
}

static void reset(int n) {
  dut->reset = 1;
  while (n-- > 0)
    single_cycle();
  dut->reset = 0;
}

int get_op() { return rand() % 6 + 2; }
int cal(int a, int b, int op) {
  switch (op) {
  case NOT:
    return ~a;
  case AND:
    return a & b;
  case OR:
    return a | b;
  case SLT:
    return (a < b);
  case XOR:
    return a ^ b;
  case EQU:
    return a == b;
  }

  assert(1);
  return 0;
}

int main() {
  dut = new VALU;
  m_trace = new VerilatedVcdC;

  Verilated::traceEverOn(true);
  dut->trace(m_trace, 5);
  m_trace->open("wave.vcd");

  // add
  dut->io_aluOp = ADD;
  int a, b;
  unsigned long long Ref, a_u, b_u;
  int ref;
  int OF;
  int CF;
  int zero;

  for (int i = 0; i < 1000; i++) {
    a = (rand() % 2) ? rand() : -rand();
    b = (rand() % 2) ? rand() : -rand();
    a_u = (unsigned)a;
    b_u = (unsigned)b;
    dut->io_A = a;
    dut->io_B = b;
    Ref = a_u + b_u;
    ref = a + b;
    single_cycle();
    assert(dut->io_Result == a + b);
    assert(dut->io_Zero == (a + b == 0));
    assert(dut->io_Cout == (Ref > UINT32_MAX));
    assert(dut->io_OF == (a > 0 && b > 0 && (signed)(dut->io_Result) < 0 ||
                          a < 0 && b < 0 && (signed)(dut->io_Result) > 0));
  }

  // sub
  dut->io_aluOp = SUB;

  for (int i = 0; i < 1000; i++) {
    a = (rand() % 2) ? rand() : -rand();
    b = (rand() % 2) ? rand() : -rand();

    dut->io_A = a;
    dut->io_B = b;
    a_u = (unsigned)a;
    b_u = (unsigned)b;
    Ref = a_u - b_u;
    ref = a - b;

    single_cycle();
    assert(dut->io_Result == a - b);
    assert(dut->io_Zero == (a - b == 0));
    assert(dut->io_Cout == (Ref > UINT32_MAX));
    assert(dut->io_OF == (a > 0 && b < 0 && (signed)(dut->io_Result) < 0 ||
                          a < 0 && b > 0 && (signed)(dut->io_Result) > 0));
  }

  // other
  dut->io_aluOp = get_op();
  for (int i = 0; i < 1000; i++) {
    a = (rand() % 2) ? rand() : -rand();
    b = (rand() % 2) ? rand() : -rand();
    dut->io_A = a;
    dut->io_B = b;
    ref = cal(a, b, dut->io_aluOp);
    single_cycle();
    assert(dut->io_Result == ref);
    assert(dut->io_Zero == (ref == 0));
  }

  printf("Success!\n");

  m_trace->close();
  delete dut;

  return 0;
}
