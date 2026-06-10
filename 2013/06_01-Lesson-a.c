#include <stdio.h>

void input(char *string,int length);

int main()
{
    char firstname[32],lastname[32];

    printf("What is your first name? ");
    input(firstname,32);
    printf("What is your last name? ");
    input(lastname,32);
    printf("Please to meet you %s %s.\n",
        firstname,
        lastname);

    return(0);
}

void input(char *string,int length)
{
    int x;

    fgets(string,length,stdin);
    for(x=0;x<=length;x++)
    {
        if( string[x] == '\n')
        {
            string[x] = '\0';
            break;
        }
    }
}


/*
Fixing fgets() for Input
Posted on June 1, 2013
https://c-for-dummies.com/blog/?p=24
*/

