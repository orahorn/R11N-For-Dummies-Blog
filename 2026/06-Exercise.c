#include <math.h>
#include <stdio.h>

/* calculate the factorial */
long factorial(long f)
{
	if( f<=1 )
		return(f);
	else
		return(f * factorial(f-1));
}

/* calculate the cube */
long cube(long c)
{
	return( c*c*c );
}

int main()
{
	int x;
	double e = 0.0, d;

	for( x=1; x<66; x++ )
		e += (double)cube(x)/factorial(x);

	e/=5.0;
	printf("E  Calculated: %020.40lg\n",e);
	printf("E from math.h: %0.30lg\n",M_E);
	d=(M_E-e);
	printf("Delta: %020.40lf\n",d);

	return 0;
}
