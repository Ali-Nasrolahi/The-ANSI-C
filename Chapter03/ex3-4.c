/*
    Losing one bit for determinting sign in two's complement
    is the reseon for not being able to use "n = -n" for changin sign;
    therefore we abs() to make each digit positive.

    Let's say your have 4 bit to store number in two's complement method.

    0000
    |
    This bit is for sign action, so range will be
    -16 to 15, now let's say n is -16 and you use "n = -n" to make it postive.

    -n equals to 16 but signed range specify 15 at most.

    n = -n not works with larges negative numbers in two's complement method.
*/
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 500

inline int abs(int n) { return n < 0 ? -n : n; }

void reverse(char *s) {
  int i, size = strlen(s);
  for (i = 0; i < size - i - 1; i++) {
    /* swap */
    s[i] ^= s[size - i - 1];
    s[size - i - 1] ^= s[i];
    s[i] ^= s[size - i - 1];
  }
}

/* itoa: convert n to characters in s */
void itoa(int n, char s[]) {

  int i, sign;
  sign = n;
  do {
    s[i++] = abs(n) % 10 + '0';
  } while ((n /= 10) > 0);

  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

main() {
  char str[MAX_SIZE];
  itoa(599958, str);
  printf("String is %s\n", str);
}