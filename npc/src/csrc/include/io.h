#include <common.h>

typedef void (*io_callback_t)(uint32_t, bool);
void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len,
                  io_callback_t callback);

typedef struct {
  const char *name;
  // we treat ioaddr_t as paddr_t here
  paddr_t low;
  paddr_t high;
  void *space;
  io_callback_t callback;
} IOMap;

static inline bool map_inside(IOMap *map, paddr_t addr) {
  return (addr >= map->low && addr <= map->high);
}

static inline int find_mapid_by_addr(IOMap *maps, int size, paddr_t addr) {
  int i;
  for (i = 0; i < size; i++) {
    if (map_inside(maps + i, addr)) {
      return i;
    }
  }
  return -1;
}
