# R11N-For-Dummies-Blog
# Russification for Dummies blog

This is a repost of the famous blog
[C for Dummies](https://c-for-dummies.com/blog/) 
[Dan Gookin](https://en.wikipedia.org/wiki/Dan_Gookin).
It is based on his recent work
[github repository](https://github.com/dangookin/C-For-Dummies-Blog),
as well as manually translated and corrected C source files
from the blog between 2013 and 2019 years.

Examples are arranged by year in the directories `2013/` ... `2026/`.
In catalogs, names are truncated to the month and day of publication.
Suffix continuity is also maintained, with several examples
in a single post ending in `-a.c`, `-b.c`, etc.
Similarly, where possible, the following are added:

* `-r.c` - examples with Russian letters (more common).
* `-s.c` - -//- in some other Slavic language (less common).

The `misc/` directory contains the following files:

* `clean.sh` - cleaning up example code compiled on Linux
* `L11N.sed` - a template for processing English source examples
from functions and writing in 
[ASCII](https://en.wikipedia.org/wiki/ASCII) format to 
[wide character](https://en.wikipedia.org/wiki/Wide_character)
`wchar_t`.
Run: `sed -f L11N.sed source_file_in.c > result_for_localization.c`.

Compilation and performance were performed using the
[gcc](https://en.wikipedia.org/wiki/GNU_Compiler_Collection)
and [tcc](https://en.wikipedia.org/wiki/Tiny_C_Compiler)
compilers on a Debian-based operating system (OS). The standard
library is GNU Lib C. The programs were built using 
[GNU make](https://www.gnu.org/software/make/),
with initialization of the variables `$CC`, `$CFLAGS`, `$LDLIBS`,
and so on.
