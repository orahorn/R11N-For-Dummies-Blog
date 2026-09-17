#include <stdio.h>

int main()
{
    unsigned char a;
    signed char b;
    int x;

    a = b = 0;
    for(x=0;x<400;x++)
    {
        printf("%3d\t%3u\n",a,b);
        a++; b++;
    }
    return(0);
}
/*
	https://c-for-dummies.com/blog/?p=282
*/
