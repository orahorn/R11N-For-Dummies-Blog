#include <stdio.h>

int recurse(int v)
{
    printf("v = %d\n",v);
    if( v == 5 )
        return(v);
    recurse(v+1);
}

int main()
{
    int a = 0;

    recurse(a);

    return(0);
}

/*
	An Example of Recursion
	Posted on November 22, 2014
	https://c-for-dummies.com/blog/?p=1068
*/

