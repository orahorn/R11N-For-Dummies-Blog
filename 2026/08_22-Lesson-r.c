#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{

	char filename[] = "тест.txt";
	int fd1,fd2;

	setlocale(LC_ALL,"");

	/* открыть/создать файл */
	fd1 = creat(filename,S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP);
	/* продублировать файловый описатель */
	fd2 = dup(fd1);
	if( fd1==-1 || fd2==-1 )
	{
		fwprintf(stderr,L"Ох мы получили файловую проблему!\n");
		exit(1);
	}

	/* запишем данные в файл.
	   Русские буквы в UTF-8 кодируются двумя байтами
	*/
	write(fd1,"Привет, ",6*2+2);
	write(fd2,"Мир!\n",3*2+2);

	/* закроем дубликат fd */
	close(fd2);

	/* продолжим с fd1 */
	write(fd1,"Я имел ввиду Землю!\n",15*2+5);

	/* clean-up */
	close(fd1);
	return 0;
}
