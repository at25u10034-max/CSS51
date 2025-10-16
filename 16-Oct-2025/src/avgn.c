// Write a program to find the average of 'n' numbers 
// using an array.

#include <stdio.h>

int main() {
	size_t n;
	double avg;
	printf("Enter the size of the array: ");
	scanf("%zu", &n);
	int data[n], sum = 0;

	// Separated input and processing for demonstration.
	for (size_t i = 0; i < n; i++) {
		printf("Enter number to store in data[%zu]: ", i);
		scanf("%d", &data[i]);
	}

	for (size_t i = 0; i < n; i++)
		sum += data[i];

	avg = (double) sum / n;

	printf("Average of %zu numbers = %.2lf\n", n, avg);
	return 0;
}
