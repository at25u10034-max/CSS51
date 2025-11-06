// Question: Sum of Diagonals using ptrs.
#include <stdio.h>
#include <stdlib.h>

void printmatrix(int **, int, int);

int main() {

	int size, sum = 0;
	printf("Enter size of Square Matrix: ");
	scanf("%d", &size);

	int **data = malloc(sizeof(int*) * size);
	int **d1 = malloc(sizeof(int*));
	int **d2 = malloc(sizeof(int*));
	int **dd = malloc(sizeof(int*));

	// I/P
	for (register short i = 0; i < size; i++) {
		*(data + i) = malloc(sizeof(int) * size);
		for (register short j = 0; j < size; j++) {
			printf("Enter value of data[%hd][%hd]: ", i, j);
			// Get the address of ith row jth column.
			scanf("%d", *(data + i) + j);
		}
	}

	// Processing & O/P
	printf("Given Matrix is: \n");
	printmatrix(data, size, size);
	printf("\n");

	*d1 = malloc(sizeof(int) * size);
	for (register short i = 0; i < size; i++) {
		*(*d1 + i) = *(*(data + i) + i); 
	}

	printf("First Diagonal is: \n");
	printmatrix(d1, 1, size);
	printf("\n");

	*d2 = malloc(sizeof(int) * size);
	for (register short i = 0; i < size; i++) {
		*(*d2 + i) = *(*(data + i) + size - i - 1); 
	}

	printf("Second Diagonal is: \n");
	printmatrix(d2, 1, size);
	printf("\n");

	*dd = malloc(sizeof(int) * size);
	for (register short i = 0; i < size; i++) {
		*(*dd + i) = *(*d1 + i) + *(*d2 + i);
	}
	
	printf("Sum of Diagonals is: \n");
	printmatrix(dd, 1, size);
	printf("\n");

	for (register short i = 0; i < size; i++) {
		sum += *(*dd + i);
	}

	printf("Net Sum of Diagonals is: %d.\n", sum);
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
