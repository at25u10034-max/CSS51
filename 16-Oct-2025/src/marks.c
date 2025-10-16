// Take the marks of 5 subjects and store them in an array. Compute total marks.
// Display pass if:
// 		1. At least 33 marks in each subject.
//		2. More than 90% overall.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
	int marks[5], sum = 0;
	float percentage;
	char subjects[5][6] = {"CSC01", "XEC01", "XEC02", "MAC01", "ESC01"};
	char *failsubs = malloc(30 + 5 + 1);
	bool fail = false;

	// Separated input and processing for demonstration.
	for (short i = 0; i < 5; i++) {
		printf("Enter marks (out of 100) in (%s): ", subjects[i]);
		scanf("%d", &marks[i]);
		if (marks[i] > 100 || marks[i] < 0) {
			fputs("Invalid Value\n", stderr);
			return 1;
		}
	}

	for (short i = 0; i < 5; i++) {
		sum += marks[i];
		if (marks[i] <= 33) 
			fail = (strcat(failsubs, subjects[i]), strcat(failsubs, " "), true);
	}

	percentage = sum / 5.f;

	if (percentage <= 90.f) fail = true;
	printf("Total Marks: %d\n", sum);
	printf("Percentage score: %.2f%%\n", percentage);
	printf("Pass status: %s\n", fail ? "Fail" : "Pass");

	if (strlen(failsubs))
		printf("Failing Subjects: %s\n", failsubs);
	
	return 0;
}
