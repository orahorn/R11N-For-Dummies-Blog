#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <limits.h>

int main()
{
	setlocale(LC_ALL,"");


#ifdef PATH_MAX
    wprintf(L"Параметр PATH_MAX определён как %d.\n",PATH_MAX);
#else
    wprintf(L"Параметр PATH_MAX не опредёлен в этой системе.\n");
#endif

    return(0);
}
