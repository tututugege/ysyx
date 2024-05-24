#include <am.h>
#include <riscv/riscv.h>

#define CLINT_MMIO 0x02000000

void __am_timer_init() {}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = (uint64_t)inl(CLINT_MMIO + 4);
  uptime->us |= (uint64_t)inl(CLINT_MMIO);
  uptime->us = uptime->us + (uptime->us >> 1);
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  uint32_t time1 = inl(CLINT_MMIO + 8);
  uint32_t time2 = inl(CLINT_MMIO + 12);

  rtc->second = time1 & 0xFF;
  rtc->minute = (time1 >> 8) & 0xFF;
  rtc->hour = time1 >> 16;
  rtc->day = time2 & 0xFF;
  rtc->month = (time2 >> 8) & 0xFF;
  rtc->year = time2 >> 16;
}
