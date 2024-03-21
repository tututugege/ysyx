#include <check.h>
#include <string.h>

char *test1 = "";
char *test2 = "Hello, world";
char *test3 = "Hello, world\n";
char *test4 = "hello, world";

int main() {
  // test strlen
  check(strlen(test1) == 0);
  check(strlen(test2) == 12);
  check(strlen(test3) == 13);
  check(strlen(test4) == 12);

  char buf1[30];
  char buf2[30];
  char buf3[30];
  char buf4[30];

  // test strcmp
  char *ptr[4] = {test1, test2, test3, test4};
  char *buf_ptr[4] = {buf1, buf2, buf3, buf4};

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i == j)
        check(strcmp(ptr[i], ptr[j]) == 0);
      if (i < j)
        check(strcmp(ptr[i], ptr[j]) < 0);
      if (i > j)
        check(strcmp(ptr[i], ptr[j]) > 0);
    }
  }

  // test strncmp

  // test strcpy
  strcpy(buf1, test1);
  strcpy(buf2, test2);
  strcpy(buf3, test3);
  strcpy(buf4, test4);

  for (int i = 0; i < 4; i++) {
    check(strcmp(buf_ptr[i], ptr[i]) == 0);
    check(strcmp(ptr[i], buf_ptr[i]) == 0);
  }

  // test strncpy
  strncpy(buf1, test1, 20);
  strncpy(buf2, test2, 20);
  strncpy(buf3, test3, 20);
  strncpy(buf4, test4, 20);

  for (int i = 0; i < 4; i++) {
    check(strcmp(buf_ptr[i], ptr[i]) == 0);
    check(strcmp(ptr[i], buf_ptr[i]) == 0);
  }

  strncpy(buf1, test1, 10);
  strncpy(buf2, test2, 10);
  strncpy(buf3, test3, 10);
  strncpy(buf4, test4, 10);

  check(strcmp(buf1, test1) == 0);
  check(strcmp(buf2, test2) == 0);
  check(strcmp(buf3, test3) == 0);
  check(strcmp(buf4, test4) == 0);

  return 0;
}
