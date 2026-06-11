#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <termios.h>

/* читаем ввод и пишем вывод */
void in_out(void)
{
	setlocale(LC_ALL,"");
	int x;
	wchar_t buffer[BUFSIZ];

	wprintf(L"Набираем некий текст: ");
	/* читаем ввод */
	fgetws(buffer,BUFSIZ,stdin);

	/* посылаем вывод */
	wprintf(L"Буфер: ");
	for( x=0; buffer[x]; x++ )
		wprintf(L"%02X ",buffer[x]);
	putwchar(L'\n');
}

int main()
{
	struct termios original,raw;

	setlocale(LC_ALL,"");

	/* сначала читаем подготовленный stdin */
	fputws(L"Включён подготовленный режим\n",stdout);
	in_out();

	/* отключаем канонический режим */
	tcgetattr(fileno(stdin),&original);
	raw = original;
	raw.c_lflag = raw.c_lflag ^ ICANON;
	tcsetattr(fileno(stdin),TCSANOW,&raw);

	/* читаем "сырой" stdin */
	fputws(L"Включён \"сырой\" режим\n",stdout);
	in_out();

	/* восстанавливаем и очищаем */
	tcsetattr(fileno(stdin),TCSANOW,&original);
	return 0;
}
