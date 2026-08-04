#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 8
#define COUNT 50

int main()
{
    int x;
    long r,array[RANGE];

    srandom((unsigned)time(NULL));      /* seed randomizer */

    for(x=0;x<RANGE;x++)                /* initialize the array */
        array[x] = 0L;

    for(x=0;x<RANGE;x++)                /* table heading */
        printf("%d\t",x+1);
    putchar('\n');

    for(x=0;x<COUNT;x++)                /* Generate COUNT random values */
    {
        r = random() % RANGE;           /* get random value */
        array[r]++;                     /* count that value */
    }

    for(x=0;x<RANGE;x++)                /* display results */
        printf("%ld\t",array[x]);
    putchar('\n');

    return(0);
}

