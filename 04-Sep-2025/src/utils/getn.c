#include <stdio.h>

int getn() {
	int num = 0;
	signed char neg = 1;
	
	char c = getchar();

	// Collect -ve and get next char.
	if (c == '-') {
		neg = -1;
		c = getchar(); 
	}
	
	while (c != '\n' && c != EOF) {
		if (c > '9' || c < '0') {
			fprintf(stderr, "Invalid character (%c) val (%d). Default Value (0) returned.\n", c, c);
			while ((c = getchar()) != '\n' && c != EOF);
			return 0;
		}

		num *= 10;
		num += c - '0';
		c = getchar();
	}

	return num * neg;
}
