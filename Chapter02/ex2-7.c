#include <stdio.h>

/*
  NOT COMPLETE YET
*/
#define N 5
#define P 3
#define X 17

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p + 1 - n)) & ~(~0 << n);
}

// Unset Nth rightmost bits of x
int unsetNthRight(int x, int n) { return (~0 ^ ((1 << n) - 1)) & x; }

// Inverts N rightmost bit of X
int invert(int x, int n) { return x | ~getbits(x, n, n); }
main() { printf("Result: %ld\n", invert(7, 2)); }