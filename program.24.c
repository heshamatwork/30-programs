#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int total = a + b + c + d + e;
    double avg = total / 5.0;
    printf("%d %.2f\n", total, avg);
    return 0;
}
