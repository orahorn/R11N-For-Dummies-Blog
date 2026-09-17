#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int array_max(int *a,int s);
int array_min(int *a,int s);

int main()
{
    int array[SIZE];
    int x;

/* Fill the array with random values */
    srand((unsigned)time(NULL));        /* seed randomizer */
    for(x=0;x<SIZE;x++)
        array[x] = rand() % 100 + 1;

/* Display the array */
    puts("The Array:");
    for(x=0;x<SIZE;x++)
        printf("%3d ",array[x]);
    putchar('\n');

    printf("Highest value: %d\n",
        array_max(array,SIZE));
    printf("Lowest value: %d\n",
        array_min(array,SIZE));

    return(0);
}

int array_max(int *a,int s)
{
	int i,j;

	for(i=0,j=0;i<s;i++)
		if(a[i]>a[j])
			j=i;
	return a[j];
}

int array_min(int *a,int s)
{
	int i,j;

	for(i=0,j=0;i<s;i++)
		if(a[i]<a[j])
			j=i;
	return a[j];
}

/*
	https://c-for-dummies.com/blog/?p=252
	Min and Max
	Posted on September 1, 2013
*/

