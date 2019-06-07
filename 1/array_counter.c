#include <stdio.h>

/* Count numbers, spaces and other symbols from the output,
then print the result to the output */

int main() {
  int c, space_counter, other_counter;
  int number_counters[10];
  /* Set all counters to 0 */
  space_counter = other_counter = 0;
  for (int i = 0; i <= 9; ++i)
    number_counters[i] = 0;
  /* Start reading the input */
  while ((c = getchar()) != EOF) {
    if (c <= '9' && c >= '0')
      ++number_counters[c - '0'];
    else if (c == ' ' || c == '\t' || c == '\n')
      ++space_counter;
    else
      ++other_counter;
  }
  /* Print the result */
  printf("Numbers:\n");
  for (int i = 0; i <= 9; ++i) {
    printf("\t%d: %d\n", i, number_counters[i]);
  }
  printf("Separators: %d\nOther: %d\n", space_counter, other_counter);
  return 0;
}
