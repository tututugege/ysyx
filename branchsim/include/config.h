#include <stdint.h>
#include <stdio.h>

#define MAX_BTRACE 10000
typedef struct btrace {
  uint32_t pc;
  int br_taken;
  uint32_t br_target;
} btrace_node;
