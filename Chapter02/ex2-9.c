#include <stdio.h>

/*
    Why x &= (x-1) removes rightmost set bit?
    Lets just think about what rightmost set bit means?
    When we say set bit means it equals to 1 (that bit is set to 1) and
    when we say rightmost set bit, it means first set bit from right (pretty
    intutative :D, right?). So let's put this altogether : when we say rightmost
    set bit. It is this bit right here: [something we don't care](1)00000---0.

    now why x &= (x-1) unset last bit ? look at demonstration.
    x &= (x - 1) turns to :
    [something we don't care](1)00000---0  &=  ([something we don't
    care](0)111111---1) which gives us: [something we don't care](0)00000---0.


    That's why.

*/
main() {

  long NUM = 8969988;
  int bitcount = 0;
  while (NUM) {
    NUM &= (NUM - 1);
    bitcount++;
  }
  printf("Result: %ld\n", bitcount);
  return 0;
}
