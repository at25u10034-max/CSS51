#include <stdio.h>
#include <stdlib.h>

struct Product {
	int id; 
	char name[50];
	int price;
	int quantity;
}; 

int main() {
	int n;
	struct Product *max;
	printf("Number of Products: ");
	scanf("%d", &n);
	struct Product list[n];
	
	for (int i = 0; i < n; i++) {
		printf("Enter Name | Price | Quantity of product %d separated by '|': ", i);
		list[i].id = i;
		scanf(" %[^|]| %d | %d", list[i].name, &list[i].price, &list[i].quantity);
		
	}

	max = &list[0];
	
	for (int i = 1; i < n; i++) {
		if (list[i].price > max->price) 
			max = &list[i];
	}

	printf("\nMost Expensive Product:\n\tID: %d\n\tName: %s\n\tPrice: %d\n\tQuantity: %d\n", 
		max->id, max->name, max->price, max->quantity);
}
