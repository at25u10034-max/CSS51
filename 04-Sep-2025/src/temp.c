#include <stdio.h>

int main() {
	// C / 5 = (F - 32) / 9;
	float temp, tempv;
	char unit;
	puts("Enter a temperature value in deg C | F.\nAppend with the unit.\nFor Example:\n\t25.0C\n\t250F ");
	printf("Enter Temperature: ");
	scanf("%f%c", &temp, &unit);
	
	if (unit == 'C' || unit == 'c') {
		tempv = temp * 9 / 5. + 32;
		printf("Temperature: %.2fC == %.2fF.\n\n", temp, tempv);
	} else if (unit == 'F' || unit == 'f') {
		tempv = (temp - 32) * 5 / 9.;
		printf("Temperature: %.2fF == %.2fC.\n\n", temp, tempv);	
	} else printf("Invalid or unsupported unit.\n\n");

	return 0;
}
