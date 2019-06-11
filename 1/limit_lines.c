#include <stdio.h>
#define LINE_LIMIT 5

int get_line(char line[], int limit);

/* Limit each line of the input to not exceed given limit */

int main() {
  char last_line[LINE_LIMIT];
  int line_size, c;
  line_size = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      line_size = 0;
    } else if (line_size == LINE_LIMIT) {
      line_size = 1;
      putchar('\n');
    } else {
      ++line_size;
    }
    putchar(c);
  }
}
