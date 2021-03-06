#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
  int c, i, j;
  for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}

void itoa(int n, char s[], short pad) {
  int i, sign;
  if ((sign = n) < 0) /* record sign */
    n = -n;
  /* make n positive */
  i = 0;
  do {
    /* generate digits in reverse order */
    s[i++] = n % 10 + '0'; /* get next digit */
  } while ((n /= 10) > 0);

  while (i < pad)
    s[i++] = '0';
  /* delete it */
  if (sign < 0)
    s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}
main() {
  char s[1000];
  itoa(5, s, 2);
  printf("%s\n", s);
}