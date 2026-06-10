#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <wctype.h>

int main()
{
	setlocale(LC_ALL,"");
	wchar_t string[] = L"Ничто не сравнится со знанием ASCII кодов!\n";
	wchar_t *s;

	/* output iswgraph() test */
	fputws(L"iswgraph()\n",stdout);
	s = string;
	while( *s != L'\0' )
	{
		putwchar(*s);
		s++;
	}
	/* testing output */
	s = string;
	while( *s != L'\0' )
	{
		if( iswgraph(*s) )
			putwchar(L'^');
		else
			putwchar(L' ');
		s++;
	}
	putwchar(L'\n');

	/* output iswprint() test */
	fputws(L"iswprint()\n",stdout);
	s = string;
	while( *s != L'\0' )
	{
		putwchar(*s);
		s++;
	}
	/* testing output */
	s = string;
	while( *s != L'\0' )
	{
		if( iswprint(*s) )
			putwchar(L'^');
		else
			putwchar(L' ');
		s++;
	}
	putwchar(L'\n');

	return 0;
}
