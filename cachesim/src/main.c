#include "../include/config.h"
#include "../include/itrace.h"
#include <assert.h>
#include <stdint.h>
#include <stdio.h>

itrace_node itrace[MAX_ITRACE_NUM];
int trace_num;

int init_itrace(char *name) {
  FILE *fp = fopen(name, "r");
  assert(fp != NULL);
  fseek(fp, 0, SEEK_END);
  int file_size = ftell(fp);
  printf("itrace size: %x\n", file_size);
  rewind(fp);
  assert(fread(itrace, sizeof(char), file_size, fp));
  fclose(fp);

  return file_size;
}

void test();
void test_all();

int main(int argc, char *argv[]) {
  trace_num =
      init_itrace(
          "/home/tututu/hry/ysyx/ysyx-workbench/nemu/build/cache_itrace.txt") /
      sizeof(itrace_node);

  test_all();

  return 0;
}
