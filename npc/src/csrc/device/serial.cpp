#include <common.h>
#include <io.h>

#define CH_OFFSET 0

static uint8_t serial_base[8];

static void serial_io_handler(uint32_t offset, bool is_write) {
  assert(offset == 0);
  if (is_write)
    putchar(serial_base[0]);
}

void init_serial() {
#ifdef CONFIG_SERIAL_MMIO
  add_mmio_map("serial", CONFIG_SERIAL_MMIO, serial_base, 8, serial_io_handler);
#endif
}
