#include <stdio.h>

/* Pseudocode 
- Inputs the miles driven and gallons used and produces the mpg and overall avg
- initialise gallons, miles, mpg, totalmpg, count
- loop for gallons != -1
- 		scanf gallons, miles and mpg = miles / gallon
- 		totalmpg += mpg
- 		count += 1
- overall = totalmpg/count

*/

main()
{
	int count = 0, miles;
	float gallons, mpg, totalmpg = 0, average;

	printf("Enter the gallons used (-1 to end): ");
	scanf("%f", &gallons);

	while (gallons != -1){
		printf("Enter the miles driven: ");
		scanf("%d", &miles);
		mpg = miles / gallons;
		totalmpg += mpg;
		count++;
		printf("The miles / gallon for this tank was %.6f\n", mpg);
		printf("Enter the gallons used (-1 to end): ");
		scanf("%f", &gallons);
	}

	average = (float) totalmpg / count;
	printf("The overall average miles / gallon was %.6f\n", average);
	return 0;
}