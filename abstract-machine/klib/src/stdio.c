#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int klib_itoa(long long value, int radix, int uppercase, int sign, int zero_pad,
              int len, char *out) {

  char buf[32];
  int idx = 0;
  int negetive = 0;
  char *start_cur = out;

  if (radix > 16)
    return 0;

  if (value < 0 && sign == 1) {
    value = -value;
    negetive = 1;
  }

  do {
    int digit = value % radix;
    value /= radix;
    buf[idx++] = (digit < 10)  ? '0' + digit
                 : (uppercase) ? 'A' + digit - 10
                               : 'a' + digit - 10;
  } while (value > 0);

  if (negetive && (len == 0 || idx >= len))
    buf[idx++] = '-';

  char *buf_ptr = buf + idx - 1;
  int str_len = idx;

  while (idx < len) {
    if (negetive && idx == len - 1) {
      *(out++) = '-';
    } else {
      *(out++) = (zero_pad) ? '0' : ' ';
    }
    idx++;
  }

  while (str_len-- > 0) {
    *(out++) = *(buf_ptr--);
  }

  return out - start_cur;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  char ch;
  char *start_ptr = out;
  char *str;

  while (*fmt) {
    ch = *(fmt++);
    if (ch != '%') {
      *(out++) = ch;
    } else {
      int zero_pad = 0;
      int len = 0;
      ch = *(fmt++);
      if (ch == '\0') {
        zero_pad = 1;
        ch = *(fmt++);
      }
      if (ch >= '0' && ch <= '9') {
        do {
          len += len * 10 + ch - '0';
          ch = *(fmt++);
        } while (ch >= '0' && ch <= '9');
      }

      switch (ch) {
      case 0:
        goto end;
      case 'c':
        *(out++) = va_arg(ap, int);
        break;
      case 's':
        str = va_arg(ap, char *);
        while (*str)
          *(out++) = *(str++);
        break;
      case 'd':
        out += klib_itoa(va_arg(ap, int), 10, 0, 1, zero_pad, len, out);
        break;
      case 'u':
        out +=
            klib_itoa(va_arg(ap, unsigned int), 10, 0, 0, zero_pad, len, out);
        break;
      case 'x':
      case 'X':
        out += klib_itoa(va_arg(ap, unsigned int), 16, ch == 'X', 0, zero_pad,
                         len, out);
        break;
      default:
        *(out++) = ch;
        break;
      }
    }
  }

end:
  *(out++) = '\0';
  return out - start_ptr;
}

int sprintf(char *out, const char *fmt, ...) {
  int ret = 0;
  va_list va;

  va_start(va, fmt);
  ret = vsprintf(out, fmt, va);
  va_end(va);
  return ret;
}

int printf(const char *fmt, ...) {
  char buf[512];
  int ret = 0;
  va_list va;

  va_start(va, fmt);
  ret = vsnprintf(buf, 512, fmt, va);
  assert(ret < 512);
  for (int i = 0; i < ret; i++) {
    putch(buf[i]);
  }

  va_end(va);
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  int ret = 0;
  va_list va;

  va_start(va, fmt);
  ret = vsnprintf(out, n, fmt, va);
  va_end(va);
  return ret;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  if (n == 0)
    return 0;

  char ch;
  char *str;
  int ret = 1; // terminal 0
  char buf[32];
  int num_len;

  while (*fmt && ret < n) {
    ch = *(fmt++);
    if (ch != '%') {
      *(out++) = ch;
      ret++;
    } else {
      int zero_pad = 0;
      int len = 0;
      ch = *(fmt++);
      if (ch == '\0') {
        zero_pad = 1;
        ch = *(fmt++);
      }
      if (ch >= '0' && ch <= '9') {
        do {
          len += len * 10 + ch - '0';
          ch = *(fmt++);
        } while (ch >= '0' && ch <= '9');
      }

      switch (ch) {
      case 0:
        goto end;
      case 'c':
        *(out++) = va_arg(ap, int);
        ret++;
        break;
      case 's':
        str = va_arg(ap, char *);
        if ((num_len = strlen(str)) + ret < n) {
          ret += num_len;
          while (*str)
            *(out++) = *(str++);
        } else {
          goto end;
        }
        break;
      case 'd':
        num_len = klib_itoa(va_arg(ap, int), 10, 0, 1, zero_pad, len, buf);
        if (ret + num_len < n) {
          for (int i = 0; i < num_len; i++) {
            *(out++) = buf[i];
          }
          ret += num_len;
        } else {
          goto end;
        }
        break;
      case 'u':
        num_len =
            klib_itoa(va_arg(ap, unsigned int), 10, 0, 0, zero_pad, len, buf);
        if (ret + num_len < n) {
          for (int i = 0; i < num_len; i++) {
            *(out++) = buf[i];
          }
          ret += num_len;
        } else {
          goto end;
        }
        break;
      case 'x':
      case 'X':
        num_len = klib_itoa(va_arg(ap, unsigned int), 16, ch == 'X', 0,
                            zero_pad, len, buf);

        if (ret + num_len < n) {
          for (int i = 0; i < num_len; i++) {
            *(out++) = buf[i];
          }
          ret += num_len;
        } else {
          goto end;
        }
        break;
      default:
        *(out++) = ch;
        break;
      }
    }
  }

end:
  *(out++) = '\0';
  return ret;
}

#endif
