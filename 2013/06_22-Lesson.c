#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 25                 /* size of the array */

void hilo(int *a, int *h, int *l);
void fill_array(int *a);

int main()
{
    int array[SIZE];
    int x,high,low;

    fill_array(array);          /* assign random values to the array */

    for(x=0;x<SIZE;x++)         /* display array */
        printf("%d\t",array[x]);
    putchar('\n');
                                /* Get high and low values */
    hilo(array,&high,&low);
    printf("The highest value is %d.\n",high);
    printf("The lowest value is %d.\n",low);

    return(0);
}

/* Fetch the highest and lowest values in the array */

void hilo(int *a, int *h, int *l)
{
    int x = 0;                  /* initalize x to zero */

    *h = *l = a[x];             /* Initialize high/low values */
    for(;x<SIZE;x++)            /* x is already initialized */
    {
        if(a[x] < *l)           /* new low value? */
            *l = a[x];          /*  set new low value */
        if(a[x] > *h)           /* new high value? */
            *h = a[x];          /*  set new high value */
    }
}

/* Put random values 1 through 100 into the array */

void fill_array(int *a)
{
    int x;

    srandom((unsigned)time(NULL));  /* Seed the randomizer */

    for(x=0;x<SIZE;x++)
    {
        a[x] = random() % 100;      /* Get random int value 0 to 99 */
        a[x]++;                     /* add one to equal 1 to 100 */
    }
}

/*
	Hi-Low
	Posted on June 22, 2013
	https://c-for-dummies.com/blog/?p=123
*/

