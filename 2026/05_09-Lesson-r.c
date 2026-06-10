#include <stdio.h>
#include <wctype.h>
#include <wchar.h>
#include <locale.h>


int main()
{
	wchar_t string[] = L"Да здравствует Unicode!\n";
	wchar_t *s;

setlocale(LC_ALL,"");

	/* uppercase */
	s = string;
	while( *s != L'\0' )
	{
		putwchar( towupper(*s) );
		s++;
	}

	/* lowercase */
	s = string;
	while( *s != '\0' )
	{
		putwchar( towlower(*s) );
		s++;
	}

	return 0;
}
