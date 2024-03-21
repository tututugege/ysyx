#include <check.h>

int main() {

  char buf[128];
  unsigned int a = 0x80000000;
  unsigned int b = 0x7FFFFFFF;
  sprintf(buf, "%x %X %u %d\n", a, a, a, a);
  printf("%x %X %u %d\n", a, a, a, a);
  printf(buf);
  check(strcmp(buf, "80000000 80000000 2147483648 -2147483648\n") == 0);
  sprintf(buf, "%x %X %u %d\n", b, b, b, b);
  printf("%x %X %u %d\n", b, b, b, b);
  printf(buf);
  check(strcmp(buf, "7fffffff 7FFFFFFF 2147483647 2147483647\n") == 0);

  // check snprintf
  snprintf(buf, 22, "%x %X %u %d\n", a, a, a, a);
  printf(buf);
  check(strcmp(buf, "80000000 80000000 ") == 0);

  return 0;
}
