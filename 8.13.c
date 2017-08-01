/* Using gets and putchar */
#include <stdio.h>

main(){
	char sentence[80];
	void reverse(char*);

	printf("Enter a line of text: \n");
	gets(sentence); /* Inputs until new line or end-of-file char */

	printf("\nThe line of text backwards is:\n");
	reverse(sentence);

	return 0;
}

void reverse(char *s){
	if (s[0] == '\0')
		return;
	else {
		reverse(&s[1]);
		printf("%c", s[0]); /* Prints the character stored in s[0] */
	}
}