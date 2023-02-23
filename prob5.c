#include <stdio.h>

int main() 
{
	double num1, num2, num3;
	printf("You are about to enter three numbers.\n");
	printf("First Number: ");
	scanf("%lf", &num1);
	printf("Second Number: ");
	scanf("%lf", &num2);
	printf("Third Number: ");
	scanf("%lf", &num3);

	if(num1 > num2 && num1 > num3)
	{
		if(num2 > num3)
		{
			printf("%lf is the second largest of the three numbers, you entered.\n", num2);
		}
		else
		{
			printf("%lf is the second largest of the three numbers, you entered.\n", num3);
		}

	}

	else if(num2 > num1 && num2 > num3)
	{
		if(num1 > num3) 
		{
			printf("%lf is the second largest of the three numbers, you entered.\n", num1);
		}
		else
		{
			printf("%lf is the second largest of the three numbers, you entered.\n", num3);
		}	

	}
	else
	{
		if(num1 > num2)
		{
			printf("%lf is the second largest of the three numbers, you entered.\n", num1);
		}
		else
		{
			printf("%lf is the second largest of the three numbers, you entered.\n", num2);
		}
	}



	return 0;
}
