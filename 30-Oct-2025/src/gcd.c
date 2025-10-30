// Question: GCD using function

#include <stdio.h>

// Euclidean Division Lemma
int gcd (int dr, int dn) {
	if (dn % dr == 0)
		return dr;

	return gcd(dn % dr, dr);
}

int main() {
	int a,b,g,M,m;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);
	
	if (b < 0 || a < 0) {
		printf("Invalid Number(s)!!");
		return 1;
	}

	m = a < b ? a : b;
	M = a > b ? a : b;
	
	g = gcd(m, M);
	printf("gcd(%d, %d) = %d\n", m, M, g);

	return 0;
}
