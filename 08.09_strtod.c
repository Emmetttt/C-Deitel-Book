/* Using strtod */
#include <stdio.h>
#include <stdlib.h>

main(){
	double d;
	char *string = "% are 51.2 admitted";
	char *stringPtr;

	d = strtod(string, &stringPtr); /* Receives two arguments, a string and
									   a pointer to a string. */

	printf("The string \"%s\" is converted to the\n", string);
	printf("double value %.2f and the string \"%s\"\n", d, stringPtr);

	return 0;
}