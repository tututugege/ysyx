/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan
 *PSL v2. You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
 *KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 *NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#include "watchpoint.h"
#include "sdb.h"
#include <stdlib.h>

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
static int WP_NO;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
  WP_NO = 0;
}

/* TODO: Implement the functionality of watchpoint */

WP *new_wp() {
  WP *p;
  if (free_ == NULL) {
    return NULL;
  }
  p = free_;
  free_ = free_->next;
  p->NO = WP_NO++;

  if (head == NULL) {
    head = p;
    p->next = NULL;
  } else {
    p->next = head;
    head = p;
  }

  return p;
}

void free_wp(WP *wp) {
  assert(wp);

  wp->next = free_;
  free_ = wp;
}
