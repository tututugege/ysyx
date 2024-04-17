#include <klib-macros.h>
#include <klib.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t cout = 0;
  while (*(s++) != '\0')
    cout++;

  return cout;
}

char *strcpy(char *dst, const char *src) {
  char *ret = dst;
  while (*src != '\0') {
    *(dst++) = *(src++);
  }
  *(dst) = '\0';

  return ret;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i;

  for (i = 0; i < n && src[i] != '\0'; i++)
    dst[i] = src[i];
  for (; i < n; i++)
    dst[i] = '\0';

  return dst;
}

char *strcat(char *dst, const char *src) {
  char *ret = dst;
  while (*dst != '\0')
    dst++;

  while (*src != '\0')
    *(dst++) = *(src++);

  return ret;
}

int strcmp(const char *s1, const char *s2) {
  int ret = 0;
  while (*s1 != '\0' && *s2 != '\0') {
    if (*s1 > *s2) {
      ret = 1;
      break;
    } else if (*s1 < *s2) {
      ret = -1;
      break;
    }
    s1++, s2++;
  }

  if (*s1 != '\0' && *s2 == '\0')
    ret = 1;
  else if (*s1 == '\0' && *s2 != '\0')
    ret = -1;

  return ret;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  int ret = 0;
  int count = 0;
  while (*s1 != '\0' && *s2 != '\0' && count < n) {
    if (*s1 > *s2) {
      ret = 1;
      break;
    } else if (*s1 < *s2) {
      ret = -1;
      break;
    }
    s1++, s2++, count++;
  }

  if (*s1 != '\0' && *s2 == '\0')
    ret = 1;
  else if (*s1 == '\0' && *s2 != '\0')
    ret = -1;

  return ret;
}

void *memset(void *s, int c, size_t n) {
  void *ret = s;
  while (n-- > 0) {
    *((unsigned char *)s++) = c;
  }

  return ret;
}

void *memmove(void *dst, const void *src, size_t n) {
  unsigned char buf[n];
  unsigned char *ret = dst;
  unsigned char *end = (unsigned char *)src + n;
  unsigned char *buf_start = buf;

  while (src != end)
    *(buf_start++) = *(unsigned char *)(src++);

  end = buf + n;
  buf_start = buf;
  while (buf != end)
    *(unsigned char *)(dst++) = *(buf_start++);

  return ret;
}

void *memcpy(void *out, const void *in, size_t n) {
  void *end = (void *)in + n;
  void *ret = out;
  while (in != end)
    *(unsigned char *)(out++) = *(unsigned char *)(in++);

  return ret;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  int ret = 0;
  while (n-- > 0) {
    if (*(unsigned char *)s1 > *(unsigned char *)s2) {
      ret = 1;
      break;
    } else if (*(unsigned char *)s1 < *(unsigned char *)s2) {
      ret = -1;
      break;
    }

    s1++, s2++;
  }

  return ret;
}

#endif
