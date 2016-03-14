// Example program #2 from Chapter 10 of Absolute Beginner's Guide to 
// C, 3rd Edition
// File Chapter10ex2.c

/* This program also increases a counter from 1 to 5, printing updates
 * and then counts it back down to 1. However, it uses compound operators*/

#include <stdio.h>

main()
{

	int ctr = 0;

	ctr += 1; // increase counter to 1
	printf("Counter is at %d.\n", ctr);
	ctr += 1; // increase counter to 2
	printf("Counter is at %d.\n", ctr);

	printf("Counter is at %d.\n", ctr += 1);
	ctr += 1; // increase counter to 4
	printf("Counter is at %d.\n", ctr);

	printf("Counter is at %d.\n", ctr += 1);
	ctr = ctr - 1; // decreases counter to 4
	printf("Counter is at %d.\n", ctr);
	printf("Counter is at %d.\n", ctr -= 1);
	printf("Counter is at %d.\n", ctr -= 1);
	printf("Counter is at %d.\n", ctr -= 1);

	return 0;

}
