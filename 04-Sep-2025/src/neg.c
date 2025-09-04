#include <stdio.h>
#include "utils/getn.h"

#define FOREVER while(1)


int main() {
	int n;

	FOREVER {
		fputs("Enter a number: ", stdout);
		n = getn();

		printf("n (%d) is: ", n);
		puts(n ? (n < 0 ? "-ve" : "+ve") : "zero");
		puts("");
	}
	
}
