#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	char filename[] = "test.txt";
	int fd;
	int fileflags = O_CREAT | O_WRONLY | O_TRUNC;
	//int fileflags = O_CREAT | O_WRONLY ;
	mode_t filemode = S_IRUSR | S_IWUSR| S_IRGRP | S_IROTH;

	/* open/create the file */
	//fd = open(filename,fileflags);
	fd = open(filename,fileflags,filemode);
	if( fd==-1 )
	{
		fprintf(stderr,"Unable to create %s\n",filename);
		perror("ERROR: ");
		exit(1);
	}

	/* write data to the file */
	write(fd,"Hello!\n",7);
	//write(fd,"X\n",2);

	/* clean-up */
	close(fd);
	return 0;
}
