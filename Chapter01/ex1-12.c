#include <stdio.h>
#define IN 1
#define OUT 0
main() {

  int c, status;
  status = OUT;
  while ((c = getchar()) != EOF) {
    if (c == '\t' || c == '\n' || c == ' ') {
      if (status == IN) {
        c = '\n', status = OUT;
        putchar(c);
      }
      continue;
    }
    status = IN;
    putchar(c);
  }
}