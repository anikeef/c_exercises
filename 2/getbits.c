#include <stdio.h>

int getbits(unsigned x, int p, int n);

int main() {
  printf("%d\n", getbits(-1, 2, 2)); // Should print 3
}

int getbits(unsigned x, int p, int n) {
  return x >> (p + 1 - n) & ~(~0 << n);
}