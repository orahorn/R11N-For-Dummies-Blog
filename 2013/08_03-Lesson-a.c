#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 8
#define COUNT 50

int main()
{
    int x;
    long r;

    srandom((unsigned)time(NULL));      /* seed randomizer */

    for(x=0;x<COUNT;x++)
    {
        r = random() % RANGE + 1;
        printf("%ld ",r);
    }
    putchar('\n');

    return(0);
}
