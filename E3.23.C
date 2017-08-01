#include <stdio.h>
/* prints 1 to 10 side-by-side with spaces between each */

main()
{
	int number = 1;

	while (number <= 10){
		printf("%d   ", number);
		number++;
	}
}	