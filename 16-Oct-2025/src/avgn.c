// Write a program to find the average of 'n' numbers 
// using an array.

#include <stdio.h>

int main() {
	int n;
	double avg;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int data[n], sum = 0;

	// Separated input and processing for demonstration.
	for (int i = 0; i < n; i++) {
		printf("Enter number to store in data[%d]: ", i);
		scanf("%d", &data[i]);
	}

	for (int i = 0; i < n; i++)
		sum += data[i];

	avg = (double) sum / n;

	printf("Average of %d numbers = %.2lf\n", n, avg);
	return 0;
}
