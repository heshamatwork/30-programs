#include <stdio.h>
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double sum = a + b;
    double prod = a * b;
    printf("%g %g\n", sum, prod);
    return 0;
}
