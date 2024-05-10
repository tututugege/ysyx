#include <am.h>

#define PSRAM_BASE 0x80000000
#define PSRAM_SIZE 0x400000
int main() {
  int addr;
  int len_mask;

  len_mask = 0xFF;
  for (int i = 0; i < PSRAM_SIZE / sizeof(char); i++) {
    addr = PSRAM_BASE + i * sizeof(char);
    *(volatile char *)(addr) = addr & len_mask;
  }

  for (int i = 0; i < PSRAM_SIZE / sizeof(char); i++) {
    addr = PSRAM_BASE + i * sizeof(char);
    if (*(volatile char *)(addr) != (addr & len_mask)) {
      halt(1);
    }
  }

  // addr = PSRAM_BASE + 16 * sizeof(char);
  // *(volatile char *)(addr) = addr & len_mask;
  // char data = *(volatile char *)(addr);
  // if (data != (addr & len_mask)) {
  //   printf("%d %d", data, addr & len_mask);
  //   halt(1);
  // }

  len_mask = 0xFFFF;
  for (int i = 0; i < PSRAM_SIZE / sizeof(short); i++) {
    addr = PSRAM_BASE + i * sizeof(short);
    *(volatile unsigned short *)(addr) = addr & len_mask;
  }

  for (int i = 0; i < PSRAM_SIZE / sizeof(short); i++) {
    addr = PSRAM_BASE + i * sizeof(short);
    if (*(volatile unsigned short *)(addr) != (addr & len_mask)) {
      halt(1);
    }
  }

  len_mask = 0xFFFFFFFF;
  for (int i = 0; i < PSRAM_SIZE / sizeof(int); i++) {
    addr = PSRAM_BASE + i * sizeof(int);
    *(volatile int *)(addr) = addr & len_mask;
  }

  for (int i = 0; i < PSRAM_SIZE / sizeof(int); i++) {
    addr = PSRAM_BASE + i * sizeof(int);
    if (*(volatile int *)(addr) != (addr & len_mask))
      halt(1);
  }

  for (int i = 0; i < PSRAM_SIZE / sizeof(long long); i++) {
    addr = PSRAM_BASE + i * sizeof(long long);
    *(volatile long long *)(addr) = addr;
  }

  for (int i = 0; i < PSRAM_SIZE / sizeof(long long); i++) {
    addr = PSRAM_BASE + i * sizeof(long long);
    if (*(volatile long long *)(addr) != addr)
      halt(1);
  }

  return 0;
}
