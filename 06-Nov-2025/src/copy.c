// Question: Copy from one 2D array to another using ptrs.
#include <stdio.h>
#include <stdlib.h>

void printmatrix(int **, int, int);

int main() {

	int nrow, ncol;
	printf("Enter number of rows: ");
	scanf("%d", &nrow);
	printf("Enter number of columns: ");
	scanf("%d", &ncol);

	int **data = malloc(sizeof(int*) * nrow);
	int **deepcopy = malloc(sizeof(int*) * nrow);
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
		*(deepcopy + i) = malloc(sizeof(int) * ncol);
		for (register short j = 0; j < ncol; j++) {
			*(*(deepcopy + i) + j) = *(*(data + i) + j);
		}
	}

	printf("Deep Copy Matrix is: \n");
	printmatrix(deepcopy, nrow, ncol);
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
