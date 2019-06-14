#include <stdio.h>
#define LINE_LIMIT 80

int get_line(char line[], int limit, int shift);
int get_last_space(char str[], int size);

/* Limit each line of the input to not exceed given limit */

int main() {
  /* +1 here is needed for storing \n in case if there are no spaces in the string */
  char current_line[LINE_LIMIT + 1];
  int line_size, shift, space, i;
  shift = 0; /* Size of a remainder form previous line */
  while ((line_size = get_line(current_line, LINE_LIMIT, shift)) > 0) {
    space = get_last_space(current_line, line_size);
    current_line[space] = '\n';
    /* Print all before space */
    for (i = 0; i <= space; ++i)
      putchar(current_line[i]);
    /* Move the remainder to the beginning of the line */
    for (i = 0; i <= line_size - space - 2; ++i)
      current_line[i] = current_line[i + space + 1];
    shift = i;
  }
  return 0;
}

/* Get index of the last space in given string */

int get_last_space(char str[], int size) {
  int i;
  for (i = size - 1; i >= 0; --i) {
    if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
      return i;
  }
  /* If no spaces found, return last index + 1 */
  return size;
}

/* Copy the line from input to the line[] array, starting from shift index.
Return the size of that line */

int get_line(char line[], int limit, int shift) {
  int c, i;

  for (i = shift; i <= limit - 1; ++i) {
    if ((c = getchar()) != EOF) {
      line[i] = c;
      if (c == '\n') {
        ++i;
        break;
      }
    }
  }
  return i;
}
