#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char filename[] ="sonnet18-r.txt";
	FILE *fp;
	int count;
	wint_t ch;
	fpos_t pos;
	
	setlocale(LC_ALL,"");

	/* открыть конкретный текстовый файл */
	fp = fopen(filename,"r");
	if( fp==NULL )
	{
		fwprintf(stderr,L"Не могу открыть %s\n",filename);
		exit(1);
	}
	wprintf(L"%s открыт\n",filename);

	/* читаем 256 байт */
	count = 0;
	while( count<256 )
	//while( count<245 )
	{
		ch = fgetwc(fp);
		if( ch==WEOF )
			break;
		putwchar(ch);
		count++;
	}

	/* получить положение указателя позиции в файле */
	fputws(L"\n\n=== Получение указателя текущей позиции в файле ===\n\n",stdout);
	fgetpos(fp,&pos);

	/* считать еще 256 байт */
	count = 0;
	while( count<256 )
	{
		ch = fgetwc(fp);
		if( ch==WEOF )
			break;
		putwchar(ch);
		count++;
	}

	/* переставить указатель позиции в файле */
	fputws(L"\n\n=== Переустановка указателя текущей позиции в файле ===\n\n",stdout);
	fsetpos(fp,&pos);

	/* прочитать остальную часть файла */
	while( (ch=fgetwc(fp)) != WEOF )
		putwchar(ch);

	/* очистка */
	fclose(fp);
	wprintf(L"%s закрыт\n",filename);
	return 0;
}

/*
https://ru.wikisource.org/wiki/%D0%A1%D0%BE%D0%BD%D0%B5%D1%82_18_%28%D0%A8%D0%B5%D0%BA%D1%81%D0%BF%D0%B8%D1%80;_%D0%98%D0%BB%D1%8C%D0%B8%D0%BD%29/%D0%9F%D0%A1%D0%A1_1904_%28%D0%92%D0%A2%29

Получение и установка индикатора позиции в файле
Опубликовано 3 января 2026 г.
https://c-for-dummies.com/blog/?p=7320

*/
