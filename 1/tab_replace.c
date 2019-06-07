#include <stdio.h>

/* Print the input to the output and make \t, \b and \\ symbols explicit */

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    else if (c == '\b')
      printf("\\b");
    else if (c == '\\')
      printf("\\\\");
    else
      putchar(c);
  }
  return 0;
}
