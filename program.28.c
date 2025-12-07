#include <stdio.h>

int main()  
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double disc = b * b - 4 * a * c;
    printf("%.4f\n", disc);
    return 0;
}
