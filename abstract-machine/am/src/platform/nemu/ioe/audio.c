#include <am.h>
#include <nemu.h>
#include <stdint.h>
#include <sys/types.h>

#define AUDIO_FREQ_ADDR (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR (AUDIO_ADDR + 0x14)

void __am_audio_init() {}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->bufsize = inl(AUDIO_SBUF_SIZE_ADDR);
  cfg->present = (cfg->bufsize != 0);
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  outl(AUDIO_FREQ_ADDR, ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR, ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR, ctrl->samples);
  outl(AUDIO_INIT_ADDR, 1);
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  static int wr_ptr = 0;
  int size = inl(AUDIO_SBUF_SIZE_ADDR);
  int used = inl(AUDIO_COUNT_ADDR);

  while (size - used < ctl->buf.end - ctl->buf.start) {
    used = inl(AUDIO_COUNT_ADDR);
  }

  uint8_t *data = ctl->buf.start;
  uint8_t *stream = (uint8_t *)AUDIO_SBUF_ADDR;

  while (data != (uint8_t *)ctl->buf.end) {
    outb((uintptr_t)(stream + wr_ptr), *(data++));
    wr_ptr = (wr_ptr + 1) % size;
  }
}
