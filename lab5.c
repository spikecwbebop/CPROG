#include <stdio.h>
// 20TH FEB
int main()
{
    int var1, var2;
    printf("Enter an integer : \n");
    scanf("%d", &var1);
    var2 = var1 % 2;

    if(var2 == 0)
    {
        printf("Your number is even \n");
    }
    else
    {
        printf("Your number is odd \n");
    }

    return 0;
}
