#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool contains(char s[], char c);
void squeeze();

int main() {
  char s1[1024], s2[1024];

}

/* Removes from s1 all chars presented in s2 */

void squeeze(char s1[], char s2[]) {
  int i, j;
  i = j = 0;
  while (i != '\0') {
    if (contains(s2, s1[i])) {
      s1[j] = s1[i];
      j++;
    }
    i++;
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