#include <stdio.h>

#define COLUM 80
main()
{
    int c, i;
    i = 0;
    while ((c = getchar()) != EOF)
    {
        if (i >= COLUM)
        {
            if (c != ' ' && c != '\n' && c != '\t')
                putchar('\n'), i = 0;
        }
        putchar(c);
        i++;
    }
}