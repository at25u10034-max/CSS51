#include <stdio.h>

void countchar(char* string, char* buffer); 

int main() {
	char str1[100], str2[100], buffer[256] = {0}, c;
	int flag = 1, i = 0;
	printf("Enter a string: ");
	fgets(str1, 100, stdin);

	printf("Enter another string: ");
	fgets(str2, 100, stdin);
	
	c = str1[0];
	while (c) {
		buffer[(int)c]++;
		c = str1[++i];
	}

	i = 0;
	c = str2[0];
	while (c) {
		buffer[(int)c]--;
		c = str2[++i];
	}

	for (int i = 0 ; i < 255; i++) {
		if (buffer[i]) flag = 0;
	}

	if (flag) {
		printf("Strings are anagrams.\n");
	} else {
		printf("Strings are NOT anagrams.\n");		
	}
	return 0;
}
