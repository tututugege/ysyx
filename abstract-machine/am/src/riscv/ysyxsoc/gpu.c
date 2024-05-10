#include <am.h>
#include <klib.h>
#include <riscv/riscv.h>
#include <stdint.h>

#define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000
#define SERIAL_PORT (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR (DEVICE_BASE + 0x0000060)
#define RTC_ADDR (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR (DEVICE_BASE + 0x0000200)
#define DISK_ADDR (DEVICE_BASE + 0x0000300)
#define FB_ADDR (MMIO_BASE + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE + 0x1200000)

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

  uint32_t vga_size = inl(VGACTL_ADDR);
  *cfg = (AM_GPU_CONFIG_T){.present = true,
                           .has_accel = false,
                           .width = vga_size >> 16,
                           .height = vga_size & 0xFFFF};

  cfg->vmemsz = cfg->width * cfg->height;
};

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t vga_size = inl(VGACTL_ADDR);
  int w = vga_size >> 16;
  uint32_t *base =
      (uint32_t *)((ctl->y * w + ctl->x) * sizeof(uint32_t) + FB_ADDR);
  uint32_t *color = ctl->pixels;

  for (int i = 0; i < ctl->h; i++) {
    for (int j = 0; j < ctl->w; j++) {
      outl((uintptr_t)(base + i * w + j), color[i * ctl->w + j]);
    }
  }

  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) { status->ready = true; }
