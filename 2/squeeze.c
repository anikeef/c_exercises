#include <stdio.h>
#include <stdbool.h>

bool contains(char s[], char c);
void squeeze();

int main() {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, earth.";
  squeeze(s1, s2);
  printf("%s\n", s1);
  return 0;
}

/* Removes from s1 all chars presented in s2 */

void squeeze(char s1[], char s2[]) {
  int i, j;
  i = j = 0;
  while (s1[i] != '\0') {
    if (contains(s2, s1[i])) {
      i++;
    } else {
      s1[j] = s1[i];
      i++;
      j++;
    }
  }
  s1[j] = '\0';
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