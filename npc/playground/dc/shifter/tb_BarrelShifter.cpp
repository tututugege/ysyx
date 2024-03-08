#include <VBarrelShifter.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define MAX_SIM_TIME 10000
int sim_time = 0;

static VBarrelShifter *dut;
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
  dut = new VBarrelShifter;
  m_trace = new VerilatedVcdC;

  Verilated::traceEverOn(true);
  dut->trace(m_trace, 5);
  m_trace->open("wave.vcd");
  int ref;

  reset(10);

  while (sim_time < MAX_SIM_TIME) {
    dut->io_din = rand();
    dut->io_shamt = rand() % 32;
    dut->io_left = rand() % 2;

    ref = (dut->io_left) ? (dut->io_din << dut->io_shamt)
                         : (dut->io_din >> dut->io_shamt);
    single_cycle();
    if (dut->io_dout != ref) {
      printf("%8x %8x\n", dut->io_dout, ref);
      break;
    }
  }

  if (sim_time == MAX_SIM_TIME)
    printf("Success!\n");

  m_trace->close();
  delete dut;

  return 0;
}
