#include <cassert>
#include <common.h>

int sim_time = 0;
SOC_state state = RUNNING;
uint32_t halt_pc;
uint32_t *GPR[GPR_NUM];
uint8_t mrom[CONFIG_MROM_SIZE];
uint8_t flash[CONFIG_FLASH_SIZE];

void difftest_skip_ref();
void difftest_step(uint32_t pc);

void single_cycle() {

#ifdef CONFIG_WAVE
  m_trace->dump(sim_time);
#endif
  sim_time++;
  dut->clock = 0;
  dut->eval();

#ifdef CONFIG_WAVE
  m_trace->dump(sim_time);
#endif
  sim_time++;
  dut->clock = 1;
  dut->eval();
}

void reset(int n) {
  dut->clock = 1;
  dut->reset = 1;
  dut->eval();

  while (n-- > 0)
    single_cycle();
  dut->clock = 1;
  dut->eval();
  // deassert reset after positive edge
  dut->reset = 0;
}

uint32_t commit_pc = 0;
bool monitor() {
  printf("Reset NPC...\n");
  reset(10);

#ifdef CONFIG_INFINITY
  while (1) {
#else
  while (sim_time < MAX_SIM_TIME && state == RUNNING) {
#endif
    single_cycle();
    if (commit_pc) {
#ifdef CONFIG_DIFFTEST
      difftest_step(commit_pc);
#endif
      commit_pc = 0;
    }
  }

  single_cycle();
  bool ret = false;

  std::cout << std::endl << "*********************************" << std::endl;
  if (state == GOOD_TRAP) {
    ret = true;
    printf(ANSI_FG_GREEN "Hit Good Trap ^-^ at pc = 0x%08x\n" ANSI_NONE,
           halt_pc);
  } else if (state == BAD_TRAP) {
    printf(ANSI_FG_RED "Hit Bad Trap QAQ\n" ANSI_NONE);
  } else {
    printf(ANSI_FG_RED "TIME OUT QAQ\n" ANSI_NONE);
  }
  std::cout << "*********************************" << std::endl;

  return ret;
}

#define UART_BASE 0x10000000L
#define UART_TX 0

extern "C" void flash_read(uint32_t addr, uint32_t *data) {
  *data = *(uint32_t *)(flash + (addr & 0xFFFFFC));
}
extern "C" void mrom_read(uint32_t addr, uint32_t *data) {
  *data = *(uint32_t *)(mrom + (addr & 0x0FFC));
}
extern "C" void halt(uint32_t pc, int mem, int addr, int halt, int ret) {
  if (halt) {
    if (ret == 0)
      state = GOOD_TRAP;
    else
      state = BAD_TRAP;

    halt_pc = pc;
  } else {
    commit_pc = pc;
  }
  if (mem && ((addr & ~(0xF)) == UART_BASE)) {
    difftest_skip_ref();
  }
}
