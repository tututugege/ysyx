#include <am.h>
#include <klib.h>
#include <riscv/riscv.h>

#define UART_BASE 0x10000000L
#define UART_TX 0
#define UART_RX 0
#define UART_LCR 3
#define UART_LCR_RESET 0b00000011
#define UART_LCR_DIV_ACCESS (1 << 7)

#define UART_DIV_LSB 0

#define UART_LSR 5
#define UART_LSR_DR (1 << 0)
#define UART_LSR_TEMT (1 << 6)
#define UART_LSR_THRE (1 << 5)

void __am_uart_init() {
  *(volatile uint8_t *)(UART_BASE + UART_LCR) =
      UART_LCR_RESET | UART_LCR_DIV_ACCESS;

  *(volatile uint8_t *)(UART_BASE + UART_DIV_LSB) = 1;

  *(volatile uint8_t *)(UART_BASE + UART_LCR) = UART_LCR_RESET;
}

void __am_uart_tx(AM_UART_TX_T *cfg) {
  // while (!(inb(UART_BASE + UART_LSR) & (UART_LSR_THRE | UART_LSR_TEMT)))
  //   ;

  outb(UART_BASE + UART_TX, cfg->data);
}

void __am_uart_rx(AM_UART_RX_T *cfg) {
  if ((inb(UART_BASE + UART_LSR) & (UART_LSR_DR)))
    cfg->data = inb(UART_BASE + UART_RX);
  else
    cfg->data = 0xff;
}
