#include <stdio.h>

main()
{
    long nc;

    for(nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
