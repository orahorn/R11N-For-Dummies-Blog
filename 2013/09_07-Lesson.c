#include <stdio.h>

int main()
{
    unsigned char a;
    signed char b;
    int x;

    a = b = 0;
    for(x=0;x<400;x++)
    {
        printf("%3u\t%3d\n",a,b);
        a++; b++;
    }
    return(0);
}

/*
	https://c-for-dummies.com/blog/?p=209
	The C Variable Myth
	Posted on September 7, 2013
*/

