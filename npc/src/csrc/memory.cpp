#include <common.h>
#include <cpu-info.h>
#include <difftest.h>
#include <io.h>
#include <log.h>
#include <readline/history.h>

#define NR_MAP 16
static IOMap maps[NR_MAP] = {};
static int nr_map = 0;

uint64_t read_time, write_time;

void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len,
                  io_callback_t callback) {
  assert(nr_map < NR_MAP);
  paddr_t left = addr, right = addr + len - 1;

  maps[nr_map] = (IOMap){.name = name,
                         .low = addr,
                         .high = addr + len - 1,
                         .space = space,
                         .callback = callback};

  Log("Add mmio map '%s' at [ 0x%8x ,  0x%8x ]", maps[nr_map].name,
      maps[nr_map].low, maps[nr_map].high);

  nr_map++;
}

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    Assert(map != NULL, "address ( 0x%08x) is out of bound at pc = 0x%08x",
           addr, PC);
  } else {
    Assert(addr <= map->high && addr >= map->low,
           "address ( 0x%08x) is out of bound {%s} [ 0x%08x, 0x%08x ] at pc =  "
           "0x%08x",
           addr, map->name, map->low, map->high, PC);
  }
}

static IOMap *fetch_mmio_map(paddr_t addr) {
  int mapid = find_mapid_by_addr(maps, nr_map, addr);
  return (mapid == -1 ? NULL : &maps[mapid]);
}

uint32_t io_read(int addr) {

#ifdef CONFIG_DIFFTEST
  next_difftest_skip_ref();
#endif

  IOMap *map = fetch_mmio_map(addr);
  if (map == NULL) {

#ifdef CONFIG_WAVE
    m_trace->close();
#endif

    /* panic("Error addr %08X", addr); */
    return 0;
  }

#ifdef CONFIG_DTRACE
  log_write("%08x: read device %s address %08x\n", PC, map->name, addr);
#endif

  int offset = addr - map->low;
  if (map->callback) {
    map->callback(offset, false);
  }
  uint32_t *ptr = (uint32_t *)((uintptr_t)map->space + offset);

  return *ptr;
}

void io_write(int waddr, int wdata, int len) {

#ifdef CONFIG_DIFFTEST
  difftest_skip_ref();
#endif
  IOMap *map = fetch_mmio_map(waddr);
  Assert(map, "error addr: %08X\n", waddr);

#ifdef CONFIG_DTRACE
  extern uint32_t last_pc;
  log_write("%08x: write device %s address %08x, len %d\n", last_pc, map->name,
            waddr, len);
#endif

  int offset = waddr - map->low;
  void *ptr = (uint8_t *)map->space + offset;
  host_write(ptr, len, wdata);

  if (map->callback)
    map->callback(offset, true);
}

int _pmem_read(int addr) {

  /* log_write("%08x %08x\n", PC, addr); */
  addr = addr & ~0x3u;
  uint32_t ret = 0;

  if (in_pmem(addr)) {

#ifdef CONFIG_MTRACE
    log_write("%08x: read memory address %08x\n", PC, addr);
#endif

    ret = *(uint32_t *)(inst_ram + (addr - CONFIG_MBASE));
  } else {
    ret = io_read(addr);
  }

  return ret;
}

extern "C" int pmem_read(int addr, int MemRead) {
  if (!MemRead)
    return 0;

  /* clock_t start = clock(); */
  int ret = _pmem_read(addr);
  /* clock_t end = clock(); */

  /* read_time += end - start; */

  return ret;
}

void _pmem_write(int waddr, int wdata, int len) {
  extern uint32_t last_pc;
  if (in_pmem(waddr)) {

#ifdef CONFIG_MTRACE
    log_write("%08x: write memory address %08x, len %d\n", last_pc, waddr, len);
#endif

    int index = waddr - CONFIG_MBASE;
    void *ptr = inst_ram + index;

    host_write(ptr, len, wdata);
  } else {
    io_write(waddr, wdata, len);
  }
}

extern "C" void pmem_write(int waddr, int wdata, char wmask) {

  if (waddr == CONFIG_SERIAL_MMIO) {
    putchar(wdata);
    return;
  }

  wdata = (wdata >> (waddr & 0x3u) * 8);
  int len = 0;

  if (wmask & 0x1)
    len++;
  if (wmask & 0x2)
    len++;
  if (wmask & 0x4)
    len++;
  if (wmask & 0x8)
    len++;

  _pmem_write(waddr, wdata, len);
}
