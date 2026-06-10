#include <stdio.h>

char *ordinal(int value);

int main()
{
	int count;

	for(count=1;count<=100;count++)
		printf("%d%s\n",count,ordinal(count));

	return(0);
}

char *ordinal(int value)
{
		/* First, handle the teens, all of
		   which end in 'th' */
	if( value > 10 && value < 20)
		return("th");
		/* Handle all other numbers, which
		   are pretty consistent for numbers
		   1 through 10. Use modulus on value
		   to keep it in that range */
	switch( value % 10 )
	{
		case 1:
			return("st");
			break;
		case 2:
			return("nd");
			break;
		case 3:
			return("rd");
			break;
		default:
			return("th");
	}
}


/*
https://c-for-dummies.com/blog/wp-content/uploads/2013/06/06exercise.c


*/

