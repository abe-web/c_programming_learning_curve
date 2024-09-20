/* cc_02_04.c  */

#include <stdio.h>

int main() {
	char line[1000];
	printf("Enter line of text\n");

	/*  scan, match any character that is not a new line */
	scanf("%[^\n]1000s", line);
	printf("Line: %s\n", line);
}
