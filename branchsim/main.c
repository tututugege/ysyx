#include "./include/config.h"
#include <assert.h>

btrace_node btrace[MAX_BTRACE];

int init_btrace(char *name) {
  FILE *fp = fopen(name, "r");
  assert(fp != NULL);
  fseek(fp, 0, SEEK_END);
  int file_size = ftell(fp);
  printf("itrace size: %x\n", file_size);
  rewind(fp);
  assert(fread(btrace, sizeof(char), file_size, fp));
  fclose(fp);

  return file_size;
}

int main() {
  int fail = 0;
  int i;
  init_btrace("../npc/btrace");

  for (i = 0; i < MAX_BTRACE; i++) {
    if (btrace[i].pc == 0)
      break;

    int prediction = 0;
    if (btrace[i].pc < btrace[i].br_target)
      prediction = 1;

    if (prediction != btrace[i].pc)
      fail++;
  }

  printf("branch prediction success: %f", (double)fail / (double)i);

  return 0;
}
