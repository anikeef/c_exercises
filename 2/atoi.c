#include <stdio.h>
#define EXAMPLE "12345"

int atoi(char s[]);
int ctoi(char c);

/* Demonstrate the atoi function with the EXAMPLE string */

int main() {
  printf("%d\n", atoi(EXAMPLE));
  return 0;
}

/* Convert a string to an integer */

int atoi(char s[]) {
  int i, n;
  n = 0;
  for (i = 0; s[i] <= '9' && s[i] >= '0'; ++i)
    n = 10 * n + ctoi(s[i]);
  return n;
}

/* Convert a char to integer */

int ctoi(char c) {
  return c - '0';
}
