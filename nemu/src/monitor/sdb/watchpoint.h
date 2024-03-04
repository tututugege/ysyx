#include <common.h>

typedef struct token {
  int type;
  int num;
} Token;

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  word_t old_val;
  Token tokens[32];

} WP;

#define NR_WP 32

void init_wp_pool();
WP *new_wp();
void free_wp(WP *wp);
