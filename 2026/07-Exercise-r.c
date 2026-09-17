#include <stdio.h>
#include <wchar.h>
#include <locale.h>

/* Преобразование строчных букв греческого алфавита в прописные */
wchar_t toGupper(wchar_t c)
{
	if( c>=0x03B1 && c<=0x03C9 )
		return( c-0x20 );
	return(c);
}

/* Преобразовать греческие заглавные буквы в строчные */
wchar_t toGlower(wchar_t c)
{
	if( c>=0x0391 && c<=0x03A9 )
		return( c+0x20 );
	return(c);
}

int main()
{
	int x;
	wchar_t phrase[] = L"Ξεσκεπαζω την Ψυχοφθορα Βδελυγμια";

        /* установить локализацию */
	setlocale(LC_ALL,"");

        /* Вывод исходной фразы */
	wprintf(L"Изначально:\n");
	x = 0;
	while(phrase[x])
	{
		putwchar(phrase[x]);
		x++;
	}
	putwchar(L'\n');
	
	/* Вывод заглавными буквами (ГРЕЧЕСКИЙ) */
	wprintf(L"ВСЕ ЗАГЛАВНЫЕ БУКВЫ:\n");
	x = 0;
	while(phrase[x])
	{
		putwchar(toGupper(phrase[x]));
		x++;
	}
	putwchar(L'\n');
	
	/* Вывод в нижнем регистре (ГРЕЧЕСКИЙ) */
	wprintf(L"строчные буквы:\n");
	x = 0;
	while(phrase[x])
	{
		putwchar(toGlower(phrase[x]));
		x++;
	}
	putwchar(L'\n');
	
	return 0;
}
