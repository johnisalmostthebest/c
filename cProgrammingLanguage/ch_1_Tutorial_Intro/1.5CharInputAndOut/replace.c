#include <stdio.h>
//replace eacht tab with \t, each backspace with \b, and each backslash with \\

main()
{
	int c, tab, bspace, bslash;

	while((c = getchar()) != EOF){
		if(c == '\t') 
			putchar('\t');
		if(c == '\b')
			putchar('\b');
		if(c == '\\')
			putchar('\\');
	}
	putchar(c);
}
