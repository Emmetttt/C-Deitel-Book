#include <stdio.h>

/* A class of ten students took a quiz. The grades (integers in the range 0 to 100)
for this quiz are available to you. Determine the class average on the quiz */
/* Using sentinel control */

main()
{
	int c;

	c = 5;
	printf("%d\n", c);
	printf("%d\n", c++);
	printf("%d\n\n", c);

	c = 5;
	printf("%d\n", c);
	printf("%d\n", ++c);
	printf("%d\n", c);
	return 0;
}