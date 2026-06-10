#include <stdio.h>
#include <time.h>

int main()
{
    int month,day,year;
    struct tm *birthday;
    time_t bday,today;

    printf("Enter your birth month (1-12): ");
    scanf("%d",&month);
    printf("Enter your birth day: ");
    scanf("%d",&day);
    printf("Enter your birth year: ");
    scanf("%d",&year);

    time(&today);
    birthday = localtime(&today);
    birthday->tm_mon = month-1;
    birthday->tm_mday = day;
    birthday->tm_year = year-1900;

    bday = mktime(birthday);

    printf("You were born on %d/%d/%d\n",month,day,year);
    printf("That's Unix Epoch value %ld\n",bday);

    return(0);
}

