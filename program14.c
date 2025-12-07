#include <stdio.h>

int main() {
    double mm;
    scanf("%lf", &mm);
    double inches = mm / 25.4;
    printf("%.4f\n", inches);
    return 0;
}
