// Question: Sum using function.

#include <stdio.h>

int sigma(int a) {
	if (a == 0) return 0;
	return a + sigma(a - 1);
}

int main() {
	int a, s;
	printf("Enter non negative integer: ");
	scanf("%d", &a);
	
	if (a < 0) {
		printf("Invalid Number(s)!!");
		return 1;
	}
	
	s = sigma(a);
	printf("Sum of %d integers is %d.\n", a, s);
	return 0;
}


