#include <VTOP.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define MAX_SIM_TIME 100
int sim_time = 0;

static VTOP *dut;
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

int main() {
  dut = new VTOP;
  m_trace = new VerilatedVcdC;

  Verilated::traceEverOn(true);
  dut->trace(m_trace, 5);
  m_trace->open("wave.vcd");

  reset(10);

  int ref;

  while (sim_time < MAX_SIM_TIME) {
    dut->io_in_0 = rand() % 0x2;
    dut->io_in_1 = rand() % 0x2;
    dut->io_in_2 = rand() % 0x2;
    dut->io_in_3 = rand() % 0x2;

    dut->io_sel = rand() % 0x4;
    single_cycle();

    switch (dut->io_sel) {
    case 0:
      ref = dut->io_in_0;
      break;
    case 1:
      ref = dut->io_in_1;
      break;
    case 2:
      ref = dut->io_in_2;
      break;
    case 3:
      ref = dut->io_in_3;
      break;
    }

    if (dut->io_out != ref) {
      single_cycle();
      printf("Error");
      break;
    }
  }

  if (sim_time == MAX_SIM_TIME)
    printf("Success!\n");

  m_trace->close();
  delete dut;

  return 0;
}
