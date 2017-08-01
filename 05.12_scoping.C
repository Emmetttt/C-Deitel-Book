/* Scoping */
#include <stdio.h>

void a(void); /* function prototypes */
void b(void);
void c(void);

int x = 1; /* Global variable */

main(){
	int x = 5; /* local variable to main */

	printf("local x in outer scope of main is %d\n", x);

	/* Start new scope within main */
	{
		int x = 7;
		printf("local x in inner scope of main is %d\n", x);
	}

	printf("local x in outer scope of main is %d\n", x);

	a();
	b();
	c();
	a();
	b();
	c();

	printf("local x in main is %d\n", x);
	return 0;
}

void a(void){
	int x = 25; /* Initialised each time x is called */

	printf("\nlocal x in a is %d after entering a\n", x);
	++x;
	printf("\nlocal x in a is %d after exiting a\n", x);
}

void b(void){
	static int x = 50; /* static initialization only first time b is called*/
	printf("\nlocal static x is %d on entering b\n", x);
	++x;
	printf("\nlocal static x is %d on exiting b\n", x);	
}

void c(void){
	printf("\nglobal x is %d on entering c\n", x);
	x*=10;
	printf("\nglobal x is %d on exiting c\n", x);
}






