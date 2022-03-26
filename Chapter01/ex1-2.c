/*
    I tried this code and some warning came up:

    warning: unknown escape sequence: '\c'

    ------------
    You get this warning if you use invalid characters.

*/
#include <stdio.h>
main()
{
    printf("Some text before \c And some text after");
}
