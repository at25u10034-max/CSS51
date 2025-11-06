#include <stdio.h>
#include <math.h>

int main() {
	int n, _n , ndigs, sigma = 0;

	printf("Enter a number (n): ");
	scanf("%d", &n);
	_n = n;
	if (n < 0) {
		printf("INVALID NUMBER: (%d)\n\n", n);
		return 1;
	}

	// Characteristic of log.
	ndigs = (n == 0 ? 1 : (int) log10(n) + 1);
	
	for (register int i = 1; i <= ndigs; i++){
		sigma += (int) pow(_n % 10, ndigs);
		_n /= 10;
	} 
	printf("(%d) %s an armstrong number.\n\n", n, (n == sigma ? "IS" : "IS NOT"));
	return 0;
}
