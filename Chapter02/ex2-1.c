#include <float.h>
#include <limits.h>
#include <stdio.h>

void print_bytes_in_dec(const char *type, long long byte)
{

  printf("signed %s : from -%ld to %ld\n", type, (1 << (byte * 8 - 1)),
         (1 << (byte * 8 - 1)) - 1);
  printf("unsigned %s : from 0 to %ld\n", type, (1 << (byte * 8)));
}
main()
{
  print_bytes_in_dec("char", sizeof(char));
  print_bytes_in_dec("short", sizeof(short));

  print_bytes_in_dec("int", sizeof(int));

  // Unsigned version has some issues, so we use
  printf("unsigned %s : from %ld to %ld\n", "int", 0, UINT_MAX);

  // For long we use constants
  printf("signed %s : from %ld to %ld\n", "long", LONG_MIN, LONG_MAX);
  return;
}
