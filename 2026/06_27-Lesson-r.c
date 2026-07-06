#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <wctype.h>

int main()
{
	int ch;

	setlocale(LC_ALL,"");

	fputws(L"Шестнадцетирично-десятичные цифры:\n",stdout);
	/* Диаппазон ASCII-символов */
	for( ch=L' '; ch<='~'; ch++ )
		if( isxdigit(ch) )
			putwchar(ch);
	putwchar(L'\n');

	return 0;
}
