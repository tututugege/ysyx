#include <common.h>
#include <io.h>
#include <sys/time.h>
#include <time.h>

enum { REG_RTC_LO, REG_RTC_HI, REG_RTC_HMS, REG_RTC_YMD, NR_RTC };

uint32_t rtc_port_base[NR_RTC];

struct timeval boot_time = {};

static void rtc_io_handler(uint32_t offset, bool is_write) {
  if (!is_write) {
    if (offset < 8) {
      struct timeval now;
      gettimeofday(&now, NULL);
      uint64_t seconds = now.tv_sec - boot_time.tv_sec;
      uint64_t useconds = now.tv_usec - boot_time.tv_usec;
      useconds = seconds * 1000000 + (useconds + 500);

      rtc_port_base[REG_RTC_LO] = useconds;
      rtc_port_base[REG_RTC_HI] = (useconds >> 32);
    } else {
      time_t t = time(NULL);
      struct tm *tm = localtime(&t);
      rtc_port_base[REG_RTC_HMS] =
          tm->tm_sec | (tm->tm_min << 8) | (tm->tm_hour << 16);
      rtc_port_base[REG_RTC_YMD] =
          tm->tm_mday | ((tm->tm_mon + 1) << 8) | ((tm->tm_year + 1900) << 16);
    }
  }
}

void init_timer() {
  gettimeofday(&boot_time, NULL);
#ifdef CONFIG_RTC_MMIO
  add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 16, rtc_io_handler);
#endif
}
