/* Using atoi */
#include <stdio.h>
#include <stdlib.h>

main(){
	int d;

	d = atoi("24234");
	printf("%s%d\n%s%d\n", 
		   "The string \"24234\" converted to double is ", d,
		   "The converted value minus 99 is ", d-99);

	return 0;
}