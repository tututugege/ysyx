#include <common.h>
#include <dlfcn.h>
#include <log.h>
#include <readline/history.h>
#include <sys/types.h>

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
const char *regs[] = {"zero", "ra", "sp",  "gp",  "tp", "t0", "t1", "t2",
                      "s0",   "s1", "a0",  "a1",  "a2", "a3", "a4", "a5",
                      "a6",   "a7", "s2",  "s3",  "s4", "s5", "s6", "s7",
                      "s8",   "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

typedef struct CPU_state {
  uint32_t gpr[32];
  uint32_t pc;
} CPU_state;
CPU_state cpu;

bool difftest_skip = false;

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

  void (*ref_difftest_init)(int, bool, char *) =
      (void (*)(int, bool, char *))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  extern bool gen_itrace;
  extern char *itrace_path;

  ref_difftest_init(0, gen_itrace, itrace_path);
  ref_difftest_memcpy(CONFIG_FLASH_BASE, flash, img_size, DIFFTEST_TO_REF);

  for (int i = 0; i < GPR_NUM; i++) {
    cpu.gpr[i] = gpr(i);
    cpu.pc = RESET_VECTOR;
  }

  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

static void checkregs(CPU_state *ref, uint32_t pc) {
  int i;

  for (i = 0; i < GPR_NUM; i++) {
    if (ref->gpr[i] != gpr(i))
      break;
  }

  if (i == GPR_NUM)
    return;

fault:
  state = BAD_TRAP;

  printf("Difftest: error\n");
  printf("\tReference\tDut\n");
  for (int i = 0; i < GPR_NUM; i++) {
    printf("%s:\t%08x\t%08x", regs[i], cpu.gpr[i], gpr(i));
    if (cpu.gpr[i] != gpr(i))
      printf("\t Error");
    putchar('\n');
  }
  printf("PC:\t%08x\t%08x\n", cpu.pc, pc);
}

void difftest_skip_ref() { difftest_skip = true; }

void difftest_step(uint32_t pc) {
  if (difftest_skip) {
    // to skip the checking of an instruction, just copy the reg state to
    // reference design
    for (int i = 0; i < GPR_NUM; i++) {
      cpu.gpr[i] = gpr(i);
    }
    cpu.pc = pc + 4;
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    difftest_skip = false;
  } else {
    ref_difftest_exec(1);
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_DUT);
    checkregs(&cpu, pc);
  }
}
