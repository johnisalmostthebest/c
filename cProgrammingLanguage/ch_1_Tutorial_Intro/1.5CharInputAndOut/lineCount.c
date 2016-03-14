#include <stdio.h>

// count lines in input
main()
{
	int c, nl, blank, tab;
	nl = 1; 
	tab = blank = 0;
	while ((c = getchar()) != EOF){
		if(c == '\n')
			++nl;
		if(c == '\t')
			++tab;
		if(c == ' ')
			++blank;
	}
	printf("\nlines: %d\ntabs: %d\nspaces: %d\n", nl, tab, blank);
}
