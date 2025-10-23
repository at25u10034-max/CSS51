// Find the frequency of a needle in a 20-integer array.

#include <stdio.h>

int main() {
	int data[20], needle;
	short count = 0;
	// Separated input and processing for demonstration.
	for (short i = 0; i < 20; i++) {
		printf("Enter number to store in data[%hd]: ", i);
		scanf("%d", &data[i]);
	}
	printf("Enter number to search for (needle): ");
	scanf("%d", &needle);
	
	for (short i = 0; i < 20; i++)
		if(data[i] == needle)
			count++;

	if (count)
		printf("Integer (%d) occurs %hd times in given data.\n", needle, count);
	else 
		printf("No elements found matching (%d)\n", needle);
	return 0;
}
