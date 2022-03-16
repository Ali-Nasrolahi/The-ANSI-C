#include <stdio.h>
#define MAXLINE 1000

int Getline(char line[], int maxline);
void Copy(char to[], char from[]);

main()
{
    int len;
    int max, i, j;
    char line[MAXLINE];
    char lines[MAXLINE][MAXLINE];

    max = i = j = 0;
    while ((len = Getline(line, MAXLINE)) > 0)
    {
        Copy(lines[i], line);
        i++;
    }

    while (j <= i)
    {
        if (lines[j][0] != '\n')
            printf("%s\n", lines[j]);

        j++;
    }

    return 0;
}

int Getline(char s[], int lim)
{
    int c, i, trailing;
    trailing = 1;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n';)
    {
        if ((c == ' ' || c == '\t') && trailing)
            continue;
        trailing = 0;
        s[i] = c;
        i++;
    }
    if (c == '\n')
    {
        s[i] = c;
        i++;
    }

    s[i] = '\0';
    return i;
}

void Copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}