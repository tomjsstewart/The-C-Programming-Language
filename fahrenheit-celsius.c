#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* Print fahrenheit to celcius table */

main()
{
    int fahr;

    printf("Fahr\tCelsius\n");
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
    }
}
