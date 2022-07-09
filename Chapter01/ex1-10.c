#include <stdio.h>

main() {
  int c;
  while ((c = getchar()) != EOF) {

    if (c == '\t') {

      putchar('\\');
      c = 't';
    } else if (c == '\\') {
      putchar('\\');
      c = '\\';
    } else if (c == '\b') {
      putchar('\\');
      c = 'b';
    }

    putchar(c);
  }
}