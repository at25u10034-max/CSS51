/*
================================================================================
                                CGPA Calculation                                
================================================================================
Given 5 numbers, this program calculates the CGPA.

@author: Anurag Tewary (Uday Shankar)
@rollno: 25B80005
@date: Aug 28, 2025
*/

int printf(const char*, ...);
typedef signed char tiny;

int main(int, const char**) {	
	tiny mac01 = 10, csc01 = 10, xec01 = 8, phc01 = 8, cyc01 = 7;
	tiny cgpa = (mac01+csc01+xec01+phc01+cyc01) / 5;
	
	printf("CPGA: %d\n", cgpa);	
	return 0;
}
