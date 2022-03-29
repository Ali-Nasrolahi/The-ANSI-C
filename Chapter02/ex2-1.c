#include <float.h>
#include <limits.h>
#include <stdio.h>

void print_bytes_in_dec(const char *type, unsigned long long byte) {

  printf("%llu\n", byte);
  printf("signed %s : from -%llu to %llu\n", type, (1 << (byte * 8 - 1)),
         (1 << (byte * 8 - 1)) - 1);
  printf("unsigned %s : from 0 to %llu\n", type, (1 << (byte * 8)));
}
main() {
  print_bytes_in_dec("char", sizeof(char));
  print_bytes_in_dec("int", sizeof(int));
  print_bytes_in_dec("long long", sizeof(long long));
  return;
}
