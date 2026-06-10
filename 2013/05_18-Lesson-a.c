#include <stdio.h>

int main()
{
    FILE *fh;

    fh = fopen("blorfus","r");
    if( fh == NULL )
    {
        fprintf(stderr,"Unable to open that file!\n");
        return(1);
    }
    fclose(fh);

    return(0);
}

