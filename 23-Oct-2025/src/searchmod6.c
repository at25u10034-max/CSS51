// Search and display all elements that are divisible by 6 in a 2D array.
#include <stdio.h>


int main() {
	int N, M;
	printf("Enter size of matrix as NxM format. N is Rows, M is Columns.\nNxM: ");
	scanf("%dx%d", &N, &M);
	int matrixA[N][M];


	// I/P
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("Enter Value of Matrix A[%d][%d]:", i, j);
			scanf("%d", &matrixA[i][j]);
		}
	}

	// Processing & O/P
	char found = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (matrixA[i][j] % 6 == 0) {
				found ? printf(" ,%d", matrixA[i][j]) : printf("%d", matrixA[i][j]);
				found = 1;
			}
		}
	}
	printf("\n");
}
