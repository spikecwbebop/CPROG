#include <stdio.h>
// 20th FEB
int main()
{
    int var1;
    printf("Enter your number: \n");
    scanf("%d", &var1);

    if(var1 > 0)
    {
        if(var1 < 5)
        {
            printf("The number is greater than 0 and less than 5 \n");
        }
        else
        {
            printf("The number is greater than 5");
        }
    }
    else
    {
        printf("The number is not greater than 0 \n");
    }

}
