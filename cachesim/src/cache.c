#include "../include/config.h"
#include "../include/itrace.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define TAG_VALID 0x1
#define TAG(addr)                                                              \
  (addr >> (cache_params.offset_width + cache_params.index_width))
#define INDEX(addr)                                                            \
  ((addr >> cache_params.offset_width) & ((1 << cache_params.index_width) - 1))

#define MAX_WAY 8
#define MAX_WAY_SIZE 1 << 16

uint32_t cache_tagv[MAX_WAY][MAX_WAY_SIZE];

int cache_miss;
extern itrace_node itrace[MAX_ITRACE_NUM];
extern int trace_num;

typedef struct params {
  int offset_width;
  int index_width;
  int way_num;
} params;

params cache_params = {.offset_width = OFFSET_WIDTH,
                       .index_width = INDEX_WIDTH,
                       .way_num = WAY_NUM};

// a algorithm to select which way to be evicted
int cache_select_evict() { return rand() % cache_params.way_num; }

// miss
void cache_evict(uint32_t addr) {
  int evicit_way = cache_select_evict();
  cache_tagv[evicit_way][INDEX(addr)] = TAG_VALID | (TAG(addr) << 1);
}

void cache_read(uint32_t addr) {
  uint32_t tagv_rdata;
  int i;

  for (i = 0; i < cache_params.way_num; i++) {
    tagv_rdata = cache_tagv[i][INDEX(addr)];
    if ((tagv_rdata & TAG_VALID) && (tagv_rdata >> 1) == TAG(addr)) {
      break;
    }
  }

  if (i == cache_params.way_num) {
    cache_evict(addr);
    cache_miss++;
  }
}

int get_width(int size) {
  int i = 0;
  while (size /= 2)
    i++;
  return i;
}

void test() {
  for (int i = 0; i < trace_num; i++) {
    for (int j = 0; j < itrace[i].num; j++) {
      cache_read(itrace[i].pc + j * 4);
    }
  }
  printf("%d-way, %d blocks, %d Bytes per block\n", cache_params.way_num,
         1 << cache_params.index_width, 1 << cache_params.offset_width);

  printf("cache miss: %d\n\n", cache_miss);
}

void test_all() {
  params temp = cache_params;

  int size = cache_params.way_num * (1 << cache_params.index_width) *
             (1 << cache_params.offset_width);

  int width;
  int way, index, offset;

  for (way = 1; way < MAX_WAY; way *= 2) {
    width = get_width(size / way);
    for (offset = 2; offset < width - 1; offset++) {
      index = width - offset;
      cache_miss = 0;
      cache_params.offset_width = offset;
      cache_params.index_width = index;
      cache_params.way_num = way;
      test();
    }
  }
}
