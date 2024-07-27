#include <VMultiplier.h>
#include <assert.h>
#include <cstdint>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define MAX_SIM_TIME 1000000
int sim_time = 0;

static VMultiplier *dut;
static VerilatedVcdC *m_trace;

static void single_cycle() {
  dut->clock = 0;
  dut->eval();
  // m_trace->dump(sim_time++);
  sim_time++;
  dut->clock = 1;
  dut->eval();
  // m_trace->dump(sim_time++);
  sim_time++;
}

static void reset(int n) {
  dut->reset = 1;
  while (n-- > 0)
    single_cycle();
  dut->reset = 0;
}

int main() {
  dut = new VMultiplier;
  m_trace = new VerilatedVcdC;

  Verilated::traceEverOn(true);
  dut->trace(m_trace, 5);
  m_trace->open("wave.vcd");

  reset(10);

  bool fail = false;
  uint32_t uin_x;
  uint32_t uin_y;
  uint64_t uref_res;

  while (sim_time < MAX_SIM_TIME) {
    uin_x = (rand() << 16) | (rand() & 0x0000FFFF);
    uin_y = (rand() << 16) | (rand() & 0x0000FFFF);
    // uin_x = 0;
    // uin_y = 0xb0000;
    dut->io_x = uin_x;
    dut->io_y = uin_y;
    dut->io_xSigned = 0;
    dut->io_ySigned = 0;
    uref_res = (uint64_t)uin_x * (uint64_t)uin_y;
    single_cycle();

    if (dut->io_res != uref_res) {
      fail = true;
      printf("Fail!!!\n");
      printf("x: %8x y: %8x uu\n", uin_x, uin_y);
      printf("dut: %16llx\n", dut->io_res);
      printf("ref: %16llx\n", uref_res);

      goto end;
    }
  }

  sim_time = 0;

  int in_x;
  int in_y;
  long long ref_res;

  while (sim_time < MAX_SIM_TIME) {
    in_x = (rand() << 16) | (rand() & 0x0000FFFF);
    in_y = (rand() << 16) | (rand() & 0x0000FFFF);
    // in_x = rand();
    // in_y = rand();

    dut->io_x = in_x;
    dut->io_y = in_y;
    dut->io_xSigned = 1;
    dut->io_ySigned = 1;

    ref_res = (long long)in_x * (long long)in_y;

    single_cycle();

    if (dut->io_res != ref_res) {
      fail = true;
      printf("Fail!!!\n");
      printf("x: %d y: %d ss\n", in_x, in_y);
      printf("dut: %16llx\n", dut->io_res);
      printf("ref: %16llx\n", ref_res);
      goto end;
    }
  }

  sim_time = 0;

  while (sim_time < MAX_SIM_TIME) {
    in_x = (rand() << 16) | (rand() & 0x0000FFFF);
    uin_y = (rand() << 16) | (rand() & 0x0000FFFF);

    dut->io_x = in_x;
    dut->io_y = uin_y;
    dut->io_xSigned = 1;
    dut->io_ySigned = 0;

    ref_res = (long long)in_x * (long long)uin_y;

    single_cycle();

    if (dut->io_res != ref_res) {
      fail = true;
      printf("Fail!!!\n");
      printf("x: %8x y: %8x su\n", in_x, in_y);
      printf("dut: %16llx\n", dut->io_res);
      printf("ref: %16llx\n", ref_res);

      goto end;
    }
  }

end:
  if (fail == false)
    printf("Success!\n");

  m_trace->close();
  delete dut;

  return 0;
}
