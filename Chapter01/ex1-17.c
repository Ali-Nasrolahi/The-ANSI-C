#include <stdio.h>
#define MAXLINE 1000
#define MAXNUM 100 // Maximum line
#define LIMIT 80   // Charector limit

int Getline(char line[], int maxline);
void Copy(char to[], char from[]);

main()
{
    int len; // current line length
    int max; // maximum length seen so far
    int i, j;
    char line[MAXLINE];
    char longest[MAXLINE];
    char ll[MAXNUM][MAXLINE];

    max = 0;
    i = j = 0;
    while ((len = Getline(line, MAXLINE)) > 0)
        if (len > LIMIT)
        {
            Copy(ll[i], line);
            i++;
        }
    printf("Lines equal or more than %d char\n", LIMIT);
    for (; j <= i; j++)
    {
        printf("%s", ll[j]);
    }

    return 0;
}

int Getline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
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