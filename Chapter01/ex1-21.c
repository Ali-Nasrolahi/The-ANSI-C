/**
 * @file ex1-21.c (entab)
 * @brief replaces the spaces with minimum tabs and spaces.
 * @details N indicates min spaces to become a tab.
 */

#include <stdio.h>

#define N 8

main()
{
    int t, b, c;
    t = b = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            t += (++b) / N;
            b %= N;
        }
        else
        {
            while (t)
                putchar('\t'), t--;
            if (c == '\t')
            {
                putchar(c);
                continue;
            }
            while (b)
                putchar(' '), b--;
            putchar(c);
        }
    }
}
