#include <wchar.h>
#include <locale.h>

#include <stdio.h>

int main()
{
    int i = 498; setlocale(LC_ALL,"");

    wprintf(L"Значение:%8d\n",i);
    wprintf(L"Значение:%8d\n",i*10);
    wprintf(L"Значение:%8d\n",i*100);

    return(0);
}

/*
	https://c-for-dummies.com/blog/?p=288
	Мания Преобразования Символов: Вывод Целых Чисел
	Размещено 21 сентября 2013 года
*/
