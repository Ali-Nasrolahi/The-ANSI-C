#include <stdio.h>

/*
  replace N-P bit of A by N-P of Z
 */
#define A 17 // 10001
#define B 5  // 00101
#define N 3  // ---101 of B
#define P 1  // ---1 of B
// Get Nth rightmost bits of x
int getNthRight(int x, int n) { return ~0 & 1 << n | x; }

// Set Nth rightmost bits of x to 1
int setNthRight(int x, int n) { return (1 << n) - 1 | x; }

// Unset Nth rightmost bits of x
int unsetNthRight(int x, int n) { return (~0 ^ ((1 << n) - 1)) & x; }

// Set N bit of x to 11111{x's}
int setNthBitofX(int x, int n) {
  return getNthRight(x, n) | unsetNthRight(~0, n);
}

int setNofYtoX(int x, int y, int n) {
  return setNthRight(x, n) & setNthBitofX(y, n);
}

int setBitmask(int x, int y, int n, int p) {
  int X = x;
  x = setNofYtoX(x, y, n);
  return setNofYtoX(x, X, p);
}
main() { printf("Result: %ld\n", setBitmask(A, B, N, P)); }
