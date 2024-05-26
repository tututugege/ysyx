#include <am.h>
#include <klib.h>

int main() {
  int c;
  while (1) {
    if ((c = getch()) != -1)
      putch(c);
  }

  return 0;
}
