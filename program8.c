#include <stdio.h>
int main()  
{
    double a,b,c,d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    double max = a;
    
    if(b>max) max=b;
    
    if(c>max) max=c;
    
    if(d>max) max=d;
    
    printf("%g\n", max);
    return 0;
}
