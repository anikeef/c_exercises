#include <stdio.h>
#define IN 1
#define OUT 0

/* Print histograms of the size of each word from the input */

int main() {
  int c, state;
  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == IN)
        putchar('\n');
      state = OUT;
    } else {
      printf("–");
      state = IN;
    }
  }
  return 0;
}
