#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main() {
  printf("%d\n", invert(5, 2, 2)); // Should print 3
  return 0;
}

unsigned invert(unsigned x, int p, int n) {
  unsigned mask = (~0 << (p + 1)) | ~(~0 << (p - n + 1));
  return (x & mask) | (~x & ~mask);
}