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
    srand((unsigned)time(NULL));        /* установим рандомайзер */
    for(x=0;x<SIZE;x++)
        array[x] = rand() % 100 + 1;

/* Display the array */
/* Отобразим массив*/
    fputws(L"Массив:\n",stdout);
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
	int i,j;

	for(i=0,j=0;i<s;i++)
		if(a[i]>a[j])
			j=i;
	return a[j];
}

int array_min(int *a,int s)
{
	int i,j;

	for(i=0,j=0;i<s;i++)
		if(a[i]<a[j])
			j=i;
	return a[j];
}

/*
	https://c-for-dummies.com/blog/?p=252
	Мин и Макс
	Размещено 1 сентября 2013 года
*/

