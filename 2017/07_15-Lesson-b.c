#include <locale.h>
#include <wchar.h>
#include <stdio.h>

int main()
{
    wchar_t input[10];

    setlocale(LC_CTYPE,"");

    wprintf(L"Type some fancy text: ");
    fgetws(input,10,stdin);
    wprintf(L"You typed: %ls!\n",input);

    return(0);
}

