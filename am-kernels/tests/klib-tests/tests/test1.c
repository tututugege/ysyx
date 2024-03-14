#include "check.h"

void test_memset() {
  int l, r;
  for (l = 0; l < N; l++) {
    for (r = l + 1; r <= N; r++) {
      reset();
      char val = (l + r) / 2;
      memset(data + l, val, r - l);
      check_seq(0, l);
      check_eq(l, r, val);
      check_seq(r, N);
    }
  }
}

int main() {
  test_memset();
  return 0;
}
