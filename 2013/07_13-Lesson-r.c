#include <wchar.h>
#include <locale.h>
#include <stdio.h>

int main()
{

    int x=1;                   /* Установки */

    setlocale(LC_ALL,"");

    for(;;)
    {
        wprintf(L"%2d\n",x++);    /* x++ это счётчик */
        if(x>10)               /* условие выхода */
            break;
    }
    return(0);
}

/*
	For Ever
	Опубликовано 13 Июля 2013 года
	https://c-for-dummies.com/blog/?p=161
*/
