/* This program  prints numbers within a certain ranges */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main()
{
int remainder, i, divisor, divider;
divisor = divider = 100;
printf("this prints numbers between 5 and 20.\n");
for(i = 0; i < 100; i++)
{
	remainder =(divisor % divider);
	printf("%d %% %d = %d\n", divisor, divider, remainder);
	divider--;
}
return 0;
}

