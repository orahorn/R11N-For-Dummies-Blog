#include <locale.h>
#include <wchar.h>
#include <wctype.h>

int main()
{
	int ch;
	
	/* установим локализацию для широких символов */
	setlocale(LC_ALL,"");

	/* выведем нижние ASCII-коды */
	for( ch=0x00; ch<=' '; ch++ )
	{
		wprintf(L"%2d %02X %lc - это",ch,ch,ch+9216);
		if( iswspace(ch) )
		{
			wprintf(L" пустой символ");
			if( iswblank(ch) )
				wprintf(L" и пробел");
		}
		else
		{
			wprintf(L" не пусто/пробел");
		}
		putwchar(L'\n');
	}

	return 0;
}
