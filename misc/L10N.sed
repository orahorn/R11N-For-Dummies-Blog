1i#include <wchar.h>
1i#include <locale.h>
/^{/a\\tsetlocale(LC_ALL,"");\n
s/ctype.h/wctype.h/
s/char /wchar_t /
s/puts("\([^"]*\)");/fputws("\1\\n",stdout);/
s/fputs(/fputws(/
s/fputc(/fputwc(/
s/isgraph(/iswgraph(/
s/isprint(/iswprint(/
s/islower(/iswlower(/
s/isupper(/iswupper(/
s/isdigit(/iswdigit(/
s/isalpha(/iswalpha(/
s/isalnum(/iswalnum(/
s/isxdigit(/iswxdigit(/
s/tolower(/towlower(/
s/toupper(/towupper(/
s/putchar(/putwchar(/
s/printf(/wprintf(/
s/%\([0-9]*\)s/%\1ls/g
s/%c/%lc/g
s/fprintf(/fwprintf(/
s/fgets(/fgetws(/
s/fgetc(/fgetwc(/
s/getc(/getwc(/
s/scanf(/wscanf(/
s/strtol(/wcstol(/
s/"\([^"]*\)"/L"\1"/g
s/'\([^']*\)'/L'\1'/g
s/EOF/WEOF/g

