/* Using gets and putchar */
#include <stdio.h>

main(){
	char c, sentence[80];
	int i = 0;

	puts("Enter a line of text:"); /* Prints the string followed by '\n' */
	while ( (c = getchar()) != '\n')
		sentence[i++] = c;

	sentence[i] = '\0';
	puts("\nThe line entered was:");
	puts(sentence);

	return 0;
}