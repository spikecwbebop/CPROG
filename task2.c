#include <stdio.h>
#include <math.h>

// 15th FEB
int main()
{
    double area, perimeter, radius;
    printf("Enter the radius of the circle : \n");
    scanf("%lf", &radius);
    const float pi = 3.14;
    area = pi * pow(radius, 2);
    perimeter = 2 * pi * radius;
    printf("The area of the circle is : %lf\n", area);
    printf("The perimeter of the circle is : %lf\n", perimeter);

    return 0;
}
