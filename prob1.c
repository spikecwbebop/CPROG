#include <math.h>
#include <stdio.h>

// Assignment Prob1

int main() 
{
	double x, x3, x2, xroot, sum, x1;
	printf("Enter any number: ");
	scanf("%lf", &x);

	x3 = pow(x, 3);
	x2 = pow(x, 2);
	x1 = 12*x;
	sum = x3 + x2 - x1 - 12;
	
	if(sum >= 0)
       	{
		xroot = sqrt(sum);
		printf("%lf\n", xroot);		
	}
	else 
	{
		printf("The number you gave input, yields in negative number under root, hence it is invalid.\n");
	}

	return 0;
}
