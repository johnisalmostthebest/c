#include <stdio.h>

main()
{
	// total revenue = price * quantity
	
	float fPrice;
	int intQuantity;

	printf("determine the total revenue with the formula Total Revenue = Price * Quantity\n");
	printf("Enter the price per unit: ");
	scanf("%f", &fPrice);
	printf("Enter the quantity: ");
	scanf("%d", &intQuantity);
	printf("The total revenue is: $%.2f\n", fPrice * intQuantity);

}
