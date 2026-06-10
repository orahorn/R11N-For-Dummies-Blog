#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *in="Swap me";
	char *w1, *w2;
	int n=strlen(in);

	w1=(char *)malloc(n);
	w2=w1; // for restore w1 after go to the end

	// form word 1 & scan space in "in" string
	for(char c=*in; *in; in++){
		c=*in;
		if(!c || c==' ')
			break; //end of string or space detected
		*w1=c;
		w1++;

	}
	*w1=(char)0;
	w1=w2; // restore w1 string to the beginning
	// print rest of the string (second word):
	printf("%s ", in);
	puts(w1); // put first word
	free(w1);


	return EXIT_SUCCESS;
}
