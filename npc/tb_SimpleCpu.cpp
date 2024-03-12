#include <VSimpleCpu.h>
#include <stdint.h>
#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define MAX_SIM_TIME 100
#define IMAGE "./image"

int sim_time = 0;

static VSimpleCpu *dut;
static VerilatedVcdC *m_trace;

uint32_t inst_ram[0x10000];
uint32_t data_ram[0x10000];

void memory_access() {
  dut->Fetch_Inst = inst_ram[(dut->Fetch_PC & 0xffff) >> 2];
  dut->eval();
  dut->Memory_MemReadData = data_ram[dut->Memory_MemAddr >> 2];
}

static void single_cycle() {
  dut->clock = 0;
  memory_access();
  dut->eval();
  m_trace->dump(sim_time++);
  dut->clock = 1;
  memory_access();
  dut->eval();
  m_trace->dump(sim_time++);
}

static void reset(int n) {
  dut->reset = 1;
  while (n-- > 0)
    single_cycle();
  dut->reset = 0;
}

void load_img() {
  inst_ram[0] = 0x800002b7;
  inst_ram[1] = 0x22ca0c13;
}

int main() {
  dut = new VSimpleCpu;
  m_trace = new VerilatedVcdC;

  Verilated::traceEverOn(true);
  dut->trace(m_trace, 5);
  m_trace->open("wave.vcd");

  load_img();
  reset(10);
  while (sim_time < MAX_SIM_TIME) {
    single_cycle();
  }
  printf("Success!\n");

  m_trace->close();
  delete dut;

  return 0;
}
