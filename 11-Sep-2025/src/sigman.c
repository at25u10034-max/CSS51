#include <stdio.h>
#include <stdlib.h>

#define FOREVER while(1)

void iflush(void) {
	char _;
	while ((_ = getchar()) != '\n' && _ != EOF);
}

int main(void) {
	int n, sigma = 0;

	FOREVER {
		fputs("Enter a number (n): ", stdout);
		scanf("%d", &n);
		iflush();
		if (n <= 0) {
			fprintf(stderr, "INVALID NUMBER: (%d)\n\n", n);
			continue;
		}

		for (register int i = 1; i <= n; i++) sigma += i; 
		printf("Sum of first (%d) natural numbers is: %d\n\n", n, sigma);
		sigma = 0;
	}
	return 0;
}
