#include <stdio.h>
#include <wctype.h>
#include <wchar.h>
#include <locale.h>

int main()
{
   int ch;

   setlocale(LC_CTYPE,"uk_UA.UTF-8");
   while(1)
   {
        ch = fgetwc(stdin);
        if(ch == EOF) break;
        if(iswalpha(ch))
        {
            if(towupper(ch)>='A' && towupper(ch)<='X')
              ch+=2;
            else if(ch>='y' && ch<='z')
              ch='b'-('z'-ch);
	    else if(ch>='Y' && ch<='Z')
              ch='B'-('Z'-ch);
        }
        fputwc(ch,stdout);
   }
   return(0);
}

/*
	Цезарів шифр
	Опубліковано 1 серпня 2013 року
	https://c-for-dummies.com/blog/?p=190
*/

