#include <stdio.h>
#define MAXLINE 1024

int get_line(char line[], int limit);

/* Print all the lines from the input that are longer than 80 symbols */

int main() {
  char line[MAXLINE];
  int line_size;

  while ((line_size = get_line(line, MAXLINE)) > 0) {
    if (line_size > 80)
      printf("%s", line);
  }
  return 0;
}

/* Copy the line from input to the line[] array. Return the size of that line */

int get_line(char line[], int limit) {
  int c, i;

  for (i = 0; (c = getchar()) != EOF && c != '\n' && i < limit - 1; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}
