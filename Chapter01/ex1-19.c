#include <stdio.h>
#define MAXCHAR 1000
main() {
  while (gline() > -1)
    ;
}

int gline() {

  int i, c, limit;
  char line[MAXCHAR], rev[MAXCHAR];
  limit = 100;
  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;

  while (i > -1)
    putchar(line[--i]);

  putchar('\n');

  if (c == '\n')
    return 0;

  return -1;
}