#include <stdio.h>

int bitcount(unsigned x);

int main() {
  printf("%d\n", bitcount(5)); // Should print 2
  return 0;
}

// Counts 1s in x

int bitcount(unsigned x) {
  if (!x) {
    return 0;
  }

  int i;
  for (i = 0; x &= (x - 1); i++) ;
  return ++i;
}
