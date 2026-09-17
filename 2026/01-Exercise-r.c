#include <wchar.h>
#include <locale.h>
/*
14 - 7 - 7 — это равнобедренный треугольник

17 - 3 - 16 — это допустимый треугольник.

17 - это самая длинная сторона

2 - 10 - 22 - это недопустимый треугольник
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

	setlocale(LC_ALL, "");
	srand(time(NULL));
	a=r(); 
	b=r(); 
	c=r(); 
	wprintf(L"%d - %d - %d - это ", a, b, c);
	if (a>b+c || b>a+c || c>a+b) {
		wprintf(L"недопустимый треугольник\n");
	} else if((a==b) || (b==c) || (c==a)) {
		wprintf(L"равнобедренный треугольник\n");
	}
	else {
		wprintf(L"допустимый треугольник\n");
		if(a>b && a>c) {
			wprintf(L"%d - самая длинная сторона\n", a);
		} else if(b>a && b>c) {
			wprintf(L"%d - самая длинная сторона\n", b);
		} else
			wprintf(L"%d - самая длинная сторона\n", c);
	}

}

