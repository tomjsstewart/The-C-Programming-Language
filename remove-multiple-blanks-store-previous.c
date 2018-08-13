#include <stdio.h>

main()
{
    int c, p;

    while ((c = getchar()) != EOF)
    {
        /* If c and p are not both blanks */
        if (!((c == ' ' && p == ' ') || (c == '\n' && p == '\n') || (c == '\t' && p == '\t') || (c == '\r' && p == '\r')))
        {
            putchar(p = c);
        }
    }
}
