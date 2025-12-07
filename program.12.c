#include <stdio.h>
#define PI 3.14159

int main() {
    double r;
    scanf("%lf", &r);
    double area = PI * r * r;
    printf("%.4f\n", area);
    return 0;
}
