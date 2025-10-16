// Write a program to take an input of 10 floats and print
// the array in reverse.


#include <stdio.h>

int main() {
	float data[10];

	// Separated input and processing for demonstration.
	for (short i = 0; i < 10; i++) {
		printf("Enter float to store in data[%hd]: ", i);
		scanf("%f", &data[i]);
	}

	printf("Reversed array (correct to two places) is: \n\t");

	for (short i = 10; --i >= 0;)
		printf("%.2f ", data[i]);
	puts("");

	return 0;
}
