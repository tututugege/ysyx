#include <am.h>
#include <klib.h>

#define SDRAM_BASE 0xa0000000
#define SDRAM_SIZE 0x2000
int main() {
  int addr;
  int len_mask;

  // len_mask = 0xFF;
  // for (int i = 0; i < SDRAM_SIZE / sizeof(char); i++) {
  //   addr = SDRAM_BASE + i * sizeof(char);
  //   *(volatile char *)(addr) = addr & len_mask;
  //
  //   if (i % 0x10000 == 0)
  //     printf("%x\n", i);
  // }
  //
  // for (int i = 0; i < SDRAM_SIZE / sizeof(char); i++) {
  //   addr = SDRAM_BASE + i * sizeof(char);
  //   if (i % 0x10000 == 0)
  //     printf("%x\n", i);
  //
  //   if (*(volatile char *)(addr) != (addr & len_mask)) {
  //     halt(1);
  //   }
  // }
  //
  // printf("char success!\n");

  len_mask = 0xFFFF;
  for (int i = 0; i < SDRAM_SIZE / sizeof(short); i++) {
    addr = SDRAM_BASE + i * sizeof(short);
    *(volatile unsigned short *)(addr) = addr & len_mask;
    if (i % 0x1000 == 0)
      printf("%x\n", i);
  }

  for (int i = 0; i < SDRAM_SIZE / sizeof(short); i++) {
    addr = SDRAM_BASE + i * sizeof(short);
    if (i % 0x1000 == 0)
      printf("%x\n", i);
    if (*(volatile unsigned short *)(addr) != (addr & len_mask)) {
      halt(1);
    }
  }

  printf("short success!\n");

  // len_mask = 0xFFFFFFFF;
  // for (int i = 0; i < SDRAM_SIZE / sizeof(int); i++) {
  //   addr = SDRAM_BASE + i * sizeof(int);
  //   *(volatile int *)(addr) = addr & len_mask;
  // }
  //
  // for (int i = 0; i < SDRAM_SIZE / sizeof(int); i++) {
  //   addr = SDRAM_BASE + i * sizeof(int);
  //   if (*(volatile int *)(addr) != (addr & len_mask))
  //     halt(1);
  // }
  //
  // printf("int success!\n");
  //
  // for (int i = 0; i < SDRAM_SIZE / sizeof(long long); i++) {
  //   addr = SDRAM_BASE + i * sizeof(long long);
  //   *(volatile long long *)(addr) = addr;
  // }
  //
  // for (int i = 0; i < SDRAM_SIZE / sizeof(long long); i++) {
  //   addr = SDRAM_BASE + i * sizeof(long long);
  //   if (*(volatile long long *)(addr) != addr)
  //     halt(1);
  // }
  //
  // printf("long long success!\n");
  //
  return 0;
}
