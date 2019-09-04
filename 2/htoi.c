#include <stdio.h>
#define EXAMPLE "0xff"

int htoi(char s[]);
int hctoi(char c);

int main() {
  printf("%d\n", htoi(EXAMPLE));
  return 0;
}

// Convert hex number sting to integer

int htoi(char s[]) {
  if (s[0] != '0' || (s[1] != 'x' && s[1] != 'X')) {
    return 0;
  }

  int n = 0;
  for (int i = 2; s[i] != '\0'; i++) {
    n = n * 16 + hctoi(s[i]);
  }
  return n;
}

// Convert hex char to an integer

int hctoi(char c) {
  if ('A' <= c && c <= 'F') {
    return c - 'A' + 10;
  } else if ('a' <= c && c <= 'f') {
    return c - 'a' + 10;
  }
  return c - '0';
}