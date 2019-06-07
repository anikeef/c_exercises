#include <stdio.h>
#define OUT 0
#define IN 1

/* Print each word of the input on new line */

int main() {
  int c, state;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN)
        putchar('\n');
      state = OUT;
    } else {
      putchar(c);
      state = IN;
    }
  }
  return 0;
}
