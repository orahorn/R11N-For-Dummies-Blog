#include <locale.h>
#include <wchar.h>
#include <ctype.h>

/* вывод широких символов из ASCII,
   в частности, управляющих кодов */
void outwide(int c)
{
	if( iscntrl(c) )
	{
		if( c==127 )
			putwchar(9249);	/* символ DEL */
		else
			/* 9216 = начинают символы управляющего кода */
			putwchar(c+9216);
	}
	else
	{
		putwchar(c);
	}
}

int main()
{
	int ch;

	/* установить параметры локализации для широких символов */
	setlocale(LC_ALL,"");

	wprintf(L"Знаки препинания (пунктуация):\n");
	/* диапазон ASCII */
	for( ch=0; ch<=127; ch++ )
		if( ispunct(ch) )
			outwide(ch);
	putwchar(L'\n');

	wprintf(L"Не знаки препинания (пунктуации):\n");
	/* диапазон ASCII */
	for( ch=0; ch<=127; ch++ )
		if( !ispunct(ch) )
			outwide(ch);
	putwchar(L'\n');

	return 0;
}
