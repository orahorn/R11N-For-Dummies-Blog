#include <wchar.h>
#include <locale.h>
#include <stdio.h>

int main()
{
	int coins_input,quarters,dimes,nickels,pennies;

	setlocale(LC_ALL,"");

	quarters = dimes = nickels = pennies = 0;
	coins_input = 131;

	wprintf(L"Делаем размен для %d цент(а|ов):\n",coins_input);
	while(coins_input)
	{
		if(coins_input > 25)
		{
			quarters++;
			coins_input -= 25;
		}
		else if (coins_input > 10)
		{
			dimes++;
			coins_input -= 10;
		}
		else if (coins_input > 5)
		{
			nickels++;
			coins_input -= 5;
		}
		else
		{
			pennies++;
			coins_input--;
		}
	}
	wprintf(L"%2d квотер(а|ов)\n%2d дайм(а|ов)\n%2d никел(ь|я|ей)\n%2d пенни\n",
			quarters,
			dimes,
			nickels,
			pennies);

	return(0);
}

/*

Делая размен - Решение
Опубликовано 8 декабря 2014 года.
https://c-for-dummies.com/blog/?p=1100

Делая размен
Опубликовано 1 декабря 2014 года
https://c-for-dummies.com/blog/?p=1083

Полный исходный код:
https://c-for-dummies.com/blog/wp-content/uploads/2014/11/12exercise.c

Подробности из Википедии:

* [квотер](https://ru.wikipedia.org/wiki/%D0%A7%D0%B5%D1%82%D0%B2%D0%B5%D1%80%D1%82%D1%8C_%D0%B4%D0%BE%D0%BB%D0%BB%D0%B0%D1%80%D0%B0_(%D0%A1%D0%A8%D0%90)
)
* 


*/

