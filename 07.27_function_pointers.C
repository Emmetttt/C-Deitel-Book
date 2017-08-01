/* Array of pointers to functions */
#include <stdio.h>

void function1(int);
void function2(int);
void function3(int);

main(){
	void (*f[3])(int) = {function1, function2, function3};
	/* f is an array of 3 pointers to functions that take an int
	   as an argument and that return void. */
	int choice;

	printf("Enter a number between 0 and 2, 3 to end: \n");
	scanf("%d", &choice);

	while (choice >= 0 && choice < 3){
		(*f[choice])(choice);
		/* f[choice] selects the pointer at location choice in the array.
		   The pointer is dereferenced to call the function.
		   Choice is passed as the argument to the function*/
		printf("Enter a number between 0 and 2, 3 to end: \n");
		scanf("%d", &choice);		
	}

	printf("You entered 3 to end.\n");

	return 0;
}

void function1(int a){
	printf("You entered %d to function1 was called\n\n", a);
}

void function2(int b){
	printf("You entered %d to function2 was called\n\n", b);
}

void function3(int c){
	printf("You entered %d to function3 was called\n\n", c);
}