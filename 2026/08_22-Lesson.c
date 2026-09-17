#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	char filename[] = "test.txt";
	int fd1,fd2;

	/* open/create the file */
	fd1 = creat(filename,S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP);
	/* duplicate the handle */
	fd2 = dup(fd1);
	if( fd1==-1 || fd2==-1 )
	{
		fprintf(stderr,"Oh we got file problems!\n");
		exit(1);
	}

	/* write data to the file */
	write(fd1,"Hello, ",7);
	write(fd2,"world!\n",7);

	/* close the duplicate fd */
	close(fd2);

	/* continue with fd1 */
	write(fd1,"I mean Earth!\n",14);

	/* clean-up */
	close(fd1);
	return 0;
}
