#include <locale.h>
#include <wchar.h>

int main()
{
    wchar_t hello[7] = {
        0x41f, 0x440, 0x438, 0x432, 0x435, 0x442, 0x021
    };
    int x;

//    setlocale(LC_CTYPE,"UTF-8");
//    setlocale(LC_CTYPE,"ru_RU.UTF-8");
    setlocale(LC_CTYPE,"uk_UA.UTF-8");
    for(x=0;x<7;x++)
        putwchar(hello[x]);
    putwchar('\n');

    return(0);
}

