#include <stdio.h>
#include "utils/getn.h"

#define FOREVER while(1)

int main() {
	// C / 5 = (F - 32) / 9;

	FOREVER {
		float temp, tempv;
		char unit, _;
		puts("Enter a temperature value in deg C | F.\nAppend with the unit.\nFor Example:\n\t25.0C\n\t250F ");
		fputs("Enter Temperature: ", stdout);
		scanf("%f%c", &temp, &unit);
		while ((_ = getchar()) != '\n' && _ != '\r' && _ != EOF);

		if (unit == 'C' || unit == 'c') {
			tempv = temp * 9 / 5. + 32;
			printf("Temperature: %.2fC == %.2fF.\n\n", temp, tempv);
		} else if (unit == 'F' || unit == 'f') {
			tempv = (temp - 32) * 5 / 9.;
			printf("Temperature: %.2fF == %.2fC.\n\n", temp, tempv);	
		} else fputs("Invalid or unsupported unit.\n\n", stderr);
		
	}
}
