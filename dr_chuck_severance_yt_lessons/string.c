/* cc_02_03.c  */

#include <stdio.h>

int main() {
	/* predefine the character array */
	char name[100];

	printf("Enter name\n");

	/* scan up to so many characters  */
	scanf("%100s", name);
	printf("Hello %s\n", name);
}
