#include <stdio.h>
// 20th FEB
int main()
{
    int var1;
    printf("Enter the year: \n");
    scanf("%d", &var1);

    if(var1 % 4 == 0 && var1 % 100 != 0)
    {
        printf("The year is leap year \n");
    }
    else if(var1 % 400 == 0)
    {
        printf("The year is leap year");
    }
    else
    {
        printf("The year is not leap year");
    }

    return 0;
}
