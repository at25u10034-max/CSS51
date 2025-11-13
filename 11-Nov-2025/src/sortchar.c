#include <stdio.h>
#include <string.h>

void strsort(char*, int);

int main() {
	char input[100];
	
	printf("Enter a string: ");
	fgets(input, 100, stdin);

	strsort(input, strlen(input));
	printf("Sorted string is: %s\n", input);
	
	return 0;
}

void strsort (char* str, int size) {
	char temp;
	int max_idx;
	for (register short j = size - 1; j > 0; j--) {
		max_idx = 0;
		for (register short k = 0; k <= j; k++) {
			if (*(str + k) > *(str + max_idx))
				max_idx = k;
		}
		// Swap Last and Max
		temp = *(str + max_idx);
		*(str + max_idx) = *(str + j);
		*(str + j) = temp;
	}
	
}
