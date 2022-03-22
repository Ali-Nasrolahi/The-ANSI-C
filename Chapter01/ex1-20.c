/**
 * @file ex1-20.c (detab)
 * @brief This program replaces each tab with N spaces. (read from stdin to stdout)
 */

#define N 4 // blank counts
#include <stdio.h>

main()
{
    int c, i;
    i = c = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            for (i = 0; i < N; i++)
                putchar(' ');
        }
        else
            putchar(c);
    }
}