#include <common.h>
#include <cpu-info.h>
#include <difftest.h>
#include <dlfcn.h>
#include <log.h>

void ftrace_commit(vaddr_t pc, vaddr_t npc);

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code,
                            int nbyte);

char inst_buf[128];

void single_cycle() {
  dut->clock = 1;
  dut->eval();
  m_trace->dump(sim_time++);

  dut->clock = 0;
  dut->eval();
  m_trace->dump(sim_time++);
}

void reset(int n) {
  dut->reset = 1;
  while (n-- > 0)
    single_cycle();
  dut->clock = 1;
  dut->eval();
  // pull down reset after positive edge
  dut->reset = 0;
}

uint32_t last_pc = 0x80000000;

void cycle(int n) {
  char *p;
  uint8_t *inst_str;
  uint32_t inst;

  while (n-- > 0) {
    single_cycle();

    p = inst_buf;
    inst = INST;
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
      ftrace_commit(last_pc, PC);
    }
    last_pc = PC;

    difftest_step();

    if (dut->Halt || TIME_OUT || npc_state.state == NPC_ABORT) {
      if (dut->Halt)
        ref_difftest_exec(1);
      break;
    }
  }
  printf("%s\n", inst_buf);
}
