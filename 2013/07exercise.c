#include <stdio.h>

void showgrid(int *array);
int tictactoe(int *array);

int main()
{
	int sample1[] = { 0, 0, 1, 0, 1, 0, 1, 0, 0 };
	int result;

	showgrid(sample1);
	result = tictactoe(sample1);
	if(result)
		puts("That's a winner!");
	else
		puts("No winnger.");

	return(0);
}

void showgrid(int *array)
{
	int x;

	puts("TIC-TAC-TOE:");
	for(x=0;x<9;x+=3)
	{
		printf("%d %d %d\n",
			array[x],
			array[x+1],
			array[x+2]);
	}
}

/* array layout in the tic-tac-toe square:
   0 1 2
   3 4 5
   6 7 8
*/

int tictactoe(int *array)
{
	if(array[0] )					/* upper left corner */
	{
		if(array[3] && array[6])	/* first column down */
			return(1);
		if(array[1] && array[2])	/* first row accross */
			return(1);
		if(array[4] && array[8])	/* UL to LR diagonal */
			return(1);
	}
									/* second column down */
	if(array[1] && array[4] && array [7])
		return(1);

	if(array[2])					/* upper right corner */
	{
		if(array[4] && array[6])	/* UR to LL diagonal */
			return(1);
		if(array[5] && array[8])	/* third column down */
			return(1);
	}
									/* second row across */
	if(array[3] && array[4] && array[5])
		return(1);
									/* third row across */
	if(array[6] && array[7] && array[8])
		return(1);

	return(0);
}

/*
	We Have a Winnah!
	Posted on July 1, 2013
	https://c-for-dummies.com/blog/?p=154
	https://c-for-dummies.com/blog/wp-content/uploads/2013/07/07exercise.c
*/

