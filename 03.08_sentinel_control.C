#include <stdio.h>

/* A class of ten students took a quiz. The grades (integers in the range 0 to 100)
for this quiz are available to you. Determine the class average on the quiz */
/* Using sentinel control */

main()
{
	/* initialisation phase */
	float average;
	int total, counter, grade;

	total = 0;
	counter = 0;

	/* processing phase */
	printf("Enter the first grade (enter -1 to quit): ");
	scanf("%d", &grade);

	while (grade != -1){
		total = total + grade;
		counter = counter + 1;
		printf("Enter the next grade (enter -1 to quit): ");
		scanf("%d", &grade);
	}

	/* termination phase */
	if (counter != 0){
		average = (float) total / counter;
		printf("The average is %.2f\n", average);
	} else {
		printf("No grades were entered\n");
	}

	return 0;
}