#include <am.h>
#include <klib.h>

#define GPIO_BASE_BASE 0x10002000

#define GPIO_LED 0x0
#define GPIO_SW 0x4
int main() {

  unsigned short led = 1 << 15;
  unsigned short sw = 0;
  unsigned short old_sw = 0;
  unsigned short mask = 0;
  while (1) {
    *(volatile short *)(GPIO_BASE_BASE + GPIO_LED) = led;
    led >>= 1;
    if (led == 0)
      led = 1 << 15;

    sw = *(volatile short *)(GPIO_BASE_BASE + GPIO_SW);
    if (sw != old_sw) {
      mask = 1;
      for (int i = 0; i < 16; i++) {
        if ((sw & mask) != (old_sw & mask)) {
          if (sw & mask)
            printf("sw %d: on\n", i);
          else
            printf("sw %d: off\n", i);
        }
        mask = mask << 1;
      }
    }

    old_sw = sw;
    for (int i = 0; i < 20000; i++)
      ;
  }

  return 0;
}
