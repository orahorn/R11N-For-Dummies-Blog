#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <termios.h>

#ifndef STDIN_FILENO
#define STDIN_FILENO 0
#endif /* STDIN_FILENO */

#define SIZE 16

int main()
{
	setlocale(LC_ALL,"");
    struct termios original,noecho;
    wchar_t buffer[SIZE];
    int x;

    /* получим текущую конфигурацию терминала */
    tcgetattr(STDIN_FILENO,&original);
    /* продублируем его */
    noecho = original;
    /* выключим полный дуплекс */
    noecho.c_lflag = noecho.c_lflag ^ ECHO;
    /* установим терминал */
    tcsetattr(STDIN_FILENO, TCSANOW, &noecho);

    /* приглашение для ввода пароля */
    wprintf(L"Проверка слепого ввода пароля: ");
    fgetws(buffer,SIZE,stdin);
    /* удалим новую строку */
    for( x=0; x<SIZE; x++)
    {
        if( buffer[x]==L'\n' )
        {
            buffer[x]=L'\0';
            break;
        }
    }
    putwchar(L'\n');

    /* восстановим настройки терминала */
    tcsetattr(STDIN_FILENO, TCSANOW, &original);
    /* выведем результат */
    wprintf(L"Ваш пароль: '%ls'\n",buffer);

    return(0);
}

/*
https://c-for-dummies.com/blog/?p=4001
*/
