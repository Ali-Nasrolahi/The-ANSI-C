#include <stdio.h>
#include <string.h>

int strindex(const char *s, const char *t) {

  int i, last = -1, slen, tlen;
  slen = strlen(s), tlen = strlen(t);

  for (i = 0; i < slen; i++) {
    if (s[i] == t[0]) {
      int j;
      for (j = 0; i < slen && j < tlen; i++, j++) {
        if (s[i] != t[j])
          break;
      }
      if (j == tlen)
        last = i - tlen;
    }
  }
  return last;
}

main() {
  const char s[100] = "Sometext.", t[100] = "text.";
  printf("%d\n", strindex(s, t));
}