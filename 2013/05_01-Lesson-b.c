#include <stdio.h>
#include <ctype.h>

void show_word(char *w);

int main()
{
	char sample[] = "Swap me";
	char *sptr;

/* find second word */
	sptr = sample;
	while(isalnum(*sptr++))
		;
	
/* display second word */
	show_word(sptr);
/* display a space */
	putchar(' ');
/* display first word */
	show_word(sample);
/* display newline */
	putchar('\n');

	return(0);
}

/* Display the text at w, end at first non-alpha/numeric character */

void show_word(char *w)
{
	while(isalnum(putchar(*w++)))
		;
}
