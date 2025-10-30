// Question: Max using a function.

#include <stdio.h>

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int a,b,M;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);
	
	M = max(a, b);
	printf("max(%d, %d) = %d\n", a, b, M);
	return 0;
}
