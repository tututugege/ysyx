#include <am.h>
#include <klib.h>
#include <riscv/riscv.h>
#include <stdbool.h>
#include <stdint.h>

#define FB_ADDR 0x21000000

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {

  // uint32_t vga_size = inl(VGACTL_ADDR);
  // int i;
  // int w = (vga_size >> 16);
  // int h = (vga_size & 0xFFFF);
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  //
  // for (i = 0; i < w * h; i++)
  //   fb[i] = i;
  //
  // outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {

  // uint32_t vga_size = inl(VGACTL_ADDR);
  *cfg = (AM_GPU_CONFIG_T){
      .present = true, .has_accel = false, .width = 640, .height = 480};

  cfg->vmemsz = cfg->width * cfg->height;
};

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int w = 640;
  uint32_t *base =
      (uint32_t *)((ctl->y * w + ctl->x) * sizeof(uint32_t) + FB_ADDR);
  uint32_t *color = ctl->pixels;

  for (int i = 0; i < ctl->h; i++) {
    for (int j = 0; j < ctl->w; j++) {
      outl((uintptr_t)(base + i * w + j), color[i * ctl->w + j]);
    }
  }

  // if (ctl->sync) {
  //   outl(SYNC_ADDR, 1);
  // }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) { status->ready = true; }
