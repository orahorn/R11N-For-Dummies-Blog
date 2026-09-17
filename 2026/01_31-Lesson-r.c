#include <stdio.h>

#define mouse_enable() printf("\e[?1000h")
#define mouse_disable() printf("\e[?1000l")

int main()
{
	/* включить мониторинг мыши */
	mouse_enable();

	getchar();

	/* очищаем */
	mouse_disable();	/* выключить мониторинг мыши */
	return 0;
}
