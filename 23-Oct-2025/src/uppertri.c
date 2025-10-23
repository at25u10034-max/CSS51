// Check whether a matrix is an upper triangular matrix.
#include <stdio.h>

// An upper triangular matrix (square) is one whose LOWER TRIANGLE is null.
/*
	| x y z |
	| 0 z w |
	| 0 0 v |
*/
int main() {
	int N;
	char utri = 1;
	printf("Enter dimension of square matrix.\nN: ");
	scanf("%d", &N);
	int matrixA[N][N];

	// I/P
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("Enter Value of Matrix A[%d][%d]:", i, j);
			scanf("%d", &matrixA[i][j]);
		}
	}

	// Proc
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (matrixA[i][j] != 0) {
				utri = 0;
				goto out;
			}
		}
	}


	// O/P
	out: printf("Matrix: \n");
	for (int i = 0; i < N; i++) {
		printf("|\t");
		for (int j = 0; j < N; j++) {
			printf("%d\t", matrixA[i][j]);
		}
		printf("|\n");
	}

	if (utri) 
		printf("Matrix is an Upper Triangular Matrix.\n");
	else
		printf("Matrix is not an Upper Triangular Matrix.\n");

}
