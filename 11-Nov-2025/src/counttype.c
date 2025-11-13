#include <stdio.h>

void counttype(char* string, int count[]); 

int main() {
	char input[100];
	int count[4] = {0};
	
	printf("Enter a string: ");
	fgets(input, 100, stdin);

	counttype(input, count);
	printf("Number of Vowel: %d\n", count[0]);
	printf("Number of Consonant: %d\n", count[1]);
	printf("Number of Digits: %d\n", count[2]);
	printf("Number of Whitespace: %d\n", count[3]);
	
	return 0;
}


void counttype(char* string, int count[4]) {
	int i = 0;
	char c = string[0];
	while (c) {

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
				count[0]++;
				break;

			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				count[2]++;
				break;

			case ' ':
			case '\n':
			case '\t':
			case '\r':
			case '\v':
			case '\f':
				count[3]++;
				break;

			default:
				if (c <= 'z' && c >= 'A') count[1]++;
		}
	
		c = string[++i];
	}
}
