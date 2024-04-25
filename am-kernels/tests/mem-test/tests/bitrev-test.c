#include <am.h>

#define SPI_BASE 0x10001000
#define SPI_RX0 0x0
#define SPI_TX0 0x0

#define SPI_CTRL 0x10
#define SPI_CTRL_ASS (1 << 13)
#define SPI_CTRL_LSB (1 << 11)
#define SPI_CTRL_Tx_NEG (1 << 10)
#define SPI_CTRL_Rx_NEG (1 << 9)
#define SPI_CTRL_GO_BSY (1 << 8)
#define SPI_CTRL_CHAR_LEN 0x7F

#define SPI_DIVIDER 0x14

#define SPI_SS 0x18
#define SS_BITREV (1 << 7)

char test[] = {0b11001100, 0b10101111, 0b11110000, 0b10110111};
char ans[] = {0b00110011, 0b11110101, 0b00001111, 0b11101101};

int main() {
  *(volatile char *)(SPI_BASE + SPI_DIVIDER) = 2;
  *(volatile char *)(SPI_BASE + SPI_SS) = SS_BITREV;
  int res;

  for (int i = 0; i < sizeof(test); i++) {
    *(volatile char *)(SPI_BASE + SPI_TX0) = test[i];
    *(volatile int *)(SPI_BASE + SPI_CTRL) =
        SPI_CTRL_LSB | (SPI_CTRL_CHAR_LEN & 0x10) | SPI_CTRL_GO_BSY;
    while (*(volatile int *)(SPI_BASE + SPI_CTRL) & SPI_CTRL_GO_BSY)
      ;

    if ((res = *(volatile char *)(SPI_BASE + SPI_RX0 + 1)) != ans[i]) {
      halt(1);
    }
  }
  return 0;
}
