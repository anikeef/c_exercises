#include <stdio.h>

/* Replace every tab in the input with 2 spaces */

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("  ");
    else
      putchar(c);
  }
  return 0;
}
