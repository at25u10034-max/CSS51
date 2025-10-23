// Move the zeros to the end of an array while preserving the order of the rest of the array.
#include <stdio.h>

int main() {
	int N, uN, temp;
	printf("Enter size of array: ");
	scanf("%d", &N);
	int data[N];
	uN = N;
	
	// I/P
	for (int i = 0; i < N; i++) {
		printf("Enter Value of Array A[%d]:", i);
		scanf("%d", &data[i]);
	}
	
	// Processing
	for (int i = 0; i < uN; i++) {
		if (data[i] != 0) continue;
		for (int k = i; k < uN - 1; k++) {
			temp = data[k];
			data[k] = data[k + 1];
			data[k + 1] = temp; 
		}
		i--; uN--; // As we moved an element.

	}

	// O/P
	printf("Array: \n");
	N == 0 ? printf("[") : printf("[%d", data[0]);
	for (int i = 1; i < N; i++) {
		printf(", %d", data[i]);
	}
	printf("]\n");
}
