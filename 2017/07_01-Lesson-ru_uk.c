#include <stdio.h>
#include <locale.h>

int main()
{
    char *locale;

    locale = setlocale(LC_ALL,"");
    printf("The current locale is %s\n",locale);
	locale=setlocale(LC_CTYPE,"uk_UA.UTF-8");
    printf("The new locale is %s\n",locale);

    return(0);
}

