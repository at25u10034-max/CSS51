#include <stdio.h>
#include "utils/getn.h"

#define FOREVER while(1)


int main() {
	int a, b, max;

	FOREVER {
		fputs("Enter First number (a): ", stdout);
		a = getn();

		fputs("Enter Second number (b): ", stdout);
		b = getn();

		max = a > b ? a : b;
		printf("Maximum value is: %d\n\n", max); 
	}
}
