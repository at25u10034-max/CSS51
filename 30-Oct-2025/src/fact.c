// Question: Factorial value using a function.

#include <stdio.h>

long fact(int n) {
	if (n == 0)
		return 1;
	return n * fact(n - 1);
}

int main() {
	long f;
	int b;
	printf("Enter a number: ");
	scanf("%d", &b);
	
	if (b < 0) {
		printf("Invalid Number!!");
		return 1;
	} 
	f = fact(b);
	printf("%d! = %ld\n", b, f);

	return 0;
}
