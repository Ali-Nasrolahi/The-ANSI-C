#include <stdio.h>

int fahrToCel(int);
void run(void);

main()
{
    run();
}

void run()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = fahrToCel(fahr);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

int fahrToCel(int fahr)
{
    return (5 * (fahr - 32) / 9);
}