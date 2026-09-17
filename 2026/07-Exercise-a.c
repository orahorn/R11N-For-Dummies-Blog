/*
https://c-for-dummies.com/blog/?p=7653
It’s All Greek!
Posted on July 1, 2026
*/ 

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

const wint_t diff=L'α' - L'Α';

wchar_t * toGupper(wchar_t *greek) {
	size_t len=wcslen(greek)+sizeof(L'\0');
	size_t i=0;
	wchar_t *upper = calloc(len,sizeof(wchar_t));
	wchar_t wc;
	
	for(i=0; i<len && (wc=greek[i]) != L'\0'; i++) {
		if(wc>=L'α'&& wc<=L'ω')
			wc-=diff;
		upper[i]=wc;
	}
	upper[len]=L'\0';

	return upper;
}

wchar_t * toGlower(wchar_t *greek) {
	size_t len=wcslen(greek)+sizeof(L'\0');
	size_t i=0;
	wchar_t *lower = calloc(len,sizeof(wchar_t));
	wchar_t wc;
	
	for(i=0; i<len && (wc=greek[i]) != L'\0'; i++) {
		if(wc>=L'Α'&& wc<=L'Ω')
			wc+=diff;
		lower[i]=wc;
	}
	lower[len]=L'\0';

	return lower;
}

void main(void) {
	char * locale=setlocale(LC_CTYPE, "");
	wprintf(L"LC_CTYPE=%s\n",locale);

	wchar_t *greek = L"Ξεσκεπαζω την Ψυχοφθορα Βδελυγμια";
	wprintf(L"Original:\n%ls\n", greek);

	wchar_t *ws=toGupper(greek);
	wprintf(L"ALL CAPS:\n%ls\n",ws);
	free(ws);

	ws=toGlower(greek);
	wprintf(L"lowercase:\n%ls\n",ws);
	free(ws);
}
