#include <stdio.h>

main()
{
	//commission = rate * (salesprice - cost)
	
	float fltSalesPrice, fltCost;
	int intRate;

	printf("Commission formula: commission = rate(salesprice - cost)\nPlease enter the commission rate as a whole number(1, 5, 10): ");
	scanf("%d", &intRate);
	printf("Enter the sales price: ");
	scanf("%f", &fltSalesPrice);
	printf("Enter the cost: ");
	scanf("%f", &fltCost);
	printf("Commission: $%.2f\n", ( .01 * intRate) * (fltSalesPrice - fltCost));
	
}	
