#include <stdio.h>
#include <math.h>
int main()
{
    double num = 15.58971;
    int integral = (int)num;
    double fractional = num - integral;
    printf("%d %.5f\n", integral, fractional);
    return 0;
}
