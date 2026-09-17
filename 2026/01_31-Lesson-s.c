#include <stdio.h>

#define mouse_enable() printf("\e[?1000h")
#define mouse_motion() printf("\e[?1003h")
#define mouse_motion_disable() printf("\e[?1003l")
#define mouse_disable() printf("\e[?1000l")

int main()
{
	/* ўключаем адлюстраванне стану кнопак і перамяшчэння мышы */
	mouse_enable();
	mouse_motion();

	getchar();

	/* ачыстка */
	mouse_disable(); /* адключаем адлюстраванне стану кнопак мышкі */
	mouse_motion_disable(); /* -//- перасоўванняў -//- */
	return 0;
}
