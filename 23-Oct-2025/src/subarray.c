// Write a program to take an array of size (n) having 0's and 1's. Find the length of the longest subarray having equal numbers of 0's and 1's.
// Sample: [1,0,0,1,0,1,1] -> [1,0,0,1,0,1] -> 6


// Brute force algorithm
#include <stdio.h>

int main() {
	int N, n0, n1, maxsize;
	printf("Enter size of array: ");
	scanf("%d", &N);
	int data[N];

	// I/P
	for (int i = 0; i < N; i++) {
		printf("Enter Value of Array A[%d]:", i);
		scanf("%d", &data[i]);
		if (data[i] != 1 && data[i] != 0) {
			printf("Invalid Data. Enter either 0 or 1.\n");
			return 1;
		}
	}


	// Processing
	for (int len = 1; len <= N; len++) {
		n0 = n1 = 0;
		for (int s = 0; s < N - len + 1; s++) {
			for (int i = s; i < s + len; i++) {
				data[i] ? n1++ : n0++;
			}
		}

		if (n0 == n1) maxsize = len;
	}

	// O/P
	printf("Maximum possible size of subarray: %d\n", maxsize);
}
