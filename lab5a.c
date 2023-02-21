#include <stdio.h>
// 20th FEB
int main()
{
    int var1;
    printf("Enter your grade: \n");
    scanf("%d", &var1);

    if(var1 >= 90)
    {
        printf("Your grade is A \n");
    }
    else if(var1 >= 80 && var1 < 90)
    {
        printf("Your grade is B \n");
    }
    else if(var1 >=70 && var1 < 80)
    {
        printf("Your grade is C \n");
    }
    else
    {
        printf("You failed");
    }
}
