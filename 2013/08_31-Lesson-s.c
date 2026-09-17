#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <time.h>

int main()
{

    time_t tictoc;
    struct tm *today;
    wchar_t *months[12] = {
	L"Студзень",
	L"Люты",
	L"Сакавік",
	L"Красавік",
	L"Травень",
	L"Чэрвень",
	L"Ліпень",
	L"Жнівень",
	L"Верасень",
	L"Кастрычнік",
	L"Лістапад",
	L"Снежань"}; setlocale(LC_ALL,"");

    time(&tictoc);          /* Атрымаць бягучы час */
    today = localtime(&tictoc);
                            /* Прачытайце структуру "сёння" */
    wprintf(L"Сёння %ls %d, %d\n",
        months[today->tm_mon],
        today->tm_mday,
        today->tm_year+1900);
    return(0);
}
