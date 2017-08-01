/* Using strtod */
#include <stdio.h>
#include <stdlib.h>

main(){
	long x;
	char *string = "-432523abc", *remainderPtr;

	x = strtol(string, &remainderPtr, 0); /* 3 arguments, a string containing
											 the character sequence to be converted,
											 the pointer to assign the location of the
											 first character after the conversion, and
											 an integer to specify the base of the value
											 being converted*/

	printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n", 
		   "The original string is ", string,
		   "The converted value is ", x,
		   "The remainder of the original string is ", remainderPtr,
		   "The converted value plus 4545 is ", x+4545);

	return 0;
}