#include <stdio.h>

#define COUNT 30

//
long factorial(long f)
{
    if(f <= 1)
        return(f);
    else
        return(f*factorial(f-1));
}

//
void main(void) {
	long n=1;
	double sum=0.0;

	for(n=1; n<=COUNT; n++)
		sum += ((double)(n*n*n))/((double)factorial(n));
	printf("%lf\n", sum/5.0);
}
