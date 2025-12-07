#include <stdio.h>
int main() 
{
    int roll;
    int m1, m2, m3;
    scanf("%d %d %d %d", &roll, &m1, &m2, &m3);
    int total = m1 + m2 + m3;
    double average = total / 3.0;
    printf("%d %d %.2f\n", roll, total, average);
    return 0;
}
