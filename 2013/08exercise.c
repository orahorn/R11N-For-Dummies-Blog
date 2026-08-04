#include <stdio.h>
#include <ctype.h>

#define ROTATION ('C'-'A')		/* Set the cipher key as a three-letter
								   shift from A to C */
int main()
{
	int c;

	while(1)
	{
		c = fgetc(stdin);		/* fetch the character */
		if(c == EOF) break;		/* end processing on EOF */
		if(isupper(c))			/* handle upper case */
		{
			c -= 'A';			/* work with values 0 through 25 */
			c = (c + ROTATION) % 26;
			c += 'A';			/* restore the letter */
		}
		if(islower(c))			/* handle lower case */
		{
			c -= 'a';
			c = (c + ROTATION) % 26;
			c += 'a';
		}
		fputc(c,stdout);		/* put the modified character */
	}

	return(0);
}

/*

	The Caesarian Cipher
	Posted on August 1, 2013
	http://c-for-dummies.com/blog/wp-content/uploads/2013/08/08exercise.c
*/

