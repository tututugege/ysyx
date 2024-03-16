#include <assert.h>
#include <common.h>
#include <cpu-info.h>
#include <cstdint>
#include <dlfcn.h>
#include <log.h>

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

typedef struct CPU_state {
  uint32_t gpr[GPR_NUM];
  uint32_t pc;
} CPU_state;
CPU_state cpu;

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n,
                            bool direction) = NULL;

void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void isa_reg_display();

void init_difftest(char *ref_so_file, long img_size) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy =
      (void (*)(paddr_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy =
      (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  void (*ref_difftest_init)(int) =
      (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce "
      "the performance. "
      "If it is not necessary, you can turn it off in menuconfig.",
      ref_so_file);

  ref_difftest_init(0);
  ref_difftest_memcpy(RESET_VECTOR, inst_ram, img_size, DIFFTEST_TO_REF);
  for (int i = 0; i < GPR_NUM; i++) {
    cpu.gpr[i] = gpr(i);
    cpu.pc = PC;
  }

  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

static void checkregs(CPU_state *ref) {
  int i;
  if (ref->pc != PC)
    goto fault;

  for (i = 0; i < 32; i++) {
    if (ref->gpr[i] != gpr(i))
      break;
  }

  if (i == 32)
    return;

fault:
  npc_state.state = NPC_ABORT;
  npc_state.halt_pc = PC;
  npc_state.halt_ret = 1;

  printf("Difftest: error\n");
  printf("Reference: \n");
  for (int i = 0; i < GPR_NUM; i++) {
    printf("%s: %08x ", regs[i], cpu.gpr[i]);
    if (i % 8 == 7)
      putchar('\n');
  }
  printf("PC: %08x\n", cpu.pc);

  isa_reg_display();
}

void difftest_step() {
  ref_difftest_exec(1);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_DUT);
  checkregs(&cpu);
}
