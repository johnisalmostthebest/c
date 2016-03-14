#include <stdio.h>

main()
{
	int intSelection = 0;
	float fltTransAmount = 0.0;
	float fltBalance = 100.25;

	printf("\n\tATM\n");
	printf("\n1\tDeposit Funds\n");
	printf("\n2\tWithdraw Funds\n");
	printf("\nEnter your selection: ");
	scanf("%d", &intSelection);

	if (intSelection == 1) {
		printf("\nEnter fund amount to deposit: $");
		scanf("%f", &fltTransAmount);
		printf("\nYour new balance is $%.2f\n", fltBalance + fltTransAmount);
	} // end if

	if (intSelection == 2){
		printf("\nEnter fund amount to withdraw: ");
		scanf("%f", &fltTransAmount);

		if(fltTransAmount > fltBalance)
			printf("\nInsufficient funds\n");
		else
			printf("\nYour new balance is $%.2f\n", fltBalance - fltTransAmount);
	}
}
