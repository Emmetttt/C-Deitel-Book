/* Converting lowercase letters to uppercase letters
   using a non-constant pointer to non-constant data */

#include <stdio.h>

void convertToUppercase(char *); /* Returns nothing,
									takes pointer to mem
									adress of a char */

main(){
	char string[] = "characters";

	printf("The string before conversion is: %s\n", string);
	convertToUppercase(string);
	printf("The string after conversion is: %s\n", string);

	return 0;
}

void convertToUppercase(char *s){
	while (*s != '\0'){

		if (*s >= 'a' && *s <= 'z')
			*s -= 32; /* Asci A is 32 before a */

		++s; /* Next character */
	}
}