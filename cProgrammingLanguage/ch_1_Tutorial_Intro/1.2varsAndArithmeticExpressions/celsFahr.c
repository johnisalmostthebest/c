#include <stdio.h>

/* print celsius to fahrenheit table for cels = 0, 20, ..., 300; floating point version*/
main()
	{
		float fahr, celsius;
		int lower, upper, step;

		lower = 0;	/* lower limit of temperature table */
		upper = 100;	//upper limit
		step = 10;	// step size
		printf("\n********************\n");
		printf("Celsius to Fahrenheit");
		printf("\n********************\n\n");
		celsius = lower;
		while (celsius <= upper) {
			fahr = (celsius * (9.0/5.0)) + 32.0;
			printf("%3.0f*C\t%6.1f*F\n", celsius, fahr);
			celsius = celsius + step;
		}
	}
