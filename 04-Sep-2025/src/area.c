#include <stdio.h>
int main() {
	int l, b, area;
	printf("Enter Length of Rectangle: ");
	scanf("%d", &l);
	printf("Enter Breadth of Rectangle: ");
	scanf("%d", &b);

	if (l < 0 || b < 0) {
		printf("Length cannot be negative.\n");
		return 1;
	}

	area = l * b;
	printf("Area of Rectangle is: %d units.\n\n", area);

	return 0;
}
