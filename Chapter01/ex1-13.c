#include <stdio.h>

main() {
  int len = 0, c;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      while (len--) {
        /* Vertically
        putchar('-');
        putchar('-');
        putchar('-');
        putchar('\n');
        */
        /* Horizontal */
        putchar('|');
      }
      putchar('\n');
    }
    len++;
  }
}