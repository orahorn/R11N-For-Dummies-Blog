#include <locale.h>
#include <wchar.h>
#include <stdio.h>


int main()
{
    wchar_t hello[] = {
        0x41f, 0x440, 0x438, 0x432, 0x435,
        0x442, '!', '\n', '\0'
    };

    //setlocale(LC_CTYPE,"UTF-8");
    setlocale(LC_CTYPE,"");
    fputws(hello,stdout);

    return(0);
}

