#include <stdio.h>

main()
{
    int c, rem;

    rem = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t' || c == '\r')
        {
            if (rem++ < 1)
            {
                putchar(c);
            }
        }
        else
        {
            putchar(c);
            rem = 0;
        }
    }
}
