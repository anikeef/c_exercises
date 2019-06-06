#include <stdio.h>

/* Copy the input to output */
int main() {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
  return 0;
}
