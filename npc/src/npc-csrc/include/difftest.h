#include <common.h>
#include <cstdint>
extern void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n,
                                   bool direction);

extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);

void init_difftest(char *ref_so_file, long img_size);
void difftest_step(uint32_t pc);
void difftest_skip_ref();
