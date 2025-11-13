#include <stdio.h>
#include <string.h>

void strrev(char* dest, char* src);

int main() {
	char input[100], reverse[100];
	
	printf("Enter a string: ");
	fgets(input, 100, stdin);

	strrev(reverse, input);
	printf("Reversed string is: %s\n", reverse);
	
	return 0;
}


void strrev(char* dest, char* src) {
	int size = strlen(src);
	for (int i = 0; i < size; i++) {
		dest[i] = src[size - i - 1];
	}
	dest[size] = '\0';	  
}
