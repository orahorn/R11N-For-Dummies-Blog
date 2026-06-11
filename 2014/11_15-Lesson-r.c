/*
https://c-for-dummies.com/blog/?p=1060
*/

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    unsigned long long a,f,x;

    setlocale(LC_ALL,"");

    wprintf(L"Введите число: ");
    wscanf(L"%llu",&f);
    a = f;
    for(x=f-1;x>0;x--)
        a *= x;
    wprintf(L"%llu! = %llu\n",f,a);

    return(0);
}

