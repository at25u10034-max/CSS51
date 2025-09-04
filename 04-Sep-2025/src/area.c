#include <stdio.h>
#include "utils/getn.h"

#define FOREVER while(1)

int main() {
	int l, b;
	FOREVER {
		printf("Enter Length of Rectangle: ");
		l = getn();
		printf("Enter Breadth of Rectangle: ");
		b = getn();

		if (l < 0 || b < 0) {
			fprintf(stderr, "Length cannot be negative.\n");
			continue;
		}

		printf("Area of Rectangle is: %d units.\n\n", l * b);
	}

	return 0;
}
