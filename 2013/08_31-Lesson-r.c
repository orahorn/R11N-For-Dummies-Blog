#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <time.h>

int main()
{

    time_t tictoc;
    struct tm *today; setlocale(LC_ALL,"");

    time(&tictoc);          /* Извлечём текущее время */
    today = localtime(&tictoc);
                            /* Прочитаем структуру "today" (сегодня) */
    wprintf(L"Сегодня %d/%d/%d\n",
        today->tm_mday,
        today->tm_mon+1,
        today->tm_year+1900);
    return(0);
}

