#include <wchar.h>
#include <locale.h>

#include <stdio.h>

int main()
{ setlocale(LC_ALL,"");
    wprintf(L"Значэнне:%8d\n",678);
    wprintf(L"Значэнне:%08d\n",678);
    wprintf(L"Значэнне:%+8d\n",678);
    wprintf(L"Значэнне:%-8d\n",678);
    wprintf(L"Значэнне:%+-8d\n",678);

    return(0);
}

/*
	https://c-for-dummies.com/blog/?p=288
	Манія пераўтварэння сімвалаў: цэлалікавы вывад
	Апублікавана 21 верасня 2013 г.
*/
