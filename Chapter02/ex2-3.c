#include <stdio.h>
#include <string.h>

const char *NUM = "0x999";

long pwr(int base, int power) {

  int res = 1;
  while (power--)
    res *= base;
  return res;
}

int htoi(const char *hex) {

  long i, res, len;
  i = res = len = 0;
  len = strlen(hex);

  if (hex[1] == 'x' || hex[1] == 'X')
    i += 2, len -= 2;

  for (; i < strlen(hex); i++)
    res += pwr(16, --len) * (hex[i] - '0');

  return res;
}

main() { printf("Num = %d\n", htoi(NUM)); }