#include <stdio.h>
#include <time.h>

int main()
{
    time_t tictoc;
    struct tm *today;
    char *months[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December" };

    time(&tictoc);          /* Get the current time */
    today = localtime(&tictoc);
                            /* Read today structure */
    printf("Today is %s %d, %d\n",
        months[today->tm_mon],
        today->tm_mday,
        today->tm_year+1900);
    return(0);
}
