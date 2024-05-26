/* _(RALT) _(RCTRL) _(UP) _(DOWN) _(LEFT)*/
/** _(RIGHT)*/
/*    _(INSERT) _(DELETE) _(HOME) _(END) _(PAGEUP) _(PAGEDOWN)*/

#define SCANCODE_A 0x1C
#define SCANCODE_B 0x32
#define SCANCODE_C 0x21
#define SCANCODE_D 0x23
#define SCANCODE_E 0x24
#define SCANCODE_F 0x2B
#define SCANCODE_G 0x34
#define SCANCODE_H 0x33
#define SCANCODE_I 0x43
#define SCANCODE_J 0x3B
#define SCANCODE_K 0x42
#define SCANCODE_L 0x4B
#define SCANCODE_M 0x3A
#define SCANCODE_N 0x31
#define SCANCODE_O 0x44
#define SCANCODE_P 0x4D
#define SCANCODE_Q 0x15
#define SCANCODE_R 0x2D
#define SCANCODE_S 0x1B
#define SCANCODE_T 0x2C
#define SCANCODE_U 0x3C
#define SCANCODE_V 0x2A
#define SCANCODE_W 0x1D
#define SCANCODE_X 0x22
#define SCANCODE_Y 0x35
#define SCANCODE_Z 0x1A

#define SCANCODE_1 0x16
#define SCANCODE_2 0x1E
#define SCANCODE_3 0x26
#define SCANCODE_4 0x25
#define SCANCODE_5 0x2E
#define SCANCODE_6 0x36
#define SCANCODE_7 0x3D
#define SCANCODE_8 0x3E
#define SCANCODE_9 0x46
#define SCANCODE_0 0x45

#define SCANCODE_RETURN 0x5A
#define SCANCODE_LSHIFT 0x12
#define SCANCODE_ESCAPE 0x76
#define SCANCODE_BACKSPACE 0x66
#define SCANCODE_TAB 0x0D
#define SCANCODE_SPACE 0x29

#define SCANCODE_MINUS 0x4E
#define SCANCODE_EQUALS 0x55
#define SCANCODE_LEFTBRACKET 0x54
#define SCANCODE_RIGHTBRACKET 0x5B
#define SCANCODE_BACKSLASH 0x5D
#define SCANCODE_SEMICOLON 0x4C
#define SCANCODE_APOSTROPHE 0x52
#define SCANCODE_GRAVE 0x0E
#define SCANCODE_COMMA 0x41
#define SCANCODE_PERIOD 0x49
#define SCANCODE_SLASH 0x4A

#define SCANCODE_CAPSLOCK 0x58
#define SCANCODE_RSHIFT 0x59
#define SCANCODE_LCTRL 0x14
#define SCANCODE_LALT 0x11

#define SCANCODE_F1 0x05
#define SCANCODE_F2 0x06
#define SCANCODE_F3 0x04
#define SCANCODE_F4 0x0C
#define SCANCODE_F5 0x03
#define SCANCODE_F6 0x0B
#define SCANCODE_F7 0x83
#define SCANCODE_F8 0x0A
#define SCANCODE_F9 0x01
#define SCANCODE_F10 0x09
#define SCANCODE_F11 0x78
#define SCANCODE_F12 0x07

#define SCANCODE_EXT_RCTRL 0x14
#define SCANCODE_EXT_RALT 0x11
#define SCANCODE_EXT_INSERT 0x70
#define SCANCODE_EXT_HOME 0x6C
#define SCANCODE_EXT_PAGEUP 0x7D
#define SCANCODE_EXT_DELETE 0x71
#define SCANCODE_EXT_END 0x69
#define SCANCODE_EXT_PAGEDOWN 0x7A
#define SCANCODE_EXT_RIGHT 0x74
#define SCANCODE_EXT_LEFT 0x6B
#define SCANCODE_EXT_DOWN 0x72
#define SCANCODE_EXT_UP 0x75

#define AM_KEYS0(_)                                                            \
  _(ESCAPE)                                                                    \
  _(F1)                                                                        \
  _(F2)                                                                        \
  _(F3)                                                                        \
  _(F4)                                                                        \
  _(F5)                                                                        \
  _(F6)                                                                        \
  _(F7)                                                                        \
  _(F8)                                                                        \
  _(F9) _(F10) _(F11) _(F12) _(GRAVE) _(1) _(2) _(3) _(4) _(5) _(6) _(7) _(8)  \
      _(9) _(0) _(MINUS) _(EQUALS) _(BACKSPACE) _(TAB) _(Q) _(W) _(E) _(R)     \
          _(T) _(Y) _(U) _(I) _(O) _(P) _(LEFTBRACKET) _(RIGHTBRACKET)         \
              _(BACKSLASH) _(CAPSLOCK) _(A) _(S) _(D) _(F) _(G) _(H) _(J) _(K) \
                  _(L) _(SEMICOLON) _(APOSTROPHE) _(RETURN) _(LSHIFT) _(Z)     \
                      _(X) _(C) _(V) _(B) _(N) _(M) _(COMMA) _(PERIOD)         \
                          _(SLASH) _(RSHIFT) _(LCTRL) _(LALT) _(SPACE)

#define AM_KEYS_EXT(_)                                                         \
  _(RALT)                                                                      \
  _(RCTRL)                                                                     \
  _(UP)                                                                        \
  _(DOWN)                                                                      \
  _(LEFT) _(RIGHT) _(INSERT) _(DELETE) _(HOME) _(END) _(PAGEUP) _(PAGEDOWN)

#define KEYMAP(key) keymap[SCANCODE_##key] = AM_KEY_##key;
#define KEYMAP_EXT(key) keymap_ext[SCANCODE_EXT_##key] = AM_KEY_##key;
