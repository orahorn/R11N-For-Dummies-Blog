#include <locale.h>
#include <wchar.h>
#include <stdbool.h>

#define TAB 0x09
#define LF 0x0A
#define VT 0x0B
#define FF 0x0C
#define CR 0x0D
#define SPACE 0x20

/* повертає істину для всіх пробільних символів */
int isspace(int c)
{
	switch(c)
	{
		case TAB:
		case LF:
		case VT:
		case FF:
		case CR:
		case SPACE:
			return true;
		default:
			return false;
	}
}

/* повертає істину лише для символів табуляції та пробілу */
int isblank(int c)
{
	if( c==TAB || c==SPACE )
		return true;
	else
		return false;
}

int main()
{
	int ch;
	
	/* установим локализацию для широких символов */
	setlocale(LC_ALL,"");

	/* вивести нижні ASCII-коди */
	for( ch=0x00; ch<=' '; ch++ )
	{
		wprintf(L"%2d %02X %lc - це є",ch,ch,ch+9216);
		if( isspace(ch) )
		{
			wprintf(L" порожній символ");
			if( isblank(ch) )
				wprintf(L" та пробіл");
		}
		else
		{
			wprintf(L" не порожній/пробіл");
		}
		putwchar(L'\n');
	}

	return 0;
}
