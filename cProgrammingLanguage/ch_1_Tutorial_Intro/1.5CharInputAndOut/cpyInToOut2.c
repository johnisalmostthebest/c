#include <stdio.h>

/* copy input to output; 2nd version */

main()
{
	int c;

	while((c = getchar()) != EOF)
		while (c == ' '){
			c = getchar();
			if( c == ' '){
				c = "";
			}
				
		}
		putchar(c);
}
