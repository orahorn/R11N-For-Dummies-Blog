#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define DRAW 5

void showcard(int card);

int main()
{
	setlocale(LC_ALL,"");

    int x,c;

    srand((unsigned)time(NULL));
    for(x=0;x<DRAW;x++)
    {
        c = rand() % CARDS;
        showcard(c);
    }

    return(0);
}

/* Приймає значення від 0 до 51 (карти в колоді) та відображає
   відповідну назву карти */
void showcard(int card)
{
	setlocale(LC_ALL,"");

    wchar_t *suit[4] = {L"Піки", L"Черви", L"Трефи", L"Бубни"};

    switch(card%13)
    {
        case 0:
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

/*
	https://c-for-dummies.com/blog/?p=220
	Виберіть карту, будь-яку карту
	Опубліковано 10 серпня 2013 року
*/
