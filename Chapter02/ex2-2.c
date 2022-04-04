#include <stdio.h>

#define LIMIT 0x800
main()
{
  int i = 0, lim = LIMIT, c;
  char s[LIMIT];
  for ( i = 0; i < lim - 1; i++)
  {
    if ((c=getchar()) != '\n')
    {
      if (c != EOF)
      {
        s[i] = c;
        continue;
      }
    }
    break; 
  }
  
}