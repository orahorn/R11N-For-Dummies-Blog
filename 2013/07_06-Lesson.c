#include <stdio.h>

int main()
{
    int value,two,eight,ten;

    printf("Enter an integer value: ");
    scanf("%d",&value);

    two = value << 1;
    eight = value << 3;
    ten = two + eight;

    printf("Ten times %d is %d.\n",value,ten);

    return(0);
}

