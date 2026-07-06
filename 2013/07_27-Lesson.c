#include <stdio.h>

int main()
{
    printf("NULL is %p\n",(int *)NULL);
    printf("\\0 is %d\n",'\0');
    printf("Size of int = %ld\n",sizeof(int));
    printf("Size of NULL = %ld\n",sizeof(NULL));

    return(0);
}

/*
	The Difference Between NULL and Zero
	Posted on July 27, 2013
	https://c-for-dummies.com/blog/?p=177
*/



