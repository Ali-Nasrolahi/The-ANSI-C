#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char s[]) {
  int c, i, j;
  for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

void itoa(int n, char s[]) {
  int i, sign;
  if ((sign = n) < 0) /* record sign */
    n = -n;
  /* make n positive */
  i = 0;
  do {
    /* generate digits in reverse order */
    s[i++] = n % 10 + '0'; /* get next digit */
  } while ((n /= 10) > 0);
  /* delete it */
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

long Log(long num, short base) {
  int res = -1;
  while (num)
    num /= base, res++;

  return res;
}

int findMultiple(long n, long base) {
  int res = 0;
  while ((++res * base) <= n)
    ;
  return res - 1;
}

long long power(short pwr, short base) {
  int res = 1;
  while (pwr--)
    res *= base;
  return res;
}
void itob(int n, char *s, int b) {
  int i = 0;
  while (n > 0) {
    int lg = Log(n, b), m;
    long long pwr = power(lg, b);
    m = findMultiple(n, pwr);
    if (m >= 10) {
      printf("%c", 'A' + (m % 10));
    } else {
      printf("%ld", m);
    }
    n -= (m * pwr);
  }
  putchar('\n');
}

main() {
  char num[1000];
  itob(8987, num, 16);
}
