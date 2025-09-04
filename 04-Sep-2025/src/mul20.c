#include <stdio.h>
#include "utils/getn.h"

#define FOREVER while(1)

int main () {

	int n;
	FOREVER {
		fputs("Enter Number: ", stdout);
		n = getn();
		if (n % 20) printf("div20: NO. Other two numbers are: %d, %d\n", n / 20 * 20, n / 20 * 20 + 20);
		else puts("div20: YES.\n");
	}
}
