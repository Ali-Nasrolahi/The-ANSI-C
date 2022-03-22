#include <stdio.h>

#define SingleLineType 0
#define MulLineType 1
#define PrintIt 0
main()
{
    int c, type, prev, print;
    type = -1, print = PrintIt;
    while ((c = getchar()) != EOF)
    {
        if (type != MulLineType && type != SingleLineType)
        {
            if (c == '*' && prev == '/')
            {
                type = MulLineType;
                print = -1;
            }
            else if (c == '\\' && prev == '\\')
            {
                type = SingleLineType;
                print = -1;
            }
        }
        else if (type == MulLineType)
        {
            if (c == '/' && prev == '*')
                type = -1;
            print = -1;
        }
        else if (type == SingleLineType)
        {
            if (c == '\n')
                type = -1;
            print = -1;
        }
        prev = c;
        if (print == PrintIt)
            putchar(c);
    }
}