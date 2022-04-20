#include <stdio.h>

void escape(char *s, char *t) {
  int i, j;
  for (i = j = 0; s[i] != '\0'; i++, j++) {
    switch (s[i]) {
    case '\n':
      t[j++] = '\\', t[j] = 'n';
      continue;
    case '\t':
      t[j++] = '\\', t[j] = 't';
      continue;
    }
    t[j] = s[i];
  }
}

main() {
  char s[100] = "Some\n \trandom text\n", t[200];
  printf("Before converstion text is: %s\n", s);

  escape(s, t);
  printf("After conversion text is %s\n", t);
  return;
}