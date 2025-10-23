// Delete duplicate elements in an array.
// Cases:
/*
	1. Null array []
	2. Singleton [5]
	3. Unique Array [1,2,3,4,5]
	4. Repeated Array [1,1,1,1,1]
	5. Pattern Array [1,2,3,1,2,3]
	6. Random Array [1,5,7,6,1,4,7,1,55,2,56,7,6,2]
	7. Consecutive Repetitions [1,2,3,4,4,4,5,6,7,8,7]
	8. Repetitions at the end [1,2,3,4,5,5,5]
	9.      "       "   " start [1,1,1,2,3,4]
	
*/


#include <stdio.h>

int main() {
	int N, uN, icache = 0, datum, temp, found;
	printf("Enter size of array: ");
	scanf("%d", &N);
	int data[N], cache[N];

	uN = N; // uN Stores number of Unique elements.
	// I/P
	for (int i = 0; i < N; i++) {
		printf("Enter Value of Array A[%d]:", i);
		scanf("%d", &data[i]);
	}
	
	// Processing
	for (int i = 0; i < uN; i++) {
		datum = data[i];
		found = 0;
		for (int j = 0; j < icache; j++) {
			if (datum == cache[j]) {
				// Data is duplicate.
				found = 1;
				for (int k = i; k < uN - 1; k++) {
					temp = data[k];
					data[k] = data[k + 1];
					data[k + 1] = temp; 
				};

				i--; uN--; // Move index and limit back by one.
			} 
		}

		if (!found) cache[icache++] = datum; // Unique element.
	}

	// O/P
	printf("Total Number of Elements: %d\n", N);
	printf("Number of Unique Elements: %d\n", uN);
	printf("Unique Elements Array: \n");
	uN == 0 ? printf("[") : printf("[%d", data[0]);
	for (int i = 1; i < uN; i++) {
		printf(", %d", data[i]);
	}
	printf("]\n");
}
