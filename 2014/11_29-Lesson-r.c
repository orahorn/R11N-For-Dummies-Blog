#include <wchar.h>
#include <locale.h>
#include <stdio.h>

long factorial(long f);

int main()
{
    long a,b;

    setlocale(LC_ALL,"");

    wprintf(L"Введите целое число: ");
    wscanf(L"%ld",&a);
    b = factorial(a);
    wprintf(L"%ld! = %ld\n",a,b);

    return(0);
}

long factorial(long f)
{
    if(f == 1)
        return(f);
    else
        return(f*factorial(f-1));
}

/*
	Факториал рекурсии
	Опубликовано 29 Ноября 2014 года.
	https://c-for-dummies.com/blog/?p=1080
*/


