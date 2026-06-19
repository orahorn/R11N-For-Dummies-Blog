#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	float t[3],s,area;

	/* gather input for the three side lengths */
	for( x=0; x<3; x++ )
	{
		printf("Input the length of side %c: ",'A'+x);
		scanf("%f",&t[x]);
	}

	/* obtain the semi-perimeter */
	s = ( t[0] + t[1] + t[2] ) / 2.0;
	printf("Semi-perimeter is %.2f\n",s);
	
	/* apply Heron's Formula */
	area = sqrt( s * (s-t[0]) * (s-t[1]) * (s-t[2]) );
	printf("The triangle's area is %.2f units\n",area);

	return 0;
}

/*

Heron’s Formula – Solution
Posted on October 8, 2025
https://c-for-dummies.com/blog/?p=7189

Heron’s Formula
Posted on October 1, 2025
https://c-for-dummies.com/blog/?p=7173


Code
https://github.com/dangookin/C-For-Dummies-Blog/blob/master/2025_10-Exercise.c

*/
