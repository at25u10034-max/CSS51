// Question:

#include <stdio.h>

void swap(int*, int*);
int main() {
	int *a, *b;
	printf("Enter two integers: ");
	scanf("%d %d", a, b);

	printf("Before Swap: a = %d, b = %d.\n", *a, *b);
	swap(a, b);
	printf("After Swap: a = %d, b = %d.\n", *a, *b);
	return 0;
}

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}
