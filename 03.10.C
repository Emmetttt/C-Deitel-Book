#include <stdio.h>

/* A class of ten students took a quiz. The grades (integers in the range 0 to 100)
for this quiz are available to you. Determine the class average on the quiz */
/* Using sentinel control */

main()
{
	/* initialisation phase */
	int passes = 0, failures = 0, student = 1, result;

	/* processing phase */
	/* Input ten quiz grades and count passes and failures */
	while (student <= 10){
		printf("Enter the result of the student: ");
		scanf("%d", &result);

		if (result >= 60){
			passes += 1;
		}
		else {
			failures += 1;
		}
		student += 1;
	}

	/* termination phase */
	/* Print a summary of the exam results and decide if tuition should be raised */
	printf("%d students passed.\n", passes);
	printf("%d students failed.\n", failures);
	printf("%s\n", passes >= 8 ? "Raise tuition fees" : "Do not raise tuition fees");
	if (passes >= 8){
		printf("Raise tuition fees\n");
	}

	return 0;
}