/*
14 - 7 - 7 is an isosceles triangle

17 - 3 - 16 is a valid triangle
17 is the longest side

2 - 10 - 22 is not a valid triangle
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 2
#define MAX 25
#define TIMES 3

int r() {
	return rand() % (MAX-MIN) + MIN + 1;
}

void main(void) {
	int a,b,c;

	srand(time(NULL));
	a=r(); 
	b=r(); 
	c=r(); 
	printf("%d - %d - %d is ", a, b, c);
	if (a>b+c || b>a+c || c>a+b) {
		printf("not a valid triangle\n");
	} else if((a==b) || (b==c) || (c==a)) {
		printf("an isosceles triangle\n");
	}
	else {
		printf("a valid triangle\n");
		if(a>b && a>c) {
			printf("%d is the longest side\n", a);
		} else if(b>a && b>c) {
			printf("%d is the longest side\n", b);
		} else
			printf("%d is the longest side\n", c);
	}

}

