#include "klib-macros.h"
#include <amtest.h>

void rtc_test() {
  AM_TIMER_RTC_T rtc;
  int sec = 1;
  // uint64_t time = 0;
  // // time = io_read(AM_TIMER_UPTIME).us;
  // printf("%x\n", (uint32_t)time);
  //
  // volatile int i;
  // for (i = 0; i < 100000000; i++)
  //   ;
  //
  // time = io_read(AM_TIMER_UPTIME).us;
  // printf("%x\n", (uint32_t)time);

  while (1) {

    // while ((time = io_read(AM_TIMER_UPTIME).us) / 1000000 < sec)
    //   printf("%x\n", (uint32_t)time);
    while (io_read(AM_TIMER_UPTIME).us / 1000000 < sec)
      ;

    rtc = io_read(AM_TIMER_RTC);
    printf("%d-%d-%d %02d:%02d:%02d GMT (", rtc.year, rtc.month, rtc.day,
           rtc.hour, rtc.minute, rtc.second);
    if (sec == 1) {
      printf("%d second).\n", sec);
    } else {
      printf("%d seconds).\n", sec);
    }
    sec++;
  }
}
