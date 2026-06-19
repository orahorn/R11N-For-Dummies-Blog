#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	float t[3],s,area;

	setlocale(LC_ALL,"");

	/* получим на входе длину трёх сторон */
	for( x=0; x<3; x++ )
	{
		wprintf(L"Введите длину стороны '%lc': ",L'A'+x);
		wscanf(L"%f",t+x);
	}

	/* получим полупериметр */
	s = ( t[0] + t[1] + t[2] ) / 2.0;
	wprintf(L"Полупериметр равен %.2f.\n",s);
	
	/* применим формулу Герона */
	area = sqrt( s * (s-t[0]) * (s-t[1]) * (s-t[2]) );
	wprintf(L"Площадь треугольника равна %.2f единицам.\n",area);

	return 0;
}

/*

Формула Герона – Решение
Опубликовано 8 октября 2025 года
https://c-for-dummies.com/blog/?p=7189

Формула Герона
Опубликовано 1 октября 2025 года
https://c-for-dummies.com/blog/?p=7173


Код
https://github.com/dangookin/C-For-Dummies-Blog/blob/master/2025_10-Exercise.c

*/
