#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    /* lower limit of temperature scale */
    /* upper limit */
    /* step size */

    fahr = lower;

    // New header
    printf("Fahrenheit Celsius\n");

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        // added \t for better formatting
        printf("%3.0f \t %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
