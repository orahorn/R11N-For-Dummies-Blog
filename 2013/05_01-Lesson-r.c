/*
Взято с:
https://c-for-dummies.com/blog/?p=33
https://c-for-dummies.com/blog/?attachment_id=34
https://c-for-dummies.com/blog/wp-content/uploads/2013/05/05exercise.c
*/

#include <stdio.h>
#include <wctype.h>
#include <wchar.h>
#include <locale.h>

void show_word(wchar_t *w);

int main()
{
	wchar_t sample[] = L"Поменяй меня";
	wchar_t *sptr;

	//setlocale(LC_ALL, "");
	setlocale(LC_CTYPE, "");

/* find second word */
	sptr = sample;
	while(iswalnum(*sptr++))
		;
	
/* display second word */
	show_word(sptr);
/* display a space */
	putwchar(L' ');
/* display first word */
	show_word(sample);
/* display newline */
	putwchar(L'\n');

	return(0);
}

/* Display the text at w, end at first non-alpha/numeric character */

void show_word(wchar_t *w)
{
	while(iswalnum(putwchar(*w++)))
		;
}

