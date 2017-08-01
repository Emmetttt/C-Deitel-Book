#include <stdio.h>
/* Takes 10 inputs and prints the largest number 
- initialise counter, number, largest
- loop 10 scanf of number
- in same loop store if it is largest
- print after loop
*/
main()
{
	int counter = 0, number, largest = 0;

	while (counter <= 10){
		printf("Enter an integer: ");
		scanf("%d", &number);
		if (number > largest){
			largest = number;
		}
		counter++;
	}

	printf("The largest number was %d\n", largest);
}	