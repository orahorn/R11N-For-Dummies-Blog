#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int array_max(int *a,int s);
int array_min(int *a,int s);

int main()
{
	int array[SIZE];
	int x; setlocale(LC_ALL,"");

/* Заполним массив случайными числами */
	srand((unsigned)time(NULL));		/* Зададим генератор псевдослучайных чисел */
	for(x=0;x<SIZE;x++)
		array[x] = rand() % 100 + 1;

/* Покажем массив */
	fputws(L"Наш массив:\n",stdout);
	for(x=0;x<SIZE;x++)
		wprintf(L"%3d ",array[x]);
	putwchar(L'\n');

	wprintf(L"Наибольшее значение: %d\n",
		array_max(array,SIZE));
	wprintf(L"Наименьшее значение: %d\n",
		array_min(array,SIZE));

	return(0);
}

int array_max(int *a,int s)
{
	int r,x;

	r = a[0];				/* инициируем сравнение */
	for(x=0;x<s;x++)		/* Проходим по массиву */
		if(a[x] >= r)		/* Сравниваем каждый элемент с "r" */
			r = a[x];		/* Установим новое r если значение больше */

	return(r);
}

int array_min(int *a,int s)
{
	int r,x;

	r = a[0];
	for(x=0;x<s;x++)
		if(a[x] <= r)
			r = a[x];		/* Установим новое r, если значение меньше, чем */

	return(r);
}

/*
	http://c-for-dummies.com/blog/wp-content/uploads/2013/09/09exercise.c
*/

