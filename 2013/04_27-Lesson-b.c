#include <stdio.h>
#include <stdlib.h>

//extern char **environ;

int main(int argc, char** argv,char **envp)
{
    while(*envp)
    {
        printf("%s\n",*envp);
        envp++;
    }
    return EXIT_SUCCESS;
}

