/* cc_02_06.c  */

#include <stdio.h>

int main () {
	char line[1000];
	FILE *hand;
	hand = fopen("romeo.txt", "r");
	while( fgets(line, 1000, hand) != NULL) {
		printf("%s", line);
	}
	return 0;
}
