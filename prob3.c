#include <stdio.h>

// Assignment Problem 3 

int main() 
{
	char inpchar, outchar;
	int char_ascii;

	printf("Enter any alphabet: ");
	scanf("%c", &inpchar);
	char_ascii = inpchar;
	
	if( (char_ascii >= 65 && char_ascii < 90) || (char_ascii >= 97 && char_ascii < 122 ))
	{
		char_ascii += 1;
		outchar = char_ascii;
		printf("The next alphabet is %c.\n", outchar);
	}
	else if( char_ascii == 90 || char_ascii == 122)
	{
		printf("You have entered the last alphabet.\n");
	}
	else
	{
		printf("You have not entered an alphabet. \n");
	}

	return 0;
	
}
