/*
	LDLIBS=-lm make 08-Exercise
*/

#include<stdio.h>
#include<math.h>

int main()
{
    double radicand = 1.0; 
    double multiplicand = 128;
    double result = 0.0;

    printf("%f\n", radicand);

    while(multiplicand >= 2)
    {
        radicand = 1.0 + multiplicand * sqrt(radicand);
        printf("%f\n", radicand);
        multiplicand--;
    }

    result = sqrt(radicand);

    printf("%f\n", result);
    
    return 0;
}


