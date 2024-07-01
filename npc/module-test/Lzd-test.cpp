#include <VLzd.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define MAX_SIM_TIME 10000000
int sim_time = 0;

static VLzd *dut;
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
  dut = new VLzd;
  m_trace = new VerilatedVcdC;

  Verilated::traceEverOn(true);
  dut->trace(m_trace, 5);
  m_trace->open("wave.vcd");
  int ref;

  reset(10);

  int in;
  int ref_out;
  int ref_zero;
  while (sim_time < MAX_SIM_TIME) {
    in = rand();
    dut->io_in = in;
    single_cycle();

    ref_zero = (in == 0);

    if (ref_zero == 1 && dut->io_zero == 1)
      continue;

    ref_out = 0;
    while ((in & 0x80000000) == 0) {
      ref_out++;
      in = in << 1;
    }

    if (dut->io_out != ref_out || dut->io_zero != ref_zero) {
      printf("Fail!!!\n");
      printf("dut: %8x %8x %d\n", dut->io_in, dut->io_out, dut->io_zero);
      printf("ref: %8x %8x %d\n", dut->io_in, ref_out, ref_zero);
      break;
    }
  }

  if (sim_time == MAX_SIM_TIME)
    printf("Success!\n");

  m_trace->close();
  delete dut;

  return 0;
}
