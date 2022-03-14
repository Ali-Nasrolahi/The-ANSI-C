/*
    When you  try to compile this piece of code
    yoy encounter these compile errors:

    error: missing terminating " character
    |     ");
    |     ^~~
-------------
    error: expected ‘;’ before ‘}’ token
     |     printf("Hello, World
     |            ^
     |            ;
     |     ");
     | }
      | ~
*/
#include <stdio.h>
main()
{
    printf("Hello, World
    ");

    // Correct one: printf("Hello, World");
}