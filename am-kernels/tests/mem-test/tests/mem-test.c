#include <am.h>

#define SRAM_BASE 0x0f000000
#define SRAM_SIZE 0x1000
int main() {
  int addr;
  int len_mask;

  len_mask = 0xFF;
  for (int i = 0; i < SRAM_SIZE / sizeof(char); i++) {
    addr = SRAM_BASE + i * sizeof(char);
    *(volatile char *)(addr) = addr & len_mask;
  }

  for (int i = 0; i < SRAM_SIZE / sizeof(char); i++) {
    addr = SRAM_BASE + i * sizeof(char);
    if (*(volatile char *)(addr) != (addr & len_mask))
      halt(1);
  }

  len_mask = 0xFFFF;
  for (int i = 0; i < SRAM_SIZE / sizeof(short); i++) {
    addr = SRAM_BASE + i * sizeof(short);
    *(volatile short *)(addr) = addr & len_mask;
  }

  for (int i = 0; i < SRAM_SIZE / sizeof(short); i++) {
    addr = SRAM_BASE + i * sizeof(short);
    if (*(volatile short *)(addr) != (addr & len_mask))
      halt(1);
  }

  len_mask = 0xFFFFFFFF;
  for (int i = 0; i < SRAM_SIZE / sizeof(int); i++) {
    addr = SRAM_BASE + i * sizeof(int);
    *(volatile int *)(addr) = addr & len_mask;
  }

  for (int i = 0; i < SRAM_SIZE / sizeof(int); i++) {
    addr = SRAM_BASE + i * sizeof(int);
    if (*(volatile int *)(addr) != (addr & len_mask))
      halt(1);
  }

  for (int i = 0; i < SRAM_SIZE / sizeof(long long); i++) {
    addr = SRAM_BASE + i * sizeof(long long);
    *(volatile long long *)(addr) = addr;
  }

  for (int i = 0; i < SRAM_SIZE / sizeof(long long); i++) {
    addr = SRAM_BASE + i * sizeof(long long);
    if (*(volatile long long *)(addr) != addr)
      halt(1);
  }

  return 0;
}
