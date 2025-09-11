#include <stdio.h>
#include <stdlib.h>

#define FOREVER while(1)

void iflush(void) {
	char _;
	while ((_ = getchar()) != '\n' && _ != EOF);
}

int main(void) {
	int n, rev = 0;

	FOREVER {
		fputs("Enter a number (n): ", stdout);
		scanf("%d", &n);
		iflush();
		if (n < 0) {
			fprintf(stderr, "INVALID NUMBER: (%d)\n\n", n);
			continue;
		}
		
		while(n){
			rev *= 10;
			rev += n % 10;
			n /= 10;
		};
		printf("Reversed (%d) is: %d\n\n", n, rev);
		rev = 0;
	}
	return 0;
}
