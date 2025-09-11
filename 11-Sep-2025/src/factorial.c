#include <stdio.h>
#include <stdlib.h>

#define FOREVER while(1)

void iflush(void) {
	char _;
	while ((_ = getchar()) != '\n' && _ != EOF);
}

int main(void) {
	int n, pi = 1;

	FOREVER {
		fputs("Enter a number (n): ", stdout);
		scanf("%d", &n);
		iflush();
		if (n < 0) {
			fprintf(stderr, "INVALID NUMBER: (%d)\n\n", n);
			continue;
		}
		
		for (register int i = 1; i <= n; i++) pi *= i; 
		printf("Factorial (%d) is: %d\n\n", n, pi);
		pi = 1;
	}
	return 0;
}
