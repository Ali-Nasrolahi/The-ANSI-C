#include <stdio.h>

main()
{
    int c, freq[30], i;
    for (i = 0; i < 30; i++)
    {
        freq[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'Z')
        {
            freq[c - 'A']++;
        }
        if (c <= 'z' && c >= 'a')
        {
            freq[c - 'a']++;
        }
    }

    for (i = 0; i <= 'Z' - 'A'; i++)
    {
        if (!freq[i])
            continue;
        printf("Freq for letter %c\n", i + 'A');
        while (freq[i]--)
        {
            putchar('|');
        }
        putchar('\n');
    }
}