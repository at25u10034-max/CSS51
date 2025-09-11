#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FOREVER while(1)

void iflush(void) {
	char _;
	while ((_ = getchar()) != '\n' && _ != EOF);
}

int main(void) {
	int n1, n2, flag;
	do {
		fputs("Enter a number (n1): ", stdout);
		scanf("%d", &n1);
		iflush();

		fputs("Enter another number (n2): ", stdout);
		scanf("%d", &n2);
		iflush();

		printf("%d + %d = %d\n\n", n1, n2, n1+n2);
		fputs("Continue (0: STOP) (Other Integer: CONTINUE)? ", stdout);
		scanf("%d", &flag);
		iflush();
		
	} while (flag);

	return 0;
}
