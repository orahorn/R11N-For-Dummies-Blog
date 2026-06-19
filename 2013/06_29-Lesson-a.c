#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[64];
    long value;

    printf("Enter an integer value: ");
    fgets(input,63,stdin);
    value = strtol(input,NULL,10);
    printf("You typed the value %ld.\n",value);

    return(0);
}

