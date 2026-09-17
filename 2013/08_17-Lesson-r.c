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

    int deck[CARDS];
    int x,c;
    setlocale(LC_ALL,"");

/* инициализировать колоду */
    for(x=0;x<CARDS;x++)
        deck[x] = 0;

    srand((unsigned)time(NULL));
    for(x=0;x<DRAW;x++)
    {
        for(;;)                 /* цикл до тех пор, пока не выберем значимую карту*/
        {
            c = rand() % CARDS;     /* генерировать случайную выборку */
            if(deck[c] == 0)        /* была ли карта выбрана? */
            {
                deck[c] = 1;        /* показать что карта была выбрана */
                showcard(c);        /* отобразить выборку */
                break;              /* конец цикла */
            }
        }                       /* повторять до тех пор, пока значимая карта не найдётся */
    }

    return(0);
}

/* Берём значения от 0 до 51 (карт в колоде) и показываем
   соответствующее карточное имя */
void showcard(int card)
{
    wchar_t *suit[4] = { L"Пики", L"Червы", L"Крести", L"Бубны" };

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
    wprintf(L" из %ls\n",suit[card/13]);
}

#if 0
        do
        {
            c = rand() % CARDS;     /* сгенерировать случайную выборку */
        }
        while(deck[c]);             /* repeat until valid number drawn */
        while(deck[c]);             /* повторять до тех пор, пока не выпадет значимый номер */
        deck[c] = 1;                /* показать выбранную карту */
        showcard(c);                /* отобразить её */
#endif

/*
https://c-for-dummies.com/blog/?p=240
Unique Random Numbers
Уникальные Случайные Номера
Опубликовано 17 августа, 2013 года.
*/
