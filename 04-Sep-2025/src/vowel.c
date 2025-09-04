#include <stdio.h>
#include "utils/getn.h"
#include <stdbool.h>

#define FOREVER while(1)


int main() {
	char c, _;
	bool islower, isupper;

	FOREVER {
		fputs("Enter a character: ", stdout);
		c = getchar();
		while ((_ = getchar()) != '\n' && c != EOF);

		islower = (c <= 'z' && c >= 'a');
		isupper = (c <= 'Z' && c >= 'A');
		
		if (!(islower || isupper)) {
			fprintf(stderr, "Invalid Character (%c).\n", c);
			continue;
		}

		switch (c) {
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				printf("(%c) is a vowel.\n", c);
				break;
			case 'y':
			case 'Y':
				printf("(%c) is a semi-vowel.\n", c);
				break;
			default:
				printf("(%c) is a consonant.\n", c);
				
		}
	}
	
}
