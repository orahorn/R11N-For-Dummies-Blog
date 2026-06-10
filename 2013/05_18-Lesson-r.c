#include <wchar.h>
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL,"");
    FILE *fh;

    fh = fopen("блорфус","r");
    if( fh == NULL )
    {
        fwprintf(stderr,L"Не могу открыть тот файл!\n");
        return(1);
    }
    fclose(fh);

    return(0);
}

