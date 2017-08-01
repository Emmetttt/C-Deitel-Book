#include <stdio.h>

main()
{
	int number = 3;

	printf("A\tA+2\tA+4\tA+6\n");
	while (number <= 15){
		printf("%d\t%d\t%d\t%d\n", number, number+2, number+4, number+6);
		number+=3;
	}
}	