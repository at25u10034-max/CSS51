// Find the maximum value of 10 numbers in an array.

#include <stdio.h>
#include <limits.h>

int main() {
	int data[10], max = 0;

	// Separated input and processing for demonstration.
	for (short i = 0; i < 10; i++) {
		printf("Enter number to store in data[%hd]: ", i);
		scanf("%d", &data[i]);
	}

	for (short i = 0; i < 10; i++)
		if(data[i] > max)
			max = data[i];

	printf("Maximum of 10 numbers = %d\n", max);
	return 0;
}
