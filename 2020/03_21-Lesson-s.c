#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	setlocale(LC_ALL,"");

	const char filename[] = "gettysburg-b.txt";
	int fdes;

	fdes = open(filename,O_RDONLY);
	if( fdes==-1 )
	{
		fwprintf(stderr,L"Немагчыма адкрыць файл '%s'\n",filename);
		return(1);
	}

	wprintf(L"'%s' адкрыта для нізкаўзроўневага, нефарматаванага чытання\n",filename);

	close(fdes);

	return(0);
}
