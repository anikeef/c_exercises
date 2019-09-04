#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main() {
  printf("%d", setbits(0, 2, 2, -1)); // Should print 6
  return 0;
}

// Replace n bits of x, starting from p position (counting from rightmost 0), with n right bits of y

unsigned setbits(unsigned x, int p, int n, unsigned y) {
  unsigned mask = (~0 << (p + 1)) | ~(~0 << (p - n + 1));
  unsigned inversed_mask = ~mask;
  return (x & mask) | ((y << (p - n + 1)) & ~mask);
}