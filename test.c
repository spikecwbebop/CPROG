#include <stdio.h>

int main() {

	// INTEGER
	int var1;
	printf("Enter an integer number: ");
	scanf("%d", &var1);
	printf("The integer number is : %d \n", var1);

	// FLOAT
	float var2;
	printf("Enter a float or fractional number: ");
	scanf("%f", &var2);
	printf("The float or fractional number is : %f \n", var2);

	// CHARACTER
	char var3;
	printf("Enter an alphabet: ");
	scanf(" %c", &var3);
	printf("The character is : %c \n", var3);

	// Double
	double var4;
	printf("Enter a large number: ");
	scanf("%lf", &var4);
	printf("The large number is : %lf \n", var4);
}

