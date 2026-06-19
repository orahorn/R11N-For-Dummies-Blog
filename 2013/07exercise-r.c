#include <wchar.h>
#include <locale.h>
#include <stdio.h>

void showgrid(int *array);
int tictactoe(int *array);

int main()
{
	int sample1[] = { 0, 0, 1, 0, 1, 0, 1, 0, 0 };
	int result;

	setlocale(LC_ALL,"");

	showgrid(sample1);
	result = tictactoe(sample1);
	if(result)
		fputws(L"Это победитель!\n",stdout);
	else
		fputws(L"Не победитель!\n",stdout);

	return(0);
}

void showgrid(int *array)
{
	int x;

	fputws(L"Крестики-нолики:\n",stdout);
	for(x=0;x<9;x+=3)
	{
		wprintf(L"%d %d %d\n",
			array[x],
			array[x+1],
			array[x+2]);
	}
}

/* расположение массива крестиков(1)-ноликов на площадке:
   0 1 2
   3 4 5
   6 7 8
*/

int tictactoe(int *array)
{
	if(array[0] )					/* верхний левый угол */
	{
		if(array[3] && array[6])	/* первая колонка вниз */
			return(1);
		if(array[1] && array[2])	/* через первую строку */
			return(1);
		if(array[4] && array[8])	/* ВЛ до НП диагональю */
			return(1);
	}
									/* вторая колонка вниз */
	if(array[1] && array[4] && array [7])
		return(1);

	if(array[2])					/* верхний правый угол */
	{
		if(array[4] && array[6])	/* ВП до НЛ диагональю */
			return(1);
		if(array[5] && array[8])	/* третья колонка вниз */
			return(1);
	}
									/* через вторую строку */
	if(array[3] && array[4] && array[5])
		return(1);
									/* через третью строку */
	if(array[6] && array[7] && array[8])
		return(1);

	return(0);
}

/*
	Мы победили!
	Опубликовано 1 Июля 2013 года:
	https://c-for-dummies.com/blog/?p=154
	https://c-for-dummies.com/blog/wp-content/uploads/2013/07/07exercise.c
*/

