#include <stdio.h>
#include <stdlib.h>

int wordlenght(char *s) {
  int i = 0;
  while (s[i] != 0) {
    i++
  }
  return i;
}

void reverse(char *s) {
  int length = wordlenght(s);
  for (int i = 0; i < length/2; i++) {
    char t = s[i];
    s[i] = s[length-1-i];
    s[length-1-i] = t;
  }
  return;
}

int main(int argc, char *argv[]) {
  printf("%s\n", argv[1]);
  reverse(argv[1]);
  printf("%s\n", argv[1]);
  return 0;
}
