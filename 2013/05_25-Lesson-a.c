/*
https://c-for-dummies.com/blog/?p=69


*/


#include <stdio.h>
#include <time.h>

int main()
{
    clock_t tix;

    tix = clock();
    printf("And the clock() function returned %ld.\n",tix);
    tix = clock();
    printf("And the clock() function returned %ld.\n",tix);

    return(0);
}

