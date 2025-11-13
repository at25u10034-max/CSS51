#include <stdio.h>

void countchar(char* string, char* buffer); 

int main() {
	char input[100], buffer[256] = {0};
	
	printf("Enter a string: ");
	fgets(input, 100, stdin);
	countchar(input, buffer);

	for (int i = 0; i < 256; i++) {
		if (buffer[i])
			printf("Frequency of character (%c) (ASCII = %d) -> (%d).\n", i, i, buffer[i]);
	}
	
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
