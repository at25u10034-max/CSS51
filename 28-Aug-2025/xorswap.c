#include <stdio.h>

int main(int, const char**) {
	int a, b;
	printf("Enter two numbers separated by space: ");
	scanf("%d %d", &a, &b);
	printf("Before swap: \n\ta: %d, b: %d\n\n", a, b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("After swap: \n\t a: %d, b: %d\n\n", a, b);
	return 0;
}

