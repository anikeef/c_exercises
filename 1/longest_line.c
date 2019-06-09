#include <stdio.h>
#define MAXLINE 1024 /* Maximum size of the line */

int get_line(char line[], int limit);
void copy(char from[], char to[]);

/* Print the longest line from the input */

int main() {
  char current_line[MAXLINE];
  char max_line[MAXLINE];
  int current_line_size = 0;
  int max_line_size = 0;

  while ((current_line_size = get_line(current_line, MAXLINE)) > 0) {
    if (current_line_size > max_line_size) {
      max_line_size = current_line_size;
      copy(current_line, max_line);
    }
  }
  printf("%s", max_line);
  return 0;
}

/* Copy line from input to the line[] array. Return the size of that line */

int get_line(char line[], int limit) {
  int c;
  int i = 0;

  for (i = 0; (c = getchar()) != EOF && c != '\n' && i < limit - 1; ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

/* Copy the from[] array to to[] array */

void copy(char from[], char to[]) {
  for (int i = 0; (to[i] = from[i]) != '\0'; ++i) ;
}
