#include <wchar.h>
#include <locale.h>
#include <stdio.h>

wchar_t *ordinal(int value);

int main()
{
	int count;

	setlocale(LC_ALL,"");
	for(count=1;count<=100;count++)
		wprintf(L"%3d%ls\n",count,ordinal(count));

	return(0);
}

wchar_t *ordinal(int value)
{
		/* Сначала, разберёмся с тинэйджерами, наименования
		   возрастов которых имеют окончания 'ый' */
	if( value > 10 && value < 20)
		return(L"ый");
		/* Обрабатывайте все остальные числа, которые довольно
		стабильны для чисел от 1 до 10. Используйте операцию
		взятия остатка от деления на значение, чтобы оно
		оставалось в этом диапазоне. */
	switch( value % 10 )
	{
		case 3:
			return(L"ий");
			break;
		case 2:
		case 6:
		case 7:
		case 8:
			return(L"ой");
			break;
		default:
			return(L"ый");
	}
}


/*
https://c-for-dummies.com/blog/wp-content/uploads/2013/06/06exercise.c


*/

