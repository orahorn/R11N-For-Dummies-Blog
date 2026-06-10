#include <stdio.h>

char *binbin(int n);

int main()
{
    int input,result,bit,x;

    bit = 1;
    printf("Type a number between 0 and 255: ");
    scanf("%d",&input);
    printf("%s\n========\n",binbin(input));
    for(x=0;x<8;x++)
    {
        result = bit | input;
        printf("%s\n",binbin(result));
        bit*=2;
    }
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

