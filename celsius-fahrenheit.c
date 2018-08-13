#include <stdio.h>

/* Print celcius to fahrenheit table */

main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celcius = lower;
    printf("Celcius\tFahr\n");
    while(celcius <= upper)
    {
        fahr = (9.0/5.0 * celcius) + 32.0;
        printf("%3.0f\t%6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
}
