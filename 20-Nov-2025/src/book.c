#include <stdio.h>
#include <stdlib.h>

struct Book { 
	char title[50];
	char author[50];
	int price;
}; 

int main() {
	struct Book books[3] = {};
	
	for (int i = 0; i < 3; i++) {
		printf("Enter Title | Author | Price of book %d separated by '|': ", i);
		scanf(" %[^|]|%[^|]|%d", books[i].title, books[i].author, &books[i].price);
	}
	
	for (int i = 0; i < 3; i++) {
		printf("\nBook Title: %s\nAuthor: %s\nPrice: %dRs.\n", books[i].title, books[i].author, books[i].price);
	}
}
