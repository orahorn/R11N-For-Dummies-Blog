#include <stdio.h>
#include <ctype.h>

int main()
{
   int ch;

   while(1)
   {
        ch = fgetc(stdin);
        if(ch == EOF) break;
        if(isalpha(ch))
        {
            if(toupper(ch)>='A' && toupper(ch)<='M')
              ch+=13;
            else
              ch-=13;
        }
        fputc(ch,stdout);
   }
   return(0);
}

/*
	The Caesarian Cipher
	Posted on August 1, 2013
	https://c-for-dummies.com/blog/?p=190
*/
