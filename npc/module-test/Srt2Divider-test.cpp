#include <VSrt2Divider.h>
#include <assert.h>
#include <cstdint>
#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define MAX_SIM_TIME 10000000
int sim_time = 0;

static VSrt2Divider *dut;
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
  dut = new VSrt2Divider;
  m_trace = new VerilatedVcdC;

  Verilated::traceEverOn(true);
  dut->trace(m_trace, 5);
  m_trace->open("wave.vcd");
  int ref;

  reset(10);

  bool fail = false;
  // uint32_t uin_x;
  // uint32_t uin_y;
  // uint32_t uref_res;
  // uint32_t uref_rem;
  // while (sim_time < MAX_SIM_TIME) {
  //   uin_x = (rand() << 16) | (rand() & 0x0000FFFF);
  //   uin_y = (rand() << 16) | (rand() & 0x0000FFFF);
  //   if (uin_y == 0)
  //     continue;
  //   dut->io_x = uin_x;
  //   dut->io_y = uin_y;
  //   dut->io_div = 1;
  //   dut->io_signed = 0;
  //   uref_res = uin_x / uin_y;
  //   uref_rem = uin_x % uin_y;
  //   single_cycle();
  //
  //   while (dut->io_complete != 1)
  //     single_cycle();
  //
  //   if (dut->io_res != uref_res || dut->io_rem != uref_rem) {
  //     fail = true;
  //     printf("Fail!!!\n");
  //     printf("x: %8x y: %8x signed: %d\n", uin_x, uin_y, dut->io_signed);
  //     printf("dut: %8x %8x\n", dut->io_res, dut->io_rem);
  //     printf("ref: %8x %8x\n", uref_res, uref_rem);
  //
  //     goto end;
  //   }
  // }
  // sim_time = 0;

  int in_x;
  int in_y;
  int ref_res;
  int ref_rem;

  while (sim_time < MAX_SIM_TIME) {
    in_x = (rand() << 16) | (rand() & 0x0000FFFF);
    in_y = (rand() << 16) | (rand() & 0x0000FFFF);
    dut->io_x = in_x;
    dut->io_y = in_y;
    if (in_y == 0)
      continue;

    dut->io_div = 1;
    dut->io_signed = 1;
    ref_res = in_x / in_y;
    ref_rem = in_x % in_y;

    single_cycle();
    while (dut->io_complete != 1)
      single_cycle();

    if (dut->io_res != ref_res || dut->io_rem != ref_rem) {
      fail = true;
      break;
    }
  }

  if (fail == false)
    printf("Success!\n");
  else {
    printf("Fail!!!\n");
    printf("x: %d y: %d signed: %d\n", in_x, in_y, dut->io_signed);
    printf("dut: %8x %8x\n", dut->io_res, dut->io_rem);
    printf("ref: %8x %8x\n", ref_res, ref_rem);
  }

end:
  m_trace->close();
  delete dut;

  return 0;
}
