#include <stdio.h>

int main()
{
	const char filename[] = "gettysburg.txt";
	FILE *fp;
	int ch;

	fp = fopen(filename,"r");
	if( fp==NULL )
	{
		fprintf(stderr,"Unable to open %s\n",filename);
		return(1);
	}

	while( !feof(fp) )
	{
		ch = fgetc(fp);
		if( ch==EOF )
			break;
		fputc(ch,stdout);
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
