// Add two matrices and transpose it.
#include <stdio.h>

int main() {
	int N, M;
	printf("Enter size of matrix as NxM format. N is Rows, M is Columns.\nNxM: ");
	scanf("%dx%d", &N, &M);
	int matrixA[N][M], matrixB[N][M], matrixC[N][M], matrixT[M][N];


	// I/P
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("Enter Value of Matrix A[%d][%d]:", i, j);
			scanf("%d", &matrixA[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("Enter Value of Matrix B[%d][%d]:", i, j);
			scanf("%d", &matrixB[i][j]);
		}
	}


	// Processing
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
		}
	}

	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			matrixT[j][i] = matrixC[i][j];
		}
	}

	// O/P
	printf("[C] = [A] + [B]: \n");
	for (int i = 0; i < N; i++) {
		printf("|\t");
		for (int j = 0; j < M; j++) {
			printf("%d\t", matrixC[i][j]);
		}
		printf("|\n");
	}

	printf("[C]': \n");
	for (int i = 0; i < M; i++) {
		printf("|\t");
		for (int j = 0; j < N; j++) {
			printf("%d\t", matrixT[i][j]);
		}
		printf("|\n");
	}
}
