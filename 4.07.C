#include <stdio.h>

/* grades using switch */

main()
{
	int grade;
	int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;

	printf("Enter the letter grades.\n");
	printf("Enter the EOF character to end input.\n");

	while ( ( grade = getchar() ) != EOF) { /* ( grade = getchar() ) executed first*/

		switch (grade) {

			case 'A': case 'a':
				++aCount;

			case 'B': case 'b':
				++bCount;
				break;

			case 'C': case 'c':
				++cCount;
				break;

			case 'D': case 'd':
				++dCount;
				break;

			case 'F': case 'f':
				++fCount;
				break;

			case '\n': case ' ':
				break;

			default:
				printf("Incorrect letter grade entered.");
				printf(" Enter a new grade.\n");
				break;

		}

	}

	printf("\nTotals for each letter grade are:\n");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);

	return 0;
}