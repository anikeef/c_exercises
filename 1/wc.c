#include <stdio.h>
#define IN 1
#define OUT 0

/* Print the number of lines, words and symbols of the input */

int main() {
  int c, state, lines_count, words_count, sym_count;
  lines_count = words_count = sym_count = 0;
  state = OUT;

  while ((c = getchar()) != EOF) {
    ++sym_count;
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == IN)
        ++words_count;
      if (c == '\n')
        ++lines_count;
      state = OUT;
    } else {
      state = IN;
    }
  }
  printf("%d lines\n%d words\n%d symbols\n", lines_count, words_count, sym_count);
  return 0;
}
