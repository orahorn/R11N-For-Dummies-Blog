#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    wchar_t input[64];
    wchar_t *street[1];
    long value;

    setlocale(LC_ALL,"");

    wprintf(L"Введите адрес в формате '№_дома Улица' (Пример: '5 Тёплый Стан'): ");
    fgetws(input,63,stdin);
    value = wcstol(input,street,10);
    wprintf(L"Ваш дом №%ld",value);
    wprintf(L" находится на улице:%ls",street[0]);

    return(0);
}

