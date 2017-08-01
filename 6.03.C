#include <stdio.h>

main(){
	int n[10], i;
	int x[10] = {0};

	for (i = 0; i <= 9; i++){
		n[i] = 0;
	}

	printf("%s%13s\n", "Element", "Value");
	for (i = 0; i <= 9; i++){
		printf("%7d%13d\n", i, n[i]);
	}

	printf("%s%13s\n", "Element", "Value");
	for (i = 0; i <= 9; i++){
		printf("%7d%13d\n", i, x[i]);
	}

	return 0;
}
