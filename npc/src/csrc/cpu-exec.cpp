#include <common.h>
#include <cpu-info.h>
#include <difftest.h>
#include <log.h>

void device_update();
void ftrace_commit(vaddr_t pc, vaddr_t npc);

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code,
                            int nbyte);

char inst_buf[128];

inline void single_cycle() {

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
  // pull down reset after positive edge
  dut->reset = 0;
}

uint32_t last_pc = 0x80000000;
uint32_t last_inst = 0;

void cycle(int n) {
  char *p;
  uint8_t *inst_str;
  uint32_t inst;

  while (n-- > 0) {

    single_cycle();

#ifdef CONFIG_ITRACE
    p = inst_buf;
    inst = last_inst;
    inst_str = (uint8_t *)&inst;

    p += snprintf(p, sizeof(inst_buf), "0x%08x: ", last_pc);
    for (int i = 0; i < 4; i++) {
      p += snprintf(p, 4, " %02x", inst_str[i]);
    }
    memset(p, ' ', 13);
    p += 13;

    disassemble(p, inst_buf + sizeof(inst_buf) - p, last_pc, inst_str, 4);
    log_write("%s\n", inst_buf);

    if (last_pc + 4 != PC) {
#ifdef CONFIG_FTRACE
      ftrace_commit(last_pc, PC);
#endif
    }
    last_pc = PC;
    last_inst = INST;
#endif

#ifdef CONFIG_DIFFTEST
    difftest_step();
#endif

#ifdef CONFIG_DEVICE
    /* device_update(); */
#endif

    if (dut->Halt || TIME_OUT || npc_state.state == NPC_ABORT ||
        npc_state.state == NPC_QUIT) {
#ifdef CONFIG_DIFFTEST
      if (dut->Halt)
        ref_difftest_exec(1);
#endif
      break;
    }
  }
  /* extern uint64_t write_time, read_time; */
  /* printf("\n%lu\n%lu", eval_time, read_time); */

#ifdef CONFIG_ITRACE
  printf("%s\n", inst_buf);
#endif
}
