#include <stdio.h>

main()
{
	int number = 1;

	printf("N\t10*N\t100*N\t1000*N\n");
	while (number <= 10){
		printf("%d\t%d\t%d\t%d\n", number, number*10, number*100, number*1000);
		number++;
	}
}	