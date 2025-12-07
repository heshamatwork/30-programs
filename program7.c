#include <stdio.h>
int main()
{
    double f;
    scanf("%lf", &f);
    double c = (5.0 / 9.0) * (f - 32.0);
    printf("%.2f\n", c);
    return 0;
}
