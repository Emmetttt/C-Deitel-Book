#include <stdio.h>

/* UNION 
- variables share the same storage space, only 1 used at a time.
- Only one member can be referenced at one time
Operations:
- Assign a union to another union of the same type
- Taking the address (&) of a union
- Accessing the union members using the structure member operator*/

union number{
	int x;
	float y;
};

main(){
	union number value;

	value.x = 100;
	printf("%s\n%s\n%s%d\n%s%f\n\n", 
		   "Put a value in the integer member",
		   "and print both members.",
		   "int: ", value.x,
		   "float: ", value.y);

	value.y = 100.0;
	printf("%s\n%s\n%s%d\n%s%f\n\n", 
		   "Put a value in the integer member",
		   "and print both members.",
		   "int: ", value.x,
		   "float: ", value.y);

	return 0;
}