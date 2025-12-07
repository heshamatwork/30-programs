#include <stdio.h>

int main() 
{
    char name[50];
    int age;
    float height;
    char gender;
    scanf("%s %d %f %c", name, &age, &height, &gender);
    printf("%s %d %.2f %c\n", name, age, height, gender);
    return 0;
}
