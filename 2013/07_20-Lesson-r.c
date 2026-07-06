#include <wchar.h>
#include <locale.h>
#include <stdio.h>

#define FALSE 0
#define TRUE !FALSE

int main()
{
    setlocale(LC_ALL,"");

    wprintf(L"Через 0 и его отрицание соответственно:\n");
    wprintf(L"Ложь это %d\n",FALSE);
    wprintf(L"Истина есть %d\n",TRUE);


    wprintf(L"\nЧерез равенство одинаковых и его неравенство соотв.:\n");
    wprintf(L"Истина: %d\n",1==1);
    wprintf(L"Ложь: %d\n",1!=1);
    return(0);
}

/*
	Что есть Истина?
	Опубликовано 20 июля 2013 года.
	https://c-for-dummies.com/blog/?p=173
*/

