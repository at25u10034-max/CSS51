// Question:

#include <stdio.h>

long nCr(int n, int r);
long fact(int);

int main() {
	int n, r;
	long C;
	printf("Enter n and r: ");
	scanf("%d %d", &n, &r);
	if (n < r || n < 0 || r < 0) {
		printf("Invalid Values!!");
		return 1;
	}
	C = nCr(n, r);

	printf("%dC%d = %ld.\n", n,r,C);
	return 0;
}

long nCr(int n, int r){
	return fact(n) / (fact(r) * fact(n - r));
}

long fact(int n) {
	if (n == 0)
		return 1;
	return n * fact(n - 1);
}
