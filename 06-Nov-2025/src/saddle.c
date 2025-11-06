// Question: Find the Saddle Point(s) of a 2D Array using Pointers.
// Theory: Saddle Point of a 2D array is the smallest in row but largest in column.

#include <stdio.h>
#include <stdlib.h>

void printmatrix(int **, int, int);

int main() {

	int nrow, ncol, min_idx, is_saddle;
	printf("Enter number of rows: ");
	scanf("%d", &nrow);
	printf("Enter number of columns: ");
	scanf("%d", &ncol);

	int **data = malloc(sizeof(int*) * nrow);

	// I/P
	for (register short i = 0; i < nrow; i++) {
		*(data + i) = malloc(sizeof(int) * ncol);
		for (register short j = 0; j < ncol; j++) {
			printf("Enter value of data[%hd][%hd]: ", i, j);
			// Get the address of ith row jth column.
			scanf("%d", *(data + i) + j);
		}
	}

	// Processing & O/P
	printf("Given Matrix is: \n");
	printmatrix(data, nrow, ncol);
	printf("\n");

	for (register short i = 0; i < nrow; i++) {
		min_idx = 0;
		is_saddle = 1;
		// Find minimum of row.
		for (register short j = 0; j < ncol; j++)
			if (*(*(data + i) + j) < *(*(data + i) + min_idx))
				min_idx = j;

		for (register short j = 0; j < nrow; j++) {
			if (*(*(data + j) + min_idx) > *(*(data + i) + min_idx)) {
				is_saddle = 0;
				break;
			}
		}

		if (is_saddle) 
			printf("Element @ [%hd][%hd] is a saddle w/val = %d.\n", i, min_idx, *(*(data + i) + min_idx));
		
	}
	return 0;
}


void printmatrix(int **data, int nrow, int ncol) {
	for (register short i = 0; i < nrow; i++) {
		printf("\n| ");
		for (register short j = 0; j < ncol; j++) {
			printf("%5d ", *(*(data + i) + j));
		}
		printf("|");
	}
	printf("\n");
}
