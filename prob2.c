#include <stdio.h>
#include <math.h>

// Assignment Prob2

int main() 
{
	double secs, hrstemp, minstemp;
	int hrs, minstemp1, sectemp, sectemp1;
	printf("Enter your time in seconds: ");
	scanf("%lf", &secs);	
	
	hrstemp = secs / 3600; 
	hrs = secs / 3600;
	minstemp = (hrstemp - hrs) * 60;
	minstemp1 = minstemp;
	sectemp = secs;
	sectemp1 = sectemp % 60;

	printf("%d hours, %d minutes and %d seconds \n", hrs, minstemp1, sectemp1);

	return 0;
}
