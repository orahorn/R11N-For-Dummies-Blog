#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL,"");

	char filename[] = "тест.txt";
	int fd;
	int fileflags = O_CREAT | O_WRONLY | O_TRUNC;
	//int fileflags = O_CREAT | O_WRONLY ;
	mode_t filemode = S_IRUSR | S_IWUSR| S_IRGRP | S_IROTH;

	/* open/create the file */
	//fd = open(filename,fileflags);
	fd = open(filename,fileflags,filemode);
	if( fd==-1 )
	{
		fwprintf(stderr,L"Невозможно открыть %ls\n",filename);
		perror("open");
		exit(1);
	}

	/* write data to the file */
	write(fd,"Привет!\n",14);
	//write(fd,L"X\n",2);

	/* clean-up */
	close(fd);
	return 0;
}
