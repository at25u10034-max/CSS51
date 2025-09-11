#include <stdio.h>
#include <stdlib.h>

#define FOREVER while(1)

void iflush(void) {
	char _;
	while ((_ = getchar()) != '\n' && _ != EOF);
}

int rev(int n) {
	int _n = 0;
	while(n){
		_n *= 10;
		_n += n % 10;
		n /= 10;
	};

	return _n;
}

int main(void) {
	int n;

	FOREVER {
		fputs("Enter a number (n): ", stdout);
		scanf("%d", &n);
		iflush();
		if (n <= 0) {
			fprintf(stderr, "INVALID NUMBER: (%d)\n\n", n);
			continue;
		}
		printf("(%d) %s a palindrome.\n\n", n, (n == rev(n) ? "IS" : "IS NOT"));
	}
	
	return 0;
}
