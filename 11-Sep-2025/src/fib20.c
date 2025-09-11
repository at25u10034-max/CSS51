#include <stdio.h>
#include <stdlib.h>

#define FOREVER while(1)

void iflush(void) {
	char _;
	while ((_ = getchar()) != '\n' && _ != EOF);
}

int main(void) {
	short prev = 1, prev2 = 0, curr;
	short i = 1;

	puts("Fibonacci Series: ");
	printf("%hd: %hd\n", i++, prev2);
	printf("%hd: %hd\n", i++, prev);

	while (i <= 20) {
		curr = prev + prev2;
		prev2 = prev;
		prev = curr;
		printf("%hd: %hd\n", i++, curr);
	}
	return 0;
}
