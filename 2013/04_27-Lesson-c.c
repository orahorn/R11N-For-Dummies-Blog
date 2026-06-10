#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *searchpath;

    searchpath = getenv("PATH");
    printf("The search path is '%s'\n",searchpath);
    return(0);
}

