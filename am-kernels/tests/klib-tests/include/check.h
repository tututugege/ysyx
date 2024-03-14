#include <am.h>
#include <klib-macros.h>
#include <klib.h>

#define N 32
char data[N];

static inline void reset() {
  for (int i = 0; i < N; i++) {
    data[i] = i + 1;
  }
}

/* static inline void print() { */
/*   for (int i = 0; i < N; i++) { */
/*     printf("%d ", data[i]); */
/*   } */
/* } */
__attribute__((noinline)) void check(bool cond) {
  if (!cond)
    halt(1);
}

static inline void check_seq(int l, int r) {
  int i;
  for (i = l; i < r; i++) {
    check(data[i] == i + 1);
  }
}

static inline void check_eq(int l, int r, int val) {
  int i;
  for (i = l; i < r; i++) {
    check(data[i] == val);
  }
}
