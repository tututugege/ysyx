#include <am.h>

#define FLASH_BASE 0x30000000

int main() {

  void (*func)() = (void (*)())FLASH_BASE;
  func();

  return 0;
}
