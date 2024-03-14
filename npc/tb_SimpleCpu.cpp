#include <VSimpleCpu.h>
#include <cassert>
#include <ctime>
#include <stdint.h>
#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>

#define MAX_SIM_TIME 10000
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
  dut->clock = 1;
  dut->eval();

  if (dut->reset == 0) {
    memory_access();
  }
  m_trace->dump(sim_time++);

  dut->clock = 0;
  dut->eval();
  m_trace->dump(sim_time++);
}

static void reset(int n) {
  dut->reset = 1;
  while (n-- > 0)
    single_cycle();
  dut->clock = 1;
  dut->eval();
  // 上升沿时reset仍然拉高
  dut->reset = 0;
}

void load_img(char *file_name) {
  FILE *fp = fopen(file_name, "r");
  assert(fp != NULL);
  printf("\n%s\n", file_name);
  int i = 0, ch;
  while (fread(inst_ram + i, 4, 1, fp)) {
    i++;
  }
  printf("%d\n", i);
  fclose(fp);
}

int main(int argc, char *argv[]) {

  assert(argc == 2);
  load_img(argv[1]);

  dut = new VSimpleCpu;
  m_trace = new VerilatedVcdC;

  Verilated::traceEverOn(true);
  dut->trace(m_trace, 5);
  m_trace->open("wave.vcd");

  reset(10);
  while (sim_time < MAX_SIM_TIME) {
    single_cycle();

    if (dut->Halt == 1)
      break;
  }

  if (sim_time == MAX_SIM_TIME) {
    printf("****************************************************\n");
    printf("Time Out!\n");
    printf("****************************************************\n");
  } else {
    printf("****************************************************\n");
    if (dut->Ret == 0)
      printf("Hit Good Trap!\n");
    else
      printf("Hit Bad Trap!\n");
    printf("****************************************************\n");
  }

  m_trace->close();
  delete dut;

  return 0;
}
