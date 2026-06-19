#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[64];
    char *street[1];
    long value;

    printf("Enter your street address: ");
    fgets(input,63,stdin);
    value = strtol(input,street,10);
    printf("Your house number is %ld",value);
    printf(" on %s",street[0]);

    return(0);
}

