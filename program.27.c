#include <stdio.h>

int main()
{
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    int total = h * 3600 + m * 60 + s;
    printf("%d\n", total);
    return 0;
}
