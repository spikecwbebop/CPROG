#include <stdio.h>
// 15th FEB 
int main()
{
    double var1,var2, var3, var4, var5, sum, average;
    printf("Enter five numbers : \n");
    scanf("%lf%lf%lf%lf%lf", &var1, &var2, &var3, &var4, &var5);

    sum = var1 + var2 + var3 + var4 + var5;
    average = sum / 5;
    printf("The average is : %lf", average);

    return 0;
}
