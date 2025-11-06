#include <stdio.h>

int main(void) {
	int n; 
	long pi = 1;

	printf("Enter a number (n): ");
	scanf("%d", &n);
	if (n < 0) {
		printf("INVALID NUMBER: (%d)\n\n", n);
		return 1;
	}
	
	for (int i = 1; i <= n; i++) pi *= i; 
	printf("Factorial (%d) is: %ld\n\n", n, pi);
	return 0;
}
