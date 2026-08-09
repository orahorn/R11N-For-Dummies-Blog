#include <wchar.h>
#include <locale.h>
#include <stdio.h>

void scale(void)
{
	wchar_t s;

	for( s=L'Ё'; s<=L'Я'; putwchar(s),s++ )
		;
}

int main()
{
	int x;

	setlocale(LC_ALL,"");
	for( x=0; x<10; scale(), wprintf(L"%d цикл\n",x) ,x++ )
		;

	return 0;
}
