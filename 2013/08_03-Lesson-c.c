#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 8
#define COUNT 50

int main()
{
    int x,y;
    long r,array[RANGE];

    srandom((unsigned)time(NULL));      /* seed randomizer */

    for(x=0;x<RANGE;x++)                /* initialize the array */
        array[x] = 0L;

/* dipslay the array's contents each time a random value is generated */

    for(x=0;x<COUNT;x++)                /* Generate COUNT random values */
    {
        r = random() % RANGE;           /* get random value */
        array[r]++;                     /* count that value */
        for(y=0;y<RANGE;y++)            /* display array */
            printf("%ld\t",array[y]);
        putchar('\n');
    }

    return(0);
}
