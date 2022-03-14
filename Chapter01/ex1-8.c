#include <stdio.h>

main()
{
    int ch, nl, tb, bl;
    nl = tb = bl = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            nl++;
        }
        else if (ch == '\t')
        {
            tb++;
        }
        else if (ch == ' ')
        {
            bl++;
        }
    }
    printf("New Lines: %d\nTabs: %d\nBlanks: %d\n", nl, tb, bl);
}