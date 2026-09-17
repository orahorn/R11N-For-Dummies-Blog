#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL,"");

	char filename[] = "тест.txt";
	int fd1,fd2;

	/* отктыть/создать файл */
	fd1 = creat(filename,S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH);
	if( fd1==-1 )
	{
		fwprintf(stderr,L"Невозможно создать %ls\n",filename);
		perror("ОШИБКА: ");
		exit(1);
	}

	/* дублировать файловый дескриптор */
	fd2 = dup(fd1);
	if( fd2==-1 )
	{
		fwprintf(stderr,L"Невозможно дублировать файловый дескриптор\n");
		perror("ОШИБКА: ");
		close(fd1);
		exit(1);
	}


	/* пишем данные в файл */

	/* 6 русских букв в UTF-8 (кодируются двумя байтами каждая) +
	   2 символа ASCII (запятая и пробел) */
	write(fd1,"Привет, ",6*2+2);
	/* 3 русские буквы в UTF-8 +
 	   2 символа ASCII (восклицательный знак и новая строка) */
	write(fd2,"мир!\n",3*2+2);

	/* Зачистка */
	close(fd2);
	close(fd1);
	return 0;
}
