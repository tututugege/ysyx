#include <am.h>
#include <klib.h>

#define FLASH_BASE 0x30000000
#define FLASH_SIZE 0x1000000
int main() {
  int addr;
  int val;

  for (int i = 0; i < FLASH_SIZE / sizeof(int); i++) {
    addr = FLASH_BASE + i * sizeof(int);
    if ((val = *(volatile int *)(addr)) != addr) {
      halt(1);
    }
  }

  return 0;
}
