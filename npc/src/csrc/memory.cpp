#include <VTOP___024root.h>
#include <cassert>
#include <common.h>
#include <cpu-info.h>
#include <difftest.h>
#include <io.h>
#include <log.h>
#include <readline/history.h>

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    Assert(map != NULL, "address ( 0x%08x) is out of bound at pc = 0x%08x",
           addr, IF_PC);
  } else {
    Assert(addr <= map->high && addr >= map->low,
           "address ( 0x%08x) is out of bound {%s} [ 0x%08x, 0x%08x ] at pc =  "
           "0x%08x",
           addr, map->name, map->low, map->high, IF_PC);
  }
}

int _pmem_read(int addr) {

  /* log_write("%08x %08x\n", PC, addr); */
  addr = addr & ~0x3u;
  uint32_t ret = 0;

  assert(in_pmem(addr));

#ifdef CONFIG_MTRACE
  log_write("%08x: read memory address %08x\n", IF_PC, addr);
#endif

  ret = *(uint32_t *)(inst_ram + (addr - CONFIG_MBASE));

  return ret;
}

extern "C" int pmem_read(int addr) {

  int ret = _pmem_read(addr);
  return ret;
}
void _pmem_write(int waddr, int wdata, int wmask) {

  int len = 0;

  if (wmask & 0x1)
    len++;
  if (wmask & 0x2)
    len++;
  if (wmask & 0x4)
    len++;
  if (wmask & 0x8)
    len++;

  extern uint32_t last_pc;
  assert(in_pmem(waddr));

#ifdef CONFIG_MTRACE
  log_write("%08x: write memory address %08x, len %d\n", last_pc, waddr, len);
#endif

  int index = waddr - CONFIG_MBASE;
  void *ptr = inst_ram + index;

  host_write(ptr, wdata, wmask);
}

extern "C" void pmem_write(int waddr, int wdata, char wmask) {

  _pmem_write(waddr, wdata, wmask);
}
