#include <wchar.h>
#include <locale.h>
#include <stdio.h>

#define CARDS 52

void showcard(int card);

int main()
{
	setlocale(LC_ALL,"");

    int x;

    for(x=0;x<CARDS;x++)
    {
        showcard(x);
    }

    return(0);
}

/* Принимает значения от 0 до 51 (карты в колоде) и отображает
соответствующее название карты */
void showcard(int card)
{

    wchar_t *suit[4] = { L"Пики", L"Червы", L"Трефы", L"Бубны" };
    switch(card%13)
    {
        case  0:
            wprintf(L"%2ls",L"Т");
            break;
        case 10:
            wprintf(L"%2ls",L"В");
            break;
        case 11:
            wprintf(L"%2ls",L"Д");
            break;
        case 12:
            wprintf(L"%2ls",L"К");
            break;
        default:
            wprintf(L"%2d",card%13+1);
    }
    wprintf(L" of %ls\n",suit[card/13]);
}
