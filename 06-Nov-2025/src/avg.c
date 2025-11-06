// Question: Find Avg. of each row and col in a 3x3 matrix using ptrs.

#include <stdio.h>
#include <stdlib.h>

void printmatrix(int **, int, int);

int main() {

	int **data = malloc(sizeof(int*) * 3);
	int rowsum, colsum;

	// I/P
	for (register short i = 0; i < 3; i++) {
		*(data + i) = malloc(sizeof(int) * 3);
		for (register short j = 0; j < 3; j++) {
			printf("Enter value of data[%hd][%hd]: ", i, j);
			// Get the address of ith row jth column.
			scanf("%d", *(data + i) + j);
		}
	}

	// Processing & O/P
	printf("Given Matrix is: \n");
	printmatrix(data, 3, 3);
	printf("\n");
	
	for (register short i = 0; i < 3; i++) {
		rowsum = 0; 
		colsum = 0;
		for (register short j = 0; j < 3; j++) {
			rowsum += *(*(data + i) + j);
			colsum += *(*(data + j) + i);
		}
		printf("Integer Average of row (%hd) is: %d.\n", i, rowsum / 3);
		printf("Integer Average of column (%hd) is: %d.\n", i, colsum / 3);

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
