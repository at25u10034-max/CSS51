#include <stdio.h>

int main(void) {
	short prev = 1, prev2 = 0, curr;
	short i = 1;

	printf("Fibonacci Series: \n");
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
