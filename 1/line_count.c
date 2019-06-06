#include <stdio.h>

/* Print the number of lines in the input */
int main() {
  long counter = 0;
  int symbol;

  while ((symbol = getchar()) != EOF)
    if (symbol == '\n') counter += 1;

  printf("%ld \n", counter);
  return 0;
}
