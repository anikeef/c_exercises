#include <stdio.h>

/* Print the length of the input */
int main() {
  long counter;
  for (counter = 0; getchar() != EOF; ++counter) {};
  printf("%ld\n", counter);
  return 0;
}
