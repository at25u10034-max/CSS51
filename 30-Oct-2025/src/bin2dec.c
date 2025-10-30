// Question: 7. Write a Program to convert Binary number to Decimal using Function.

#include <stdio.h>
#include <math.h>

int bin2dec(long bin, int e) {
	if (!bin) return 0;
	register short digit = bin % 10;
	if (digit != 0 && digit != 1) {
		printf("Invalid Number entered!\n");
		return -1;
	}
	return pow(2, e) * digit + bin2dec(bin / 10, e + 1); 
}

int main() {
	long b;
	int d;
	printf("Enter a number in binary form: ");
	scanf("%ld", &b);

	d = bin2dec(b, 0);
	if (d != -1)
		printf("Decimal form of given number is: %d\n", d);

	return 0;
}
