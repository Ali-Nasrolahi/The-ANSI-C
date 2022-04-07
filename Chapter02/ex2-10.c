#include <stdio.h>
#include <string.h>

char STRING[100] = "Some Dummy Text, which I DO NOT GIVES ... about it";

void lower(char *str) {
  int i = 0;
  while (i < strlen(str)) {
    str[i] += ((str[i] >= 'A') && (str[i] <= 'Z') ? 32 : 0);
    i++;
  }
}

main() {
  printf("Before:\n%s\n", STRING);
  lower(STRING);
  printf("After:\n%s\n", STRING);

  return 0;
}
