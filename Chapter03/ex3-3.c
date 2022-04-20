#include <stdio.h>

void expandIt(char *s, const char from, const char to, int *index) {
  char i;
  for (i = from + 1; i <= to; ++i, ++(*index)) {
    s[*index] = i;
  }
  --(*index);
}

int isChar(const char ch) {
  if ((ch <= 'Z' && ch >= 'A') || (ch >= 'a' && ch < 'z'))
    return 1;
  return 0;
}

int isNum(const char ch) {
  if (ch >= '0' && ch < '9')
    return 1;
  return 0;
}

void expand(char *a, char *b) {
  *b = *a;
  int i = 0, j = 0;
  while (j++, (a[i] != '\0' && a[++i] != '\0')) {
    if (a[i] == '-') {
      if (isChar(a[i - 1]) && isChar(a[i + 1]) ||
          (isNum(a[i - 1]) && isNum(a[i + 1])))
        expandIt(b, a[i - 1], a[i + 1], &j), i++;
    }
    b[j] = a[i];
  }
  b[j] = '\0';
}

main() {
  char a[512] = "Helloa-f0-5-a-g", b[1024];
  printf("Before:\n%s\n", a);
  expand(a, b);
  printf("After:\n%s\n", b);
  return;
}