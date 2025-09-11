#include <stdio.h>
#include <stdlib.h>

#define FOREVER while(1)

void iflush(void) {
	char _;
	while ((_ = getchar()) != '\n' && _ != EOF);
}

int main(void) {
	int n, _n, sigma = 0;

	FOREVER {
		fputs("Enter a number (n): ", stdout);
		scanf("%d", &n);
		_n = n;
		iflush();
		if (n < 0) {
			fprintf(stderr, "INVALID NUMBER: (%d)\n\n", n);
			continue;
		}

		while (_n) {
			sigma += _n % 10;
			_n /= 10;
		} 
		
		printf("Sum of digits of (%d) is %d.\n\n", n, sigma);
		sigma = 0;
	}
	return 0;
}
