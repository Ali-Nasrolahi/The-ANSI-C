#include <stdio.h>

int Getline(void);

main() {
  int len; // current line length
  int max; // maximum length seen so far

  max = 0;
  while ((len = Getline()) > 0)
    if (len > max)
      max = len;

  printf("Maximum line's lenght: %d\n", max);
  return 0;
}

int Getline() {
  int c, i;
  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    ;
  return i;
}
