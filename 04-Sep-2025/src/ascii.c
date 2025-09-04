#include <stdio.h>
#include "utils/getn.h"

#define FOREVER while(1)

int main() {
	FOREVER {
		char c, _;
		fputs("Enter a character: ", stdout);
		c = getchar();
		if (c != '\n' && c != EOF) while ((_ = getchar()) != '\n' && _ != EOF);

		printf("ASCII value of (%c) is (%d).\n\n", c, c);
	}
}
