#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include <riscv/riscv.h>

#define UART_BASE 0x10000000L
#define UART_TX 0
#define UART_LCR 3
#define UART_LCR_RESET 0b00000011
#define UART_LCR_DIV_ACCESS (1 << 7)

#define UART_DIV_LSB 0

#define UART_LSR 5
#define UART_LSR_TEMT (1 << 6)
#define UART_LSR_THRE (1 << 5)

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END ((uintptr_t) & _pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, &_heap_start + 0x1000);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
  while (!(inb(UART_BASE + UART_LSR) & (UART_LSR_TEMT | UART_LSR_THRE)))
    ;

  outb(UART_BASE + UART_TX, ch);
}

void halt(int code) {

  asm volatile("ebreak");

  while (1)
    ;
}

extern char _etext, _bdata, _edata, _bss_start, _bss_end;
void _trm_init() {
  *(volatile uint8_t *)(UART_BASE + UART_LCR) =
      UART_LCR_RESET | UART_LCR_DIV_ACCESS;

  *(volatile uint8_t *)(UART_BASE + UART_DIV_LSB) = 1;

  *(volatile uint8_t *)(UART_BASE + UART_LCR) = UART_LCR_RESET;

  char *src, *dst;
  src = &_etext;
  dst = &_bdata;
  memcpy(dst, src, &_edata - &_bdata);
  memset(&_bss_start, 0, &_bss_end - &_bss_start);
  int ret = main(mainargs);
  halt(ret);
}
