#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <wctype.h>

#define ROTATION (L'C'-'A')		/* Установите ключ шифрования на три буквы:
								   сдвиг с A на C */

int main()
{
	int c;

	setlocale(LC_ALL,"");

	while(1)
	{
		c = fgetc(stdin);		/* получить символ */
		if(c == EOF) break;		/* завершить обработку на EOF */
		if(iswupper(c))			/* обработать верхний регистр */
		{
			c -= L'A';			/* работать со значениями от 0 до 25 */
			c = (c + ROTATION) % 26;
			c += L'A';			/* восстановить букву */
		}
		if(iswlower(c))			/* обработать нижний регистр */
		{
			c -= L'a';
			c = (c + ROTATION) % 26;
			c += L'a';
		}
		fputwc(c,stdout);		/* вывести изменённый символ */
	}

	return(0);
}

/*
	Шифр Цезаря
	Опубликовано 1 августа, 2013
	http://c-for-dummies.com/blog/wp-content/uploads/2013/08/08exercise.c
*/

