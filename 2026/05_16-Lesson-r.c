#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <wctype.h>

int main()
{
	setlocale(LC_ALL,"");

	wchar_t string[] = L"Ничто не сравнится со знанием ASCII кодов!\n";
	wchar_t *s;

	/* output normal */
	wprintf(L"%ls",string);

	/* invert case */
	s = string;
	while( *s != L'\0' )
	{
		if( iswlower(*s) )
			putwchar( towupper(*s) );
		else if( iswupper(*s) )
			putwchar( towlower(*s) );
		else
			putwchar(*s);
		s++;
	}

	return 0;
}
