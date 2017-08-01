#include <stdio.h>
/* Takes 10 inputs and prints the two largest numbers
- initialise counter, number, largest
- loop 10 scanf of number
- in same loop store if it is largest
- check if second largest
- print after loop
*/
main()
{
	int counter = 0, number, largest = 0, second_largest = 0;

	while (counter <= 10){
		printf("Enter an integer: ");
		scanf("%d", &number);
		if (number > largest){
			second_largest = largest;
			largest = number;
		}
		else if (number > second_largest){
			second_largest = number;
		}
		counter++;
	}

	printf("The largest number was %d\nThe second largest number was %d\n", largest, second_largest);
}	