#include <stdio.h>

main(){
	int i, n[10] = {4, 3, 6, 88, 43, 2, 502, -1, 53, 2};

	printf("%s%13s\n", "Element", "Value");

	for (i = 0; i <= 9; i++){
		printf("%7d%13d\n", i, n[i]);
	}

	return 0;
}
