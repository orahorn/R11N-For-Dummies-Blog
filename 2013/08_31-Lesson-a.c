#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *today;

    time(&tictoc);          /* Get the current time */
    today = localtime(&tictoc);
                            /* Read today structure */
    printf("Today is %d/%d/%d\n",
        today->tm_mon+1,
        today->tm_mday,
        today->tm_year+1900);
    return(0);
}

