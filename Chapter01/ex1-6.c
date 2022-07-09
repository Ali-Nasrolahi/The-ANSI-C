#include <stdio.h>

main() {
  if (getchar() == EOF) {
    printf("Found EOF");
  } else {
    printf("Not EOF");
  }
}