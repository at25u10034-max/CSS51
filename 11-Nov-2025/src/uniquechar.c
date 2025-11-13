#include <stdio.h>

void countchar(char* string, char* buffer); 

int main() {
	char input[100], output[100], buffer[256] = {0}, c;
	int i = 0, j = 0;
	printf("Enter a string: ");
	fgets(input, 100, stdin);

	c = input[0];
	while (c) {
		if (!buffer[(int)c]) {
			output[j++] = c;
			buffer[(int)c] = 1;
		}
		c = input[++i];
	}
	output[j++] = '\0';

	printf("Unique string is: %s", output);
	
	return 0;
}


void countchar(char* string, char buffer[256]) {
	int  i = 0;
	char c = string[0];
	while (c) {
		buffer[(size_t) c]++;
		c = string[++i];
	}
}
