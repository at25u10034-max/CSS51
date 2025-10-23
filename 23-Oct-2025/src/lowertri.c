// Check whether a matrix is a lower triangular matrix.
#include <stdio.h>

// A lower triangular matrix (square) is one whose UPPER TRIANGLE is null.
/*
	| x 0 0 |
	| y z 0 |
	| w u v |
*/
int main() {
	int N;
	char ltri = 1;
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
		for (int j = i + 1; j < N; j++) {
			if (matrixA[i][j] != 0) {
				ltri = 0;
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

	if (ltri) 
		printf("Matrix is a Lower Triangular Matrix.\n");
	else
		printf("Matrix is not a Lower Triangular Matrix.\n");

}
