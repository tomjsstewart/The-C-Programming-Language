#include <stdio.h>

main()
{
    double bc;
    int c;

    bc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t' || c == '\r')
            bc++;
    }
    printf("%.0f\n", bc);

}
