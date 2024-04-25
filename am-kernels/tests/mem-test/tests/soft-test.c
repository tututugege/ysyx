#include <am.h>

#define SPI_BASE 0x10001000
#define SPI_RX0 0x0
#define SPI_RX1 0x4
#define SPI_TX0 0x0
#define SPI_TX1 0x4

#define SPI_CTRL 0x10
#define SPI_CTRL_ASS (1 << 13)
#define SPI_CTRL_LSB (1 << 11)
#define SPI_CTRL_Tx_NEG (1 << 10)
#define SPI_CTRL_Rx_NEG (1 << 9)
#define SPI_CTRL_GO_BSY (1 << 8)
#define SPI_CTRL_CHAR_LEN 0x7F

#define SPI_DIVIDER 0x14

#define SPI_SS 0x18
#define SS_FLASH 1

#define FLASH_BASE 0x30000000
#define FLASH_CMD_RD 0x3 << 24
#define FLASH_ADDR 0xFFFFFF

#define ENDIAN_CHG(x)                                                          \
  ((((x) << 24) | (((x) << 8) & 0xFF0000) | (((x) >> 8) & 0xFF00) |            \
    (((x) >> 24) & 0xFF)))

uint8_t buf[1000];

uint32_t flash_read(uint32_t addr) {
  *(volatile char *)(SPI_BASE + SPI_DIVIDER) = 2;
  *(volatile char *)(SPI_BASE + SPI_SS) = SS_FLASH;
  *(volatile int *)(SPI_BASE + SPI_TX1) = (addr & FLASH_ADDR) | FLASH_CMD_RD;
  *(volatile int *)(SPI_BASE + SPI_CTRL) =
      (SPI_CTRL_CHAR_LEN & 64) | SPI_CTRL_GO_BSY | SPI_CTRL_ASS;

  while (*(volatile int *)(SPI_BASE + SPI_CTRL) & SPI_CTRL_GO_BSY)
    ;

  int res = *(volatile int *)(SPI_BASE + SPI_RX0);
  return ENDIAN_CHG(res);
}

int main() {

  for (int i = 0; i < 1000 / sizeof(int); i++) {
    *(uint32_t *)(buf + i * sizeof(int)) =
        flash_read(FLASH_BASE + i * sizeof(int));
  }
  void (*func)() = (void (*)())buf;
  func();

  return 0;
}
