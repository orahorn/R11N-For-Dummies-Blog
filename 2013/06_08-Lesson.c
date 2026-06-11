/*
https://c-for-dummies.com/blog/?p=102
*/

#include <stdio.h>
#include <stdlib.h>

int roundit(int value, int limit)
{
    if( limit < 0)           /* round down */
    {
        limit = abs(limit);     /* make limit positive */
        return(value - (value%limit));
    }
    else                        /* round up */
    {
        return(value + limit - (value%limit));
    }
}

int main()
{
    int x;

    puts("+5\t+3\tval\t-3\t-5");
    for(x=0;x<20;x++)
    {
        printf("%2d\t%2d\t%2d\t%2d\t%2d\n",
            roundit(x,5),
            roundit(x,3),
            x,
            roundit(x,-3),
            roundit(x,-5)
            );
    }
    return(EXIT_SUCCESS);
}

