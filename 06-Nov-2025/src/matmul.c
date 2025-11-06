// Question: Multiply Matrices using ptrs.
#include <stdio.h>
#include <stdlib.h>

void printmatrix(int **, int, int);

int main() {

	int nrowA, ncommon, ncolB;
	printf("Enter number of rows of Matrix A: ");
	scanf("%d", &nrowA);
	printf("Enter number of columns of A (same as rows of B): ");
	scanf("%d", &ncommon);
	printf("Enter number of columns of B: ");
	scanf("%d", &ncolB);

	int **dataA = malloc(sizeof(int*) * nrowA);
	int **dataB = malloc(sizeof(int*) * ncommon);
	int **output = malloc(sizeof(int*) * nrowA);
	
	// I/P

	// Matrix A
	for (register short i = 0; i < nrowA; i++) {
		*(dataA + i) = malloc(sizeof(int) * ncommon);
		for (register short j = 0; j < ncommon; j++) {
			printf("Enter value of First Matrix[%hd][%hd]: ", i, j);
			// Get the address of ith row jth column.
			scanf("%d", *(dataA + i) + j);
		}
	}

	// Matrix B
	for (register short i = 0; i < ncommon; i++) {
		*(dataB + i) = malloc(sizeof(int) * ncolB);
		for (register short j = 0; j < ncolB; j++) {
			printf("Enter value of Second Matrix[%hd][%hd]: ", i, j);
			// Get the address of ith row jth column.
			scanf("%d", *(dataB + i) + j);
		}
	}

	// Processing & O/P
	printf("Given First Matrix is: \n");
	printmatrix(dataA, nrowA, ncommon);
	printf("\n");

	printf("Given Second Matrix is: \n");
	printmatrix(dataB, ncommon, ncolB);
	printf("\n");

	for (register short i = 0; i < nrowA; i++) {
		*(output + i) = malloc(sizeof(int) * ncolB);
		for (register short j = 0; j < ncolB; j++) {		
			*(*(output + i) + j) = 0;
			for (register short k = 0; k < ncommon; k++) {
				*(*(output + i) + j) += *(*(dataA + i) + k) * *(*(dataB + k) + j);
			}
		}
	}

	printf("A*B Matrix is: \n");
	printmatrix(output, nrowA, ncolB);
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
