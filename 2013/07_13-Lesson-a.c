#include <stdio.h>

int main()
{
    int x=1;                   /* the setup */

    for(;;)
    {
        printf("%d\n",x++);    /* x++ is the counter */
        if(x>10)               /* the exit condition */
            break;
    }
    return(0);
}

/*
	For Ever
	Posted on July 13, 2013
	https://c-for-dummies.com/blog/?p=161
*/
