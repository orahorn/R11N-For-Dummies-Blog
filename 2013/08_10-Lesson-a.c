#include <stdio.h>

#define CARDS 52

void showcard(int card);

int main()
{
    int x;

    for(x=0;x<CARDS;x++)
    {
        showcard(x);
    }

    return(0);
}

/* Take values 0 through 51 (cards in a deck) and display
   corresponding card name */
void showcard(int card)
{
    char *suit[4] = { "Spades", "Hearts", "Clubs", "Diamonds" };

    switch(card%13)
    {
        case  0:
            printf("%2s","A");
            break;
        case 10:
            printf("%2s","J");
            break;
        case 11:
            printf("%2s","Q");
            break;
        case 12:
            printf("%2s","K");
            break;
        default:
            printf("%2d",card%13+1);
    }
    printf(" of %s\n",suit[card/13]);
}
