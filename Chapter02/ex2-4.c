#include <stdio.h>
#include <string.h>

const char *s1 = "abcdedf";
const char *s2 = "efgih";

main() {
  int i, j, k;
  k = 0;
  char res[100] = "";
  for (i = 0; i < strlen(s1); i++) {
    for (j = 0; j < strlen(s2); j++)
      if (s1[i] == s2[j])
        break;

    if (j == strlen(s2))
      res[k++] = s1[i];
  }
  res[k] = '\0';
  printf("Result %s\n", res);
}