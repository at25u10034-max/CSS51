// Initialize a 2D array (5x5) with integer values and find the minimum and maximum element of the array.
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {
	int data[5][5] = {{1,2,3,4,5},
					  {6,7,8,9,10},
					  {11,12,-55,14,15},
					  {16,17,18,19,20},
					  {21,22,23,24,25}
					 };

	int max = 0, min = INT_MAX, datum;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			datum = data[i][j];
			if (datum > max) max = datum;
			if (datum < min) min = datum;
		}
	}

	printf("Maximum value of data is: %d.\n", max);
	printf("Minimum value of data is: %d.\n", min);
}
