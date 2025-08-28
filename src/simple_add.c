/*
================================================================================
                                Simple Addition                                 
================================================================================
The main objective of this program is to find the sum of two stored variables 
and printing their sum.

@author: Anurag Tewary (Uday Shankar)
@rollno: 25B80005
@date: Aug 28, 2025
*/

int printf(const char*, ...);

typedef signed char tiny;

int main(int argc, const char **argv) {
	
	tiny a = 5, b = 3;
	tiny sum = a+b;
	printf("Number a:%d, b:%d. a+b=%d\n", a, b, sum);
	// putchar(a+b+'0');
	return 0;
}
