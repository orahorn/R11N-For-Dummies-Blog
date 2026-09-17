#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 4
#define COL 3

int main()
{
	int values[ROW][COL];
	int x,y;
	int *p, (*r)[COL];


	/* seed the randomizer */
	srand( (unsigned)time(NULL) );
	
	/* populate and output the grid */
	for( y=0; y<ROW; y++ )
	{
		for( x=0; x<COL; x++ )
		{
			values[y][x] = rand() % 100;
			printf("[%d][%d] = %d\t",y,x,values[y][x]);
		}
		putchar('\n');
	}

	/* single point to output the values. */
	for( x=0,p=*values; x<ROW*COL; x++, p++ )
		printf("%2d ", *p);
	putchar('\n');
	
	/* single pointer, but output the values in a grid format */
	for( y=0, p=*values; y<ROW; y++ )
	{
		for( x=0; x<COL; x++, p++ )
			printf("[%d][%d] = %2d\t", y, x, *p );
		putchar('\n');
	}
	putchar('\n');

	/* two pointers to work through each dimension of the array */
	for( y=0, r=values; y<ROW; y++,r++ )
	{
		for( x=0, p=*r; x<COL; x++, p++ )
			printf("[%d][%d] = %2d\t",y,x, *p );
	/*
	*/
		putchar('\n');
	}
	return 0;
}
