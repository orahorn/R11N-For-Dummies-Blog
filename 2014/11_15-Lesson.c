/*
https://c-for-dummies.com/blog/?p=1060
*/

#include <stdio.h>

int main()
{
    unsigned long long a,f,x;

    printf("Enter an integer: ");
    scanf("%ld",&f);
    a = f;
    for(x=f-1;x>0;x--)
        a *= x;
    printf("%llu! = %llu\n",f,a);

    return(0);
}

