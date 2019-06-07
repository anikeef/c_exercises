#include <stdio.h>

/* Print the histograms of frequencies of symbols presented in the input */

int main() {
  int c, n;
  int counters[256];
  /* Set all counters to 0 */
  for (int i = 0; i <= 255; ++i)
    counters[i] = 0;
  /* Start reading the input */
  while ((c = getchar()) != EOF) {
    ++counters[c];
  }
  /* Print the result using histograms */
  for (int i = 0; i <= 255; ++i) {
    if ((n = counters[i]) > 0 && i != '\n') {
      printf("\"%c\" ", i);
      for (int ii = 1; ii <= n; ++ii)
        printf("–");
      printf("\n");
    }
  }
}
