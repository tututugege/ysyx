#include "rtdef.h"
#include <am.h>
#include <klib.h>
#include <rtthread.h>

#define ALIGN(x, n) ((uintptr_t)(x) & ~((n)-1))

typedef struct wrapper_arg {
  void *tentry;
  void *parameter;
  void *texit;
} wrapper_arg;

typedef struct switch_arg {
  rt_ubase_t from;
  rt_ubase_t to;
} switch_arg;

static Context *ev_handler(Event e, Context *c) {
  switch_arg *sarg;

  switch (e.event) {
  case EVENT_YIELD:
    sarg = (switch_arg *)(rt_thread_self()->user_data);
    if (sarg->from)
      *(uintptr_t *)(sarg->from) = (uintptr_t)c;
    c = *(Context **)sarg->to;
    break;
  case EVENT_IRQ_TIMER:
    break;
  default:
    printf("Unhandled event ID = %d\n", e.event);
    assert(0);
  }
  return c;
}

void __am_cte_init() { cte_init(ev_handler); }

void rt_hw_context_switch_to(rt_ubase_t to) {
  rt_ubase_t temp = rt_thread_self()->user_data;
  switch_arg sarg = {.from = 0, .to = to};
  rt_thread_self()->user_data = (rt_ubase_t)&sarg;
  yield();
  rt_thread_self()->user_data = temp;
}

void rt_hw_context_switch(rt_ubase_t from, rt_ubase_t to) {
  rt_ubase_t temp = rt_thread_self()->user_data;
  switch_arg sarg = {.from = from, .to = to};
  rt_thread_self()->user_data = (rt_ubase_t)&sarg;
  yield();
  rt_thread_self()->user_data = temp;
}

void rt_hw_context_switch_interrupt(void *context, rt_ubase_t from,
                                    rt_ubase_t to,
                                    struct rt_thread *to_thread) {
  assert(0);
}

void thread_wrapper(void *arg) {
  wrapper_arg *warg = (wrapper_arg *)arg;
  void (*tentry)(void *) = (void (*)(void *))(warg->tentry);
  tentry(warg->parameter);
  void (*texit)(void) = (void (*)(void))(warg->texit);
  texit();
}

rt_uint8_t *rt_hw_stack_init(void *tentry, void *parameter,
                             rt_uint8_t *stack_addr, void *texit) {

  void *end = (Context *)ALIGN(stack_addr, sizeof(uintptr_t));
  void *start = end - sizeof(void *) * 3 - sizeof(Context);
  wrapper_arg *warg = end - 3 * sizeof(void *);
  Area stack_area = {.end = warg, .start = start};

  warg->tentry = tentry;
  warg->parameter = parameter;
  warg->texit = texit;

  return (rt_uint8_t *)kcontext(stack_area, thread_wrapper, warg);
}
