#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book { 
	char title[50];
	char author[50];
	int price;
	int copies;
}; 

int main() {
	int n, flag = 0;
	char needle[50];
	printf("Number of Books: ");
	scanf("%d", &n);
	
	struct Book books[n];
	struct Book *b;
	
	for (int i = 0; i < n; i++) {
		printf("Enter Title | Author | Price | Copies of book %d separated by '|': ", i);
		scanf(" %[^|]|%[^|]| %d | %d", books[i].title, books[i].author, &books[i].price, &books[i].copies);
	}

	printf("\n\n Book Name to look for: ");
	scanf(" %[^\n]", needle);
	
	for (int i = 0; i < n; i++) {
		if (strcmp(books[i].title, needle) == 0) {
			flag = 1;
			b = &books[i];
			printf("\nBook Title: %s\nAuthor: %s\nPrice: %dRs.\nCopies: %d\n", b->title, b->author, b->price, b->copies);
		}
	}

	if (!flag)
		printf("No such books found.");
}
