#include <stdio.h>

char *binbin(int n);

int main()
{
    char input[64];
    int x = 0;

    printf("Type the text: ");
    fgets(input,63,stdin);

    while(input[x] != '\0')
        printf("%s",binbin(input[x++]));
    putchar('\n');

    return(0);
}

char *binbin(int n)
{
    static char bin[9];
    int x;

    for(x=0;x<8;x++)
    {
        bin[x] = n & 0x80 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return(bin);
}

/*
https://c-for-dummies.com/blog/?p=112
*/

