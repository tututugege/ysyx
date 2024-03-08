#include <VTOP.h>
#include <nvboard.h>
#include <stdio.h>
#include <verilated.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(TOP_NAME *top);

int sim_time = 0;

static void single_cycle() {
  dut.clock = 0;
  dut.eval();
  dut.clock = 1;
  dut.eval();
}

static void reset(int n) {
  dut.reset = 1;
  while (n-- > 0)
    single_cycle();
  dut.reset = 0;
}

int main() {

  nvboard_bind_all_pins(&dut);
  nvboard_init();

  while (1) {
    nvboard_update();
    single_cycle();
  }

  return 0;
}
