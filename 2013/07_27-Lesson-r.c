#include <wchar.h>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL,"");

    wprintf(L"NULL это указатель на '%p'\n",(int *)NULL);
    wprintf(L"\\0 это есть %d\n",L'\0');
    wprintf(L"Размер целого числа (int) = %ld\n",sizeof(int));
    wprintf(L"Размер NULL = %ld\n",sizeof(NULL));

    return(0);
}

/*
	Разница между NULL и Нулём
	Опубликовано 27 июля 2013 года
	https://c-for-dummies.com/blog/?p=177
*/



