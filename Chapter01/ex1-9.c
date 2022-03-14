#include <stdio.h>
main()
{

    int c;
    char lastc = '\0';
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && lastc == ' ')
            continue;
        lastc = c;
        putchar(c);
    }
}