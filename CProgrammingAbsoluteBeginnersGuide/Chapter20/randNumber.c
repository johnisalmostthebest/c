/* This program tests how to get random numbers within certain ranges */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main()
{
time_t t;
int random, i;
srand(time(&t));
printf("this prints 10 random numbers between 5 and 20.\n");
for(i = 0; i < 10; i++)
{
	random = (rand() % 15) + 5;
	printf("%d\n", random);
}
return 0;
}

