/*

https://c-for-dummies.com/blog/?p=2605

*/


#include <locale.h>
#include <wchar.h>

void getwstring(wchar_t *ws,int count)
{
    int x = 0;
    wchar_t *a,wch;

    a = ws;
    while(x<count-1)
    {
        wch = getwchar();
        if( wch=='\n')
            break;
        *a = wch;
        a++;
        x++;
    }
    *a = '\0';
}

int main()
{
    wchar_t input[10];

    setlocale(LC_CTYPE,"");

    wprintf(L"Наберите какой-нибудь забавный текст (10 символов макс): ");
    getwstring(input,10);
    wprintf(L"Вы набрали: %ls!\n",input);

    return(0);
}

