#include <stdio.h>

#define RED "\e[41m"
#define WHITE "\e[47m"
#define BLUE "\e[37;44m"
#define NORMAL "\e[m"
#define LONG 35
#define SHORT 22

void bar(char *color,int size)
{
	printf("%s",color);

	while(size--)
		putchar(' ');
	printf("%s\n",NORMAL);
}

int main()
{
	int stripe,count;

	for( stripe=0; stripe<15; stripe++ )
	{
		switch(stripe/5) {
			case 0:
				bar(WHITE,LONG+SHORT);
			break;
			case 1:
				bar(BLUE,LONG+SHORT);
			break;
			case 2:
				bar(RED,LONG+SHORT);
			break;
		}


	}

	return 0;
}
/*
https://ru.wikipedia.org/wiki/Управляющие_последовательности_ANSI
*/
