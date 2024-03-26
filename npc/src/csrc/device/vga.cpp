#include <common.h>
#include <io.h>

#define SCREEN_W 400
#define SCREEN_H 300

static uint32_t vgactl_port_base[8];

static uint32_t vmem[SCREEN_W * SCREEN_H];

#ifdef CONFIG_VGA_SHOW_SCREEN
#include <SDL2/SDL.h>

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "RISCV32e-NPC");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(SCREEN_W * 2, SCREEN_H * 2, 0, &window,
                              &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
                              SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_update_screen() {
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register

  if (vgactl_port_base[1]) {
    update_screen();
  }
  vgactl_port_base[1] = 0;
}

static void vgactl_io_handler(uint32_t offset, bool is_write) {
  assert(!is_write || offset == 4);
  if (is_write) {
    vga_update_screen();
  }
}

#endif

void init_vga() {
  vgactl_port_base[0] = (SCREEN_W << 16) | SCREEN_H;

#ifdef CONFIG_VGA_CTL_MMIO
  add_mmio_map("vgactl", CONFIG_VGA_CTL_MMIO, vgactl_port_base, 8,
               vgactl_io_handler);

  add_mmio_map("vmem", CONFIG_FB_ADDR, vmem,
               SCREEN_W * SCREEN_H * sizeof(uint32_t), NULL);
  init_screen();
  memset(vmem, 0, SCREEN_H * SCREEN_W);
#endif
}
