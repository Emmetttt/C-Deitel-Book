#include <stdio.h>

/* A class of ten students took a quiz. The grades (integers in the range 0 to 100)
for this quiz are available to you. Determine the class average on the quiz */

main()
{
	int counter, grade, total, average;

	total = 0;
	counter = 1;

	/* processing phase */
	while (counter <= 10){
		printf("Enter Grade: ");
		scanf("%d", &grade);
		total = total + grade;
		counter = counter + 1;
	}

	/* termination phase */
	average = total / 10;
	printf("Ckass average is %d\n", average);
	
	return 0;
}