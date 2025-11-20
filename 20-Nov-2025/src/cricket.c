#include <stdio.h>
#include <stdlib.h>

struct Cricketer { 
	char name[50];
	int matches;
	int runs;
	float average;
}; 

int main() {
	struct Cricketer team[10] = {};
	struct Cricketer *max;
	
	for (int i = 0; i < 10; i++) {
		printf("Enter Name | Matches | runs | average of cricketer %d separated by '|': ", i);
		scanf(" %[^|]| %d | %d | %f", team[i].name, &team[i].matches, &team[i].runs, &team[i].average);
	}
	
	max = &team[0];
		
	for (int i = 1; i < 10; i++) {
		if (team[i].average > max->average) 
			max = &team[i];		
		}
	
	printf("\nHighest Average Player:\n\tName: %s\n\tMatches: %d\n\tRuns: %d\n\tAverage: %.2f\n", 
		max->name, max->matches, max->runs, max->average);
}
