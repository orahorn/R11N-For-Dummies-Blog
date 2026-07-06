#include <wchar.h>
#include <locale.h>
#include <stdio.h>

int main()
{

    int value,two,eight,ten;

    setlocale(LC_ALL,"");

    wprintf(L"Введите произвольное целое число: ");
    wscanf(L"%d",&value);

    two = value << 1;
    eight = value << 3;
    ten = two + eight;

    wprintf(L"Десять раз по %d будет %d.\n",value,ten);

    return(0);
}

