// Question: Count the no of even & odd ints using ptrs.
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
	int even_n = 0, odd_n = 0, val;

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
		for (register short j = 0; j < ncol; j++) {
			val = *(*(data + i) + j);
			if (val % 2 == 0) 
				even_n++;
			else
				odd_n++;
		}

	}
	printf("Frequency of Odd Numbers %d.\n", odd_n);
	printf("Frequency of Even Numbers %d.\n", even_n);
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
