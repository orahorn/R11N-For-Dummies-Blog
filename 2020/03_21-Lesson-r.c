#include <wchar.h>
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL,"");

	const char filename[] = "gettysburg-r.txt";
	FILE *fp;
	wint_t ch;

	fp = fopen(filename, "r");
	if( fp==NULL )
	{
		fwprintf(stderr,L"Unable to open %ls\n",filename);
		return(1);
	}

	while( !feof(fp) )
	{
		ch = fgetwc(fp);
		if( ch==EOF )
			break;
		fputwc(ch,stdout);
	}
	fclose(fp);

	return(0);
}

/*
Opening a File in the Raw
Posted on March 21, 2020
https://c-for-dummies.com/blog/?p=4036


https://c-for-dummies.com/blog/wp-content/uploads/2015/09/gettysburg.txt
770e129bbc7075ed4b16e8609d63df9b  gettysburg.txt
*/
