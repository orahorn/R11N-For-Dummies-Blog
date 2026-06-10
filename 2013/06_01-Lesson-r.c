#include <wchar.h>
#include <locale.h>
#include <stdio.h>

void input(wchar_t *string,int length);

int main()
{
    wchar_t firstname[32],lastname[32];

    setlocale(LC_ALL,"");
    wprintf(L"Какое у Вас имя? ");
    input(firstname,32);
    wprintf(L"Какая у Вас фамилия? ");
    input(lastname,32);
    wprintf(L"Рады приветствовать Вас, %ls %ls.\n",
        firstname,
        lastname);

    return(0);
}

void input(wchar_t *string,int length)
{
    int x;

    fflush(stdin);
    fgetws(string,length,stdin);
    fflush(stdin);
    for(x=0;x<=length;x++)
        if( string[x] == L'\n')
        {
            string[x] = L'\0';
            break;
        }
    fflush(stdin);
}


/*
Fixing fgetws() for Input
Posted on June 1, 2013
https://c-for-dummies.com/blog/?p=24
*/

