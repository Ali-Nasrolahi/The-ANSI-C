#include <stdio.h>

#define swap(t, x, y)                                                          \
  t tmp = x;                                                                   \
  x = y;                                                                       \
  y = tmp;

main() {
  int a, b;
  a = 5;
  b = 7;
  swap(int, a, b);
  printf("%d\n", a);
  printf("%d\n", b);
  return 0;
}