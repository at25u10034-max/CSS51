#include <stdio.h>
#include <string.h>

void printval(char* str, int depth, int size);

int main() {
	int size;
	
	printf("Enter number of digits: ");
	scanf("%d", &size);

	printf("All Possible Permutations are: \n");
	printval("", size, size);
	return 0;
}

void printval(char* str, int depth, int size) {
	if (!depth) {
		puts(str);
		return;	
	}
	
	char str0[size], str1[size];
	strcpy(str0, str);
	strcpy(str1, str);
	strcat(str0, "0");
	strcat(str1, "1");

	
	printval(str0, depth - 1, size);
	printval(str1, depth - 1, size);
}
