#include <stdio.h>

/* Print the number of spaces, tabs and newlines from the input */

int main() {
  int symbol;
  int space_counter = 0;
  int tab_counter = 0;
  int newline_counter = 0;

  while ((symbol = getchar()) != EOF) {
    if (symbol == ' ')
      space_counter += 1;
    else if (symbol == '\t')
      tab_counter += 1;
    else if (symbol == '\n')
      newline_counter += 1;
  }

  printf("%d spaces\n%d tabs\n%d lines\n", space_counter, tab_counter, newline_counter);

  return 0;
}
