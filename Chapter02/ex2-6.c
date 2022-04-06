#include <stdio.h>

int x = 8;
int y = 3;
const int N = 2;
// Get Nth rightmost bits of x
int getNthRight(int x, int n) { return ~0 & 1 << n | x; }

// Set Nth rightmost bits of x to 1
int setNthRight(int x, int n) { return (1 << n) - 1 | x; }

// Unset Nth rightmost bits of x
int unsetNthRight(int x, int n) { return ~0 ^ ((1 << n) - 1) & x; }

main() {
  int bitmask = ~0;
  bitmask = unsetNthRight(bitmask, N);
  bitmask |= getNthRight(y, N);
  printf("bitmask = %lld\n", bitmask);
  x = setNthRight(x, N);
  printf("x = %d\n", x);
  x &= bitmask;
  printf("x = %d\n", x);
}