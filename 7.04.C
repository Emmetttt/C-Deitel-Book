/* POINTERS */
#include <stdio.h>

main(){
	int a; /* a is an integer */
	int *aPtr; /* aPtr is a pointer to an integer */

	a = 7;
	aPtr = &a;	/* aPtr is set to adress of a */

	printf("The adress of a is %p\n", &a);
	printf("The value of aPtr is %p\n\n", aPtr);

	printf("The value of a is %d\n", a);
	printf("The value of *aPtr is %d\n\n", *aPtr);

	printf("Proving that * and & are complements of eachother.\n");
	printf("&*aPtr = %p\n", &*aPtr);
	printf("*&aPtr = %p\n", *&aPtr);

	return 0;
}