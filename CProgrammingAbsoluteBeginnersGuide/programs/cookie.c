#include <stdio.h>
#include <stdlib.h>



main()
{
	int iRandomNum = 0;
	srand(time(0));

	iRandomNum = (rand() % 4) + 1;
	
	printf("\nFortune Cookie - Chapter 3\n");

	switch (iRandomNum)
	{
		case 1:
			printf("\nYou will meet a new friend today.\n");
			break;
		case 2:
			printf("\nYou will enjoy a long and happy life.\n");
			break;
		case 3:
			printf("\nOpportunity knocks softly. Can you hear it?\n");
			break;
		case 4:
			printf("\nYou'll be financially rewarded for your good deeds.\n");
			break;
	} // end switch

	printf("\nLucky lotto numbers: ");
	printf("%d ", (rand() % 49) + 1);
	printf("%d ", (rand() % 49) + 1);
	printf("%d ", (rand() % 49) + 1);
	printf("%d ", (rand() % 49) + 1);
	printf("%d ", (rand() % 49) + 1);
	printf("%d\n", (rand() % 49) + 1);

}//end main function
