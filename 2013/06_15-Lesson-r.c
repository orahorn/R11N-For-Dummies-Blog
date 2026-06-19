#include <wchar.h>
#include <locale.h>
#include <stdio.h>

wchar_t *binbin(int n);

int main()
{
    wchar_t input[128];
    int x = 0;

    setlocale(LC_ALL,"");

    wprintf(L"Размер wchar_t: %d байт\n", sizeof(wchar_t));
    wprintf(L"Введите текст: ");
    fgetws(input,126,stdin);

    wprintf(L"Двоичное представление букв разделённых пробелами:\n");
    while(input[x] != L'\0'){
        wprintf(L"%ls",binbin(input[x++]));
	wprintf(L" ");
    }
    putwchar(L'\n');

    return(0);
}

wchar_t *binbin(int n)
{
    static wchar_t bin[sizeof(wchar_t)+1];
    int x;

    for(x=0;x<(8*sizeof(wchar_t));x++)
    {
        bin[x] = (n & (0x80<<8*(sizeof(wchar_t)-1))) ? L'1' : L'0';
        n <<= 1;
    }
    bin[x] = L'\0';
    return(bin);
}


/*
https://c-for-dummies.com/blog/?p=112
*/

