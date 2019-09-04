#include <stdio.h>
#include <stdbool.h>
#define EXAMPLE1 "Name"
#define EXAMPLE2 "Hello, world"

int any(char s1[], char s2[]);
bool contains(char s[], char c);

int main() {
  printf("%d\n", any(EXAMPLE1, EXAMPLE2)); // should print 3
  return 0;
}

int any(char s1[], char s2[]) {
  for (int i = 0; s1[i] != '\0'; i++) {
    if (contains(s2, s1[i])) {
      return i;
    }
  }
  return -1;
}

/* Returns true if the string s[] contains char c */

bool contains(char s[], char c) {
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == c) {
      return true;
    }
  }
  return false;
}