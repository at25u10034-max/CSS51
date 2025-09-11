#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FOREVER while(1)

void iflush(void) {
	char _;
	while ((_ = getchar()) != '\n' && _ != EOF);
}


int main(void) {
	int n, _n , ndigs, sigma = 0;

	FOREVER {
		fputs("Enter a number (n): ", stdout);
		scanf("%d", &n);
		_n = n;
		iflush();
		if (n < 0) {
			fprintf(stderr, "INVALID NUMBER: (%d)\n\n", n);
			continue;
		}

		ndigs = (n == 0 ? 1 : (int) log10(n) + 1);
		
		for (register int i = 1; i <= ndigs; i++){
			sigma += (int) pow(_n % 10, ndigs);
			_n /= 10;
		} 
		printf("(%d) %s an armstrong number.\n\n", n, (n == sigma ? "IS" : "IS NOT"));
		sigma = 0;
	}
	return 0;
}
