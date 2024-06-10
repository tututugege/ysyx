#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include <riscv/riscv.h>

extern char _heap_start;
extern char _heap_end;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END ((uintptr_t) & _pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, &_heap_end);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) { io_write(AM_UART_TX, ch); }

int getch() { return io_read(AM_UART_RX).data; }

void halt(int code) {

  asm volatile("ebreak");

  while (1)
    ;
}

extern char _bss_start, _bss_end;

void _trm_init() {
  // ioe_init();
  memset(&_bss_start, 0, &_bss_end - &_bss_start);
  int ret = main(mainargs);
  halt(ret);
}
