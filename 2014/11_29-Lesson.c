#include <stdio.h>

long factorial(long f);

int main()
{
    long a,b;

    printf("Enter an integer: ");
    scanf("%ld",&a);
    b = factorial(a);
    printf("%ld! = %ld\n",a,b);

    return(0);
}

long factorial(long f)
{
    if(f == 1)
        return(f);
    else
        return(f*factorial(f-1));
}

/*
	The Factorial Recursion
	Posted on November 29, 2014
	https://c-for-dummies.com/blog/?p=1080
*/


