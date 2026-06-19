#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 25                 /* размер массива */

void hilo(int *a, int *h, int *l);
void fill_array(int *a);

int main()
{
    int array[SIZE];
    int x,high,low;

	setlocale(LC_ALL,"");

    fill_array(array);          /* назначить массиву случайные числа */

    for(x=0;x<SIZE;x++)         /* отобразить массив */
        wprintf(L"%d\t",array[x]);
    putwchar(L'\n');
                                /* Получить самое большое и маленькое значения */
    hilo(array,&high,&low);
    wprintf(L"Наивысшее значение - это %d.\n",high);
    wprintf(L"Низшее значение - это %d.\n",low);

    return(0);
}

/* Извлечь высшее и низшее значения в массиве */

void hilo(int *a, int *h, int *l)
{
	setlocale(LC_ALL,"");
    int x = 0;                  /* установить x в нуль */

    *h = *l = a[x];             /* Установить наибольшее/наименьшее значения */
    for(;x<SIZE;x++)            /* x is already initialized */
    {
        if(a[x] < *l)           /* новое низшее значение? */
            *l = a[x];          /*  установить новое низшее значение */
        if(a[x] > *h)           /* новое высшее значение? */
            *h = a[x];          /*  установить новое высшее значение */
    }
}

/* Поместить случайные значения от 1 и вплоть до 100 внутрь массива */

void fill_array(int *a)
{
    int x;

    srandom((unsigned)time(NULL));  /* Инициализировать генератор псевдослучайных чисел */

    for(x=0;x<SIZE;x++)
    {
        a[x] = random() % 100;      /* Получить случайное целое число от 0 до 99 */
        a[x]++;                     /* Добавить единицу, чтобы было от 1 до 100 */
    }
}

/*
	Большой-Малый
	Опубликовано 22 Июня 2013 г.
	https://c-for-dummies.com/blog/?p=123
*/

