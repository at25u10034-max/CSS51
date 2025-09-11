#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FOREVER while(1)


typedef struct Node {
	int val;
	struct Node* next;
} Node;


void iflush(void) {
	char _;
	while ((_ = getchar()) != '\n' && _ != EOF);
}

void gc (Node* node) {
	if (node->next != NULL) gc(node->next);
	free(node);
}

int main(void) {
	Node* HEAD = malloc(sizeof(Node*));
	Node* curr = HEAD;
	bool headed = false;

	do {
		curr = headed ? curr->next : curr;
		headed = true; 

		fputs("Enter a number (n): ", stdout);
		scanf("%d", &(curr->val));
		iflush();

		curr->next = malloc(sizeof(Node*));
	} while (curr->val);

	curr = HEAD;
	puts("Numbers input by user:");

	while (curr->next->next != NULL) {
		printf("%d,", curr->val);
		curr = curr->next;
	}
	puts("0");
	gc(HEAD);
	
	return 0;
}
