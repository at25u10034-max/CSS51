int printf(const char*, ...);

#include <math.h>
#include <stdlib.h>

int main(int, const char**) {
	int a = rand(), b = rand();
	printf("Before swap: \n\ta: %d, b: %d\n\n", a, b);
	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	
	printf("After swap: \n\t a: %d, b: %d\n\n", a, b);
	return 0;
}

