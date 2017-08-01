#include <stdio.h>

/* grades using switch */

main()
{
	int input, count = 0, average = 0;

	printf("Input an integer to compute the average (9999 to quit): ");
	scanf("%d", &input);

	while (input != 9999){
		average += input;
		count += 1;
		printf("Input an integer to compute the average (9999 to quit): ");
		scanf("%d", &input);
	}

	if (count > 0){
		average /= count;
		printf("The average of the numbers is %d\n", average);
	} else {
		printf("No input\n");
	}

	return 0;
}