#include <stdio.h>
int main()
{
	const double PI = 3.14159;
	double radius, height;
	scanf("%lf %lf", &radius, &height);
	double volume = PI * radius * radius * height;
	printf("%.4f\n", volume);
	return 0;
}
