#include <stdio.h>

/* Copy the input to the output while replacing several consequent
whitespaces with one */

int main() {
  int space_counter = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (space_counter == 0)
        putchar(c);
      ++space_counter;
    } else {
      putchar(c);
      space_counter = 0;
    }
  }
  return 0;
}
