#include <stdio.h>

/* Print fahrenheit to celcius table */

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper)
    {
        celsius = 5 * (fahr-32) / 9;        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
