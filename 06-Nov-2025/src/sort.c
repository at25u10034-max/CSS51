// Question: Sort all rows asc of 2D array using ptrs.
#include <stdio.h>
#include <stdlib.h>

void printmatrix(int **, int, int);

int main() {

	int nrow, ncol, max_idx, temp;
	int *curr_row;
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
		curr_row = *(data + i);
		for (register short j = ncol - 1; j > 0; j--) {
			max_idx = 0;
			for (register short k = 0; k <= j; k++) {
				if (*(curr_row + k) > *(curr_row + max_idx))
					max_idx = k;
			}
			// Swap Last and Max
			temp = *(curr_row + max_idx);
			*(curr_row + max_idx) = *(curr_row + j);
			*(curr_row + j) = temp;
		}
	}

	printf("Sorted Matrix is: \n");
	printmatrix(data, nrow, ncol);
	printf("\n");
	
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
