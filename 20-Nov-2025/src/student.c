#include <stdio.h>
#include <stdlib.h>

struct Student { 
	int math;
	int phy;
	int chem;
}; 

int ceildiv(int d, int r) {
	return d % r ? d / r : d / r + 1;
}

int main() {
	struct Student students[5] = {};
	struct Student *s;
	int total;
	char grade[11] = "FFFFFPDCBAE";
	
	for (int i = 0; i < 5; i++) {
		s = &students[i];
		printf("Enter Math Physics Chem marks of student %d separated by ' ': ", i);
		scanf("%d %d %d", &s->math, &s->phy, &s->chem);
	}

	
	for (int i = 0; i < 5; i++) {
		s = &students[i];
		total =  s->math + s->phy + s->chem;
		printf("For Student %d: \n", i);
		printf("\nMaths Score: %d\nPhysics Score: %d\nChemistry Score: %d", s->math, s->phy, s->chem);
		printf("\nTotal Score: %d", total);
		printf("\nPercentage: %.2lf%%", total / 300.);
		printf("\nGrade: %c\n\n", grade[ceildiv(total,30)]);
	}

	
}
