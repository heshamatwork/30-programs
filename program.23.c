#include <stdio.h>

int main() 
{
    double r;
    scanf("%lf", &r);
    double area = 3.14159 * r * r;
    double circumference = 2 * 3.14159 * r;
    printf("%.4f %.4f\n", area, circumference);
    return 0;
}
