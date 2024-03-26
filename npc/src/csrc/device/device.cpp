#include <SDL2/SDL.h>
#include <common.h>
#include <cpu-info.h>
#include <io.h>
#include <sys/time.h>

#define TIMER_HZ 60

void init_timer();
void init_serial();
void init_vga();
void vga_update_screen();

void device_update() {
  static uint64_t last = 0;
  struct timeval now;
  gettimeofday(&now, NULL);
  extern timeval boot_time;

  uint64_t seconds = now.tv_sec - boot_time.tv_sec;
  uint64_t useconds = now.tv_usec - boot_time.tv_usec;
  useconds = seconds * 1000000 + (useconds + 500);

  if (useconds - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = useconds;

#ifdef CONFIG_HAS_VGA
  vga_update_screen();

  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
    case SDL_QUIT:
      npc_state.state = NPC_QUIT;
      break;
#ifdef CONFIG_HAS_KEYBOARD
      // If a key was pressed
      /* case SDL_KEYDOWN: */
      /* case SDL_KEYUP: { */
      /*   uint8_t k = event.key.keysym.scancode; */
      /*   bool is_keydown = (event.key.type == SDL_KEYDOWN); */
      /*   send_key(k, is_keydown); */
      /*   break; */
      /* } */
#endif
    default:
      break;
    }
  }
#endif
}

void sdl_clear_event_queue() {
  SDL_Event event;
  while (SDL_PollEvent(&event))
    ;
}

void init_device() {

#ifdef CONFIG_HAS_TIMER
  init_timer();
#endif

#ifdef CONFIG_HAS_SERIAL
  init_serial();
#endif

#ifdef CONFIG_HAS_VGA
  init_vga();
#endif
}
