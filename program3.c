#include <stdio.h>
int main()
{
    int a=7, b=12, temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d\n", a, b);
    return 0;
}
