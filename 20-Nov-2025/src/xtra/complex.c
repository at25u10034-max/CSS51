#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Complex {
	double real;
	double imag;
} Complex;

Complex add_val(const Complex, const Complex);
double mag(const Complex);
void add_ref(const Complex*, const Complex*, Complex* res);
void mul_ref(const Complex*, const Complex*, Complex* res);
void conj_ref(const Complex*, Complex* res);
void sum_array(const Complex[], int n, Complex* res);
int comp(const void *, const void*);

int main() {
	Complex A, B;

	printf("Enter Complex Number in a + bj format: ");
	scanf("%lf + %lfj", &A.real, &A.imag);
	
	printf("Enter Complex Number in a + bj format: ");
	scanf("%lf + %lfj", &B.real, &B.imag);

	Complex sum = add_val(A,B);
	printf("A + B val: %.2f + %.2fj\n", sum.real, sum.imag);

	Complex sum2;
	add_ref(&A, &B, &sum2);
	printf("A + B ref: %.2f + %.2fj\n", sum2.real, sum2.imag);
		
	Complex* conj = malloc(sizeof(Complex));
	conj_ref(&A, conj);
	printf("Conjugate A: %.2f + %.2fj\n", conj -> real, conj -> imag);

	printf("|A| = %.2f\n|B| = %.2f\n", mag(A), mag(B));

	Complex* mul = malloc(sizeof(Complex));
	mul_ref(&A, &B, mul);
	printf("A * B ref: %.2f + %.2fj\n", mul -> real, mul -> imag);

	
	int n;
	printf("Number of Complexes: ");
	scanf("%d", &n);
	Complex arr[n];

	for (int i = 0; i < n; i++) {
		printf("Enter Complex Number in a + bj format: ");
		scanf("%lf + %lfj", &arr[i].real, &arr[i].imag);
	}

	Complex *suma;
	sum_array(arr, n, suma);
	printf("Sum of Array: %.2f + %.2fj\n", suma -> real, suma -> imag);
	
 	qsort(arr, n, sizeof(Complex), comp);

 	printf("Sorted Array: \n");
 	for (int i = 0; i < n; i++) {
		printf("%.2f + %.2fj\n", arr[i].real, arr[i].imag);
	}
}

Complex add_val(const Complex a , const Complex b) {
	Complex t = {a.real + b.real, a.imag + b.imag};
	return t;
}

void add_ref(const Complex* a, const Complex* b, Complex* res) {
	res->real = a->real + b->real;
	res->imag = a->imag + b->imag;
}

void mul_ref(const Complex* a, const Complex* b, Complex* res) {
	res->real = (a->real * b->real) - (a->imag * b->imag);
	res->imag = (a->real * b->imag) + (a->imag * b->real);
}

void conj_ref(const Complex* a, Complex* res) {
	res->real = a -> real;
	res->imag = -(a -> imag);
}

void sum_array(const Complex arr[], int n, Complex* res) {
	for (int i = 0; i < n; i++) {
		res -> real += arr[i].real;
		res -> imag += arr[i].imag;
	}
}


double mag(const Complex a) {
	return sqrt(pow(a.real, 2) + pow(a.imag, 2));
}

int comp(const void *a, const void *b) {
	return (int) (mag(*(Complex*)a) - mag(*(Complex*)b));
} 

