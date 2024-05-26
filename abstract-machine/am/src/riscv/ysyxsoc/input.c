#include "./scancode.h"
#include <am.h>
#include <amdev.h>
#include <klib.h>
#include <riscv/riscv.h>

#define KBD_BASE 0x10011000

static uint8_t keymap[256];
static uint8_t keymap_ext[256];

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint8_t code = inb(KBD_BASE);

  uint8_t *keymap_ptr;

  if (code == 0) {
    kbd->keydown = false;
    kbd->keycode = AM_KEY_NONE;
    return;
  }

  if (code == 0xE0) {
    // printf("b\n");
    keymap_ptr = keymap_ext;
    do {
      code = inb(KBD_BASE);
    } while (code == 0);
  } else {
    // printf("c %d\n", code);
    keymap_ptr = keymap;
  }

  if (code == 0xF0) {
    // printf("d\n");
    kbd->keydown = false;
    do {
      code = inb(KBD_BASE);
    } while (code == 0);
  } else {
    // printf("e\n");
    kbd->keydown = true;
  }

  kbd->keycode = keymap_ptr[code];
}

void __am_input_init() {
  AM_KEYS0(KEYMAP);
  AM_KEYS_EXT(KEYMAP_EXT);
}
