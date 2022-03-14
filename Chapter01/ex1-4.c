#include <stdio.h>

main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 200;
    step = 20;

    celsius = lower;

    printf("Celsius Fahrenheit\n");
    while (celsius <= upper)
    {
        fahr = celsius * (9.0 / 5.0) + 32;
        printf("%6.0f \t %3.1f\n", celsius, fahr);
        celsius += step;
    }
}