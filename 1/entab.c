#include <stdio.h>
/* In this example \t == 2 spaces, but the program can work with any number */
#define SPACES_PER_TAB 2

/* Replace each pair of spaces from the input with 1 tab */

int main() {
  int c, space_counter;
  space_counter = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++space_counter;
      /* Replace with tab if possible. If there is not enough spaces,
      they will be reserved via space_counter for printing with the next
      symbol (see else statement below) */
      if (space_counter == SPACES_PER_TAB) {
        putchar('\t');
        space_counter = 0;
      }
    } else {
      /* At first, print spaces that cannot be replaced with tab */
      if (space_counter != 0) {
        for ( ; space_counter > 0; --space_counter)
          putchar(' ');
      }
      putchar(c);
    }
  }
  return 0;
}
