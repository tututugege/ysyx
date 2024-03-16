#include <common.h>
#include <cpu-info.h>
#include <cstdint>

/* word_t paddr_read(paddr_t addr, int len) { */
/*   switch (len) { */
/*   case 1: */
/*     return *(uint8_t *)(inst_ram + addr); */
/*   case 2: */
/*     return *(uint16_t *)(inst_ram + addr); */
/*   case 4: */
/*     return *(uint32_t *)(inst_ram + addr); */
/*   default: */
/*     return 0; */
/*   } */
/* } */
/**/
/* void paddr_write(paddr_t addr, int len, word_t data) { */
/*   switch (len) { */
/*   case 1: */
/*     *(uint8_t *)(inst_ram + addr) = data; */
/*     break; */
/*   case 2: */
/*     *(uint16_t *)(inst_ram + addr) = data; */
/*     break; */
/*   case 4: */
/*     *(uint32_t *)(inst_ram + addr) = data; */
/*     break; */
/*   } */
/* } */

extern "C" int pmem_read(int addr) {
  return *(uint32_t *)(inst_ram + (addr & ~0x3u & 0xFFFFF));
}

extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  int mask = 0;

  if (wmask & 0x1)
    mask |= 0xF;
  if (wmask & 0x2)
    mask |= 0xF0;
  if (wmask & 0x4)
    mask |= 0xF00;
  if (wmask & 0x8)
    mask |= 0xF000;

  uint32_t origin = *(uint32_t *)(inst_ram + (waddr & ~0x3u & 0xFFFFF));

  *(uint32_t *)(inst_ram + (waddr & ~0x3u)) =
      (origin & (~mask)) | (wdata & mask);
}
