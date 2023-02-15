#include <stdio.h>
#include <math.h>

// 15th FEB
int main()
{
    double hyp, base, height, area, m, n;
    printf("Enter the hypotenuse and base for your right triangle : \n");
    scanf("%lf%lf", &hyp, &base);
    m = pow(hyp, 2) - pow(base, 2);
    height = sqrt(m);
    area = height * base * 0.5;

    printf("The height of the triangle is : %lf \n", height);
    printf("The area of the triangle is : %lf \n", area);

    return 0;

}
