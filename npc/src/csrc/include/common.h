#ifndef __COMMON_H__
#define __COMMON_H__

#include <assert.h>
#include <generated/autoconf.h>
#include <log.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#define PMEM_LEFT ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

typedef uint32_t vaddr_t;
typedef uint32_t word_t;
typedef uint32_t paddr_t;

#define Assert(cond, format, ...)                                              \
  do {                                                                         \
    if (!(cond)) {                                                             \
      printf(ANSI_FMT(format, ANSI_FG_RED) "\n", ##__VA_ARGS__);               \
      assert(cond);                                                            \
    }                                                                          \
  } while (0)

#define panic(format, ...) Assert(0, format, ##__VA_ARGS__)

static inline bool in_pmem(paddr_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

/* static inline word_t host_read(void *addr, int len) { */
/*   switch (len) { */
/*   case 1: */
/*     return *(uint8_t *)addr; */
/*   case 2: */
/*     return *(uint16_t *)addr; */
/*   case 4: */
/*     return *(uint32_t *)addr; */
/*   default: */
/*     panic("addr: %8p, len: %d", addr, len); */
/*     return 0; */
/*   } */
/* } */

static inline void host_write(void *addr, word_t wdata, int wmask) {
  word_t mask = 0;
  if (wmask & 0x1)
    mask |= 0xFF;
  if (wmask & 0x2)
    mask |= 0xFF00;
  if (wmask & 0x4)
    mask |= 0xFF0000;
  if (wmask & 0x8)
    mask |= 0xFF000000;

  *(word_t *)addr = (mask & wdata) | (~mask & *(word_t *)addr);
}

#endif
