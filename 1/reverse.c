#include <stdio.h>
#define MAXLINE 1024

void reverse(char str[], int size);
int get_line(char line[], int limit);

/* Print lines from the input in reversed order */

int main() {
  char line[MAXLINE];
  int size;

  while ((size = get_line(line, MAXLINE)) > 0) {
    reverse(line, size);
    printf("%s\n", line);
  }
  return 0;
}

/* Reverse a given char array */

void reverse(char str[], int size) {
  char c; /* This variable holds one char per swap */
  int last_i = (str[size - 1] == '\n') ? size - 2 : size - 1;

  for (int i = 0; i <= last_i/2; ++i) {
    c = str[i];
    str[i] = str[last_i - i];
    str[last_i - i] = c;
  }
}

/* Copy line from input to the line[] array. Return the size of that line */

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
