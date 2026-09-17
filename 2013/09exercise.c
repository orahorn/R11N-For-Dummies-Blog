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
	srand((unsigned)time(NULL));		/* seed randomizer */
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
	int r,x;

	r = a[0];				/* initialize comparison */
	for(x=0;x<s;x++)		/* plow through the array */
		if(a[x] >= r)		/* Compare each element to r */
			r = a[x];		/* Set new r if value is greater */

	return(r);
}

int array_min(int *a,int s)
{
	int r,x;

	r = a[0];
	for(x=0;x<s;x++)
		if(a[x] <= r)
			r = a[x];		/* Set new r if value is less than */

	return(r);
}

/*
	http://c-for-dummies.com/blog/wp-content/uploads/2013/09/09exercise.c
*/

