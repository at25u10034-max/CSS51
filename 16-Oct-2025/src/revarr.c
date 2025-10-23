// Reverse an array of 'n' elements.
// Reverse the second half of the elements.

// TODO

#include <stdio.h>

void printarr(size_t n, int arr[], const char* label) {
	printf("%s: [", label);

	for (size_t i = 0; i < n; i++) {
		printf("%d", arr[i]);
		if(i != n - 1) printf(", ") ;
	}
	puts("]");
}

void revarr(size_t n, int arr[]) {
	int t;
	size_t lim = n / 2;
	for (size_t i = 0; i < lim; i++) {
		t = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = t;
	}
}

void revhalf(size_t n, int arr[]) {
	if (!n) return;
	int t;
	size_t start = n / 2, lim = (3 * n - 2) / 4;
	
	for (size_t i = 0; i < lim - start; i++) {
		t = arr[i];
		arr[i] = arr[start + lim - i - 1];
		arr[start + lim - i - 1] = t;
	}
}

int main() {
	size_t n;
	printf("Enter the size of the array: ");
	scanf("%zu", &n);
	int data[n];

	// Separated input and processing for demonstration.
	for (size_t i = 0; i < n; i++) {
		printf("Enter number to store in data[%zu]: ", i);
		scanf("%d", &data[i]);
	}

	printarr(n, data, "Data");
	revarr(n, data);
	printarr(n, data, "Reversed Data");
	revarr(n, data);
	printarr(n, data, "Data");
	revhalf(n, data);
	printarr(n, data, "Second Half Reversed Data");
	return 0;
}
