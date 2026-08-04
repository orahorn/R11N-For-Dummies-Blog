#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 8
#define COUNT 50

int main()
{

    int x,y;
    long r,array[RANGE];

    setlocale(LC_ALL,"");

    srandom((unsigned)time(NULL));      /* настроим ГСЧ */

    for(x=0;x<RANGE;x++)                /* инициализируем массив */
        array[x] = 0L;

/* отобразим содержимое массива каждый раз при генерации случайного значения */

    for(x=0;x<COUNT;x++)                /* Сгенерируем COUNT случайных значений */
    {
        r = random() % RANGE;           /* получим случайное значение */
        array[r]++;                     /* посчитаем это значение */
	putwchar(L'|');
        for(y=0;y<RANGE;y++)            /* отобразим массив */
            wprintf(L"%3ld|",array[y]);
        putwchar(L'\n');
    }

    return(0);
}
