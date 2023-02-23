#include <stdio.h>

int main() 
{
	int num1, num2, num3, num1temp, num2temp, num3temp;
	
	printf("This is a shuffling program.\nYou are about to enter three numbers.\nHere, A = 1st number, B = 2nd number, C= 3rd number.\nShuffling Order: a -> b -> c -> a\n");
	printf("A = ");
	scanf("%d", &num1);
	printf("B = ");
	scanf("%d", &num2);
	printf("C = ");
	scanf("%d", &num3);
	
	num2temp = num1;
	num3temp = num2; 
	num1temp = num3;

	printf("\nA = %d\n", num1temp);
	printf("B = %d\n", num2temp);
	printf("C = %d\n", num3temp);
	printf("Shuffling Done\n");

	return 0;

}
