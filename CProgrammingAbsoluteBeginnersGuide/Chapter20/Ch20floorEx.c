#include <stdio.h>
#include <math.h>

main()
{
float amtPaid, cost, change, dollars;

cost = 2.88;
amtPaid = 5.00;
change = amtPaid - cost;
dollars = floor(change);
printf("The change includes %.0f dollar bills.\n", dollars);
return 0;
}
