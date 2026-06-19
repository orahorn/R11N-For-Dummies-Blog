#include <stdio.h>

int main()
{
	int coins_input,quarters,dimes,nickels,pennies;

	quarters = dimes = nickels = pennies = 0;
	coins_input = 131;

	printf("Making change for %d cents:\n",coins_input);
	while(coins_input)
	{
		if(coins_input > 25)
		{
			quarters++;
			coins_input -= 25;
		}
		else if (coins_input > 10)
		{
			dimes++;
			coins_input -= 10;
		}
		else if (coins_input > 5)
		{
			nickels++;
			coins_input -= 5;
		}
		else
		{
			pennies++;
			coins_input--;
		}
	}
	printf("%2d quarters\n%2d dimes\n%2d nickels\n%2d pennies\n",
			quarters,
			dimes,
			nickels,
			pennies);

	return(0);
}

/*

Making Change – Solution
Posted on December 8, 2014
https://c-for-dummies.com/blog/?p=1100

Making Change
Posted on December 1, 2014	
https://c-for-dummies.com/blog/?p=1083

https://c-for-dummies.com/blog/wp-content/uploads/2014/11/12exercise.c


*/

