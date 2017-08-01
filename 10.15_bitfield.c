/* Using bitfield */
#include <stdio.h>
#include <math.h>

struct bitTest {
	unsigned a : 4; 
	unsigned b : 2; 
	unsigned c : 1;
	unsigned d : 32; /* really big one */
};

typedef struct bitTest Test;

main(){
	Test tester;

	tester.a = tester.b = tester.c = 0;

	for (int i = 0; i < 16; i++){
		tester.a++;
		tester.b++;
		tester.c++;
		printf("a = %d, b = %d, c = %d\n", 
			   tester.a, tester.b, tester.c);
	}

	tester.d = pow(2, 30);
	printf("d = %d\n", tester.d);

	return 0;
}