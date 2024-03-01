#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <VTOP.h>
#include <nvboard.h>

static TOP_NAME dut;
static VerilatedVcdC m_trace;

void nvboard_bind_all_pins(TOP_NAME* top);

int sim_time = 0;

static void single_cycle() {
  dut.clock = 0; dut.eval();
  // m_trace.dump(sim_time++);
  dut.clock = 1; dut.eval();
  // m_trace.dump(sim_time++);
}

static void reset(int n) {
  dut.reset = 1;
  while (n -- > 0) single_cycle();
  dut.reset = 0;
}

int main() {

  Verilated::traceEverOn(true);
  dut.trace(&m_trace, 5);
  m_trace.open("wave.vcd");

  nvboard_bind_all_pins(&dut);
  nvboard_init();

  dut.ps2_clk = 1;

  dut.clr = 1;
  single_cycle();
  single_cycle();
  dut.clr = 0;
  single_cycle();
  single_cycle();

  reset(10);

  while(1) {
    nvboard_update();
    single_cycle();
  }

  m_trace.close();

  return 0;
}