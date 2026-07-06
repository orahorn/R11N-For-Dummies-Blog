#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <wctype.h>

#define DEL 127

int main()
{
	int ch;

	setlocale(LC_ALL,"");

	for( ch=L' '; ch<=DEL; ch++ )
	{
		wprintf(L"%3d %2X '%lc' - это",ch,ch,ch);
		if( iswalnum(ch) )
		{
			wprintf(L" буквенно-цифровая");
			if( iswalpha(ch) )
				wprintf(L" (буква)");
			if( iswdigit(ch) )
				wprintf(L" (цифра)");
		}
		else
		{
			wprintf(L" не буквенно-цифровая");
		}
		putwchar(L'\n');
	}

	return 0;
}

/*
	WCtype Функции: iswalnum(), iswalpha() and iswdigit()
	Рамещено 23 мая 2026 года
	https://c-for-dummies.com/blog/?p=7585
*/
