#include <am.h>
#include <riscv/riscv.h>

#define DEVICE_BASE 0xa0000000
#define SERIAL_PORT (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR (DEVICE_BASE + 0x0000060)
#define RTC_ADDR (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR (DEVICE_BASE + 0x0000200)
#define DISK_ADDR (DEVICE_BASE + 0x0000300)
#define FB_ADDR (MMIO_BASE + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE + 0x1200000)

void __am_timer_init() {}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = (uint64_t)inl(RTC_ADDR + 4);
  uptime->us |= (uint64_t)inl(RTC_ADDR);
  uptime->us /= 2;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  uint32_t time1 = inl(RTC_ADDR + 8);
  uint32_t time2 = inl(RTC_ADDR + 12);

  rtc->second = time1 & 0xFF;
  rtc->minute = (time1 >> 8) & 0xFF;
  rtc->hour = time1 >> 16;
  rtc->day = time2 & 0xFF;
  rtc->month = (time2 >> 8) & 0xFF;
  rtc->year = time2 >> 16;
}
